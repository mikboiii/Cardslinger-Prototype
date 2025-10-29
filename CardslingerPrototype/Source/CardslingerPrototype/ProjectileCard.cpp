// Fill out your copyright notice in the Description page of Project Settings.

#include "ProjectileCard.h"
#include "Kismet/GameplayStatics.h"
#include "Components/BoxComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SceneComponent.h"
#include "Engine/DamageEvents.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "BaseAIClass.h"
#include "DrawDebugHelpers.h"
#include "TimerManager.h"
#include "BaseCharacterClass.h"
#include "BaseAIClass.h"

// Sets default values
AProjectileCard::AProjectileCard()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CardSkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CardSkeletalMesh"));
	SetRootComponent(CardSkeletalMesh);
	CardCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("CardCollision"));
	CardCollision->SetupAttachment(CardSkeletalMesh);
	CardTrail = CreateDefaultSubobject<UNiagaraComponent>(TEXT("CardTrail"));
	CardTrail->SetupAttachment(CardCollision);
	if(CardCollision != nullptr)
	{
	//Sets up collision delegates
	CardCollision->OnComponentHit.AddDynamic(this, &AProjectileCard::OnHit);
	CardSkeletalMesh->OnComponentHit.AddDynamic(this, &AProjectileCard::OnHit);
	}

}

// Called when the game starts or when spawned
void AProjectileCard::BeginPlay()
{
	Super::BeginPlay();
	CardCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	GetWorldTimerManager().SetTimer(CardLifetimeManager, this, &AProjectileCard::DestroyCard, CardLifetime);
	PlayerPawn = Cast<ABaseCharacterClass>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
}

// Called every frame
void AProjectileCard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//if the card is homing and the hitscan detects an enemy, the card will seek the actor
	if(IsHoming && TargetEnemy != nullptr) 
	{
		if(BoneTarget != NAME_None) TargetLocation = Cast<USkeletalMeshComponent>((Cast<ABaseAIClass>(TargetEnemy)->GetMesh()))->GetBoneLocation(BoneTarget);
		else TargetLocation = TargetEnemy->GetActorLocation();
	}
	if(bCanCardMove)
	{
		//updates the curve point on the card's trajectory
		CurvedPoint = UKismetMathLibrary::VInterpTo_Constant(CurvedPoint, TargetLocation, DeltaTime, CardSpeed);
		//finds the new location for the card based on the projected path
		FVector NewLocation = UKismetMathLibrary::VInterpTo_Constant(GetActorLocation(), CurvedPoint, DeltaTime, CardSpeed);
		if(!bIsAttached) SetActorLocation(NewLocation, true);
		//if the card meets its location, it gets deleted. used to prevent cards floating in place of a dead enemy.
		if(DestroyOnImpact && FVector::Dist(GetActorLocation(), TargetLocation) == 0 && !bIsAttached) DestroyCard();
	}
}

/// @brief Destroys the projectile card
void AProjectileCard::DestroyCard()
{
	CardVelocity = 0.0f;
	CardSkeletalMesh->SetVisibility(false, false);
	CardSkeletalMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	CardCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	FTimerHandle DeleteTimerHandle;
	GetWorldTimerManager().SetTimer(DeleteTimerHandle, this, &AProjectileCard::DestroyCardTimerFunction, 2.0f);
}

void AProjectileCard::DestroyCardTimerFunction()
{
	Destroy();
}

/// @brief Triggers the projectile card's collision function
/// @param HitComponent this is the primitive component of the card
/// @param OtherActor this is the actor with which the card collides
/// @param OtherComponent this is the primitive component of the impacted actor
/// @param NormalImpulse this is the fvector knockback force
/// @param Hit this is the reference to the collision event
void AProjectileCard::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor != this)
    {
		//play impact fx that occurs when anything is hit
		if(CardImpactUniversal) UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), CardImpactUniversal, Hit.ImpactPoint, GetActorForwardVector().Rotation(),FVector(ParticleScale), true, true, ENCPoolMethod::None, true);
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), ImpactSounds[FMath::RandRange(0,ImpactSounds.Num()-1)].LoadSynchronous(), GetActorLocation(), 0.25f, 1.0f, 0.0f, ImpactAttenuation);
		if(OtherActor != PlayerPawn && OtherActor->IsA(ABaseAIClass::StaticClass()))
		{
			//create unreal damage event
			FPointDamageEvent DamageEvent(CardDamage, Hit, -GetActorForwardVector(), nullptr);
			//apply damage to target
			OtherActor->TakeDamage(CardDamage, DamageEvent, PlayerPawn->GetController(), this);
			//add energy to player
			PlayerPawn->GiveEnergy(EnergyOnDamage);
			//get target mesh
			USkeletalMeshComponent* TargetMesh = Cast<USkeletalMeshComponent>(Cast<ABaseAIClass>(OtherActor)->GetMesh());
			//create vector to store bone transform
			FVector* BoneLocation = new FVector(0.0f, 0.0f, 0.0f);
			//get closest bone to impact site
			FName BoneName = TargetMesh->FindClosestBone(GetActorLocation(), BoneLocation, 0.0f, true);
			if(CardImpact)
			{
				//play enemy hit fx if applicable
				UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), CardImpact, Hit.ImpactPoint, GetActorForwardVector().Rotation(),FVector(ParticleScale), true, true, ENCPoolMethod::None, true);
			}
			//if bone exists then:
			if(BoneName != NAME_None && bCanAttach)
			{
				//attach card mesh transform to bone
				AttachToComponent(TargetMesh, FAttachmentTransformRules::KeepWorldTransform, BoneName);
				//disable card collision
				SetActorEnableCollision(false);
				//disable card trail
				CardTrail->Deactivate();
				//check attachment mode
				bIsAttached = true;
				//stop animations
				CardSkeletalMesh->Stop();
				return;
			}
		}
		//destroy card if not attached
		DestroyCard();
    }
}

/// @brief This sets the card's homing location to an FVector location
/// @param Target This is the location in world space that the card will home in on
void AProjectileCard::SetHomingTarget(FVector Target)
{
	TargetLocation = Target;
	CalculateMidPoint();
	CalculateCurveControlPoint();
}

void AProjectileCard::SetBoneTarget(FName BoneName)
{
	BoneTarget = BoneName;
}

/// @brief This sets the card's homing location to an FVector location and also sets the AActor target
/// @param Target This is the location in world space that the card will home in on
/// @param TargetActor This is a pointer to the actor that the card will seek
void AProjectileCard::SetHomingTarget(FVector Target, AActor* TargetActor)
{
	TargetLocation = Target;
	TargetEnemy = TargetActor;
	if(BoneTarget != NAME_None) 
	{
		TargetLocation = Cast<USkeletalMeshComponent>((Cast<ABaseAIClass>(TargetActor)->GetMesh()))->GetBoneLocation(BoneTarget);
	}
	CalculateMidPoint();
	CalculateCurveControlPoint();
}

/// @brief calculates the centre of the flight curve
void AProjectileCard::CalculateMidPoint()
{
	MidPoint = GetActorLocation() + ((TargetLocation - GetActorLocation()) * UKismetMathLibrary::RandomFloatInRange(MinCurvePointDistance, MaxCurvePointDistance));
}

/// @brief calculates the point in the flight path which adjusts the curve (like a point in a bezier curve)
void AProjectileCard::CalculateCurveControlPoint()
{
	FRotator MidToTargetRot = UKismetMathLibrary::FindLookAtRotation(MidPoint, TargetLocation);
	FVector x, y, z;
	UKismetMathLibrary::BreakRotIntoAxes(MidToTargetRot, x, y, z);
	y *= UKismetMathLibrary::RandomFloatInRange(MinCurveRadius, MaxCurveRadius);
	CurvedPoint = MidPoint + UKismetMathLibrary::RotateAngleAxis(y, UKismetMathLibrary::RandomFloatInRange(MinAngle, MaxAngle), x);
}

TArray<AActor*> AProjectileCard::FindActorsInRange(UClass* ActorClass, float Radius)
{
    TArray<AActor*> OverlappingActors;
    TArray<AActor*> FoundActors;

    // Perform the sphere overlap
    bool bHasOverlaps = UKismetSystemLibrary::SphereOverlapActors(
        this,
        GetActorLocation(),
        Radius,
        { EObjectTypeQuery::ObjectTypeQuery3 }, // ObjectTypeQuery3 is WorldDynamic by default, adjust as needed
        ActorClass,
        TArray<AActor*>(), // Actors to ignore
        OverlappingActors
    );

    if (bHasOverlaps)
    {
        for (AActor* Actor : OverlappingActors)
        {
            if (Actor && Actor->IsA(ActorClass))
            {
                FoundActors.Add(Actor);
            }
        }
    }

    return FoundActors;
}

void AProjectileCard::SetIgnoredActors(TArray<AActor*> IgnoredActors)
{
	CardCollision->MoveIgnoreActors = IgnoredActors;
}

void AProjectileCard::FreezeCard(bool bIsFrozen)
{
	bCanCardMove = !bIsFrozen;
}