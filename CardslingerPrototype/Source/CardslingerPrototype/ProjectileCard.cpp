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
	GetWorldTimerManager().SetTimer(CardLifetimeManager, this, &AProjectileCard::DestroyCard, CardLifetime);
	PlayerPawn = Cast<ABaseCharacterClass>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
}

// Called every frame
void AProjectileCard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//if the card is homing and the hitscan detects an enemy, the card will seek the actor
	if(IsHoming && TargetEnemy != nullptr) TargetLocation = TargetEnemy->GetActorLocation();
	//updates the curve point on the card's trajectory
	CurvedPoint = UKismetMathLibrary::VInterpTo_Constant(CurvedPoint, TargetLocation, DeltaTime, CardSpeed);
	//finds the new location for the card based on the projected path
	FVector NewLocation = UKismetMathLibrary::VInterpTo_Constant(GetActorLocation(), CurvedPoint, DeltaTime, CardSpeed);
	SetActorLocation(NewLocation, true);
	//if the card meets its location, it gets deleted. used to prevent cards floating in place of a dead enemy.
	if(DestroyOnImpact && FVector::Dist(GetActorLocation(), TargetLocation) == 0) DestroyCard();
}

/// @brief Destroys the projectile card
void AProjectileCard::DestroyCard()
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
        //if the collision is an enemy class actor, apply damage and hit fx
		if(OtherActor != PlayerPawn && OtherActor->IsA(ABaseAIClass::StaticClass()))
		{

			FPointDamageEvent DamageEvent(CardDamage, Hit, -GetActorForwardVector(), nullptr);
			OtherActor->TakeDamage(CardDamage, DamageEvent, PlayerPawn->GetController(), this);
			PlayerPawn->GiveEnergy(EnergyOnDamage);
			USkeletalMeshComponent* TargetMesh = Cast<USkeletalMeshComponent>(Cast<ABaseAIClass>(OtherActor)->GetMesh());
			FName BoneName = TargetMesh->FindClosestBone(GetActorLocation());
			if(BoneName != NAME_None)
			{
				AttachToComponent(TargetMesh, FAttachmentTransformRules::KeepRelativeTransform, BoneName);
			}
			if(CardImpact)
			{
				UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), CardImpact, Hit.ImpactPoint, GetActorForwardVector().Rotation(),FVector(ParticleScale), true, true, ENCPoolMethod::None, true);
			}
			return;
		}
		Destroy();
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

/// @brief This sets the card's homing location to an FVector location and also sets the AActor target
/// @param Target This is the location in world space that the card will home in on
/// @param TargetActor This is a pointer to the actor that the card will seek
void AProjectileCard::SetHomingTarget(FVector Target, AActor* TargetActor)
{
	TargetLocation = Target;
	TargetEnemy = TargetActor;
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