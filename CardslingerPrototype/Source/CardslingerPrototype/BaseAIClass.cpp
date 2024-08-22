// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseAIClass.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "Components/InputComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Components/CapsuleComponent.h"
#include "CardslingerTestGameMode.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/DamageEvents.h"
#include "Engine/World.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "AIController.h"
#include "Sound/SoundBase.h"
#include "Components/PostProcessComponent.h"
#include "EnemyProjectile.h"

// Sets default values
ABaseAIClass::ABaseAIClass()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseAIClass::BeginPlay()
{
	Super::BeginPlay();
	Health = MaxHealth;
	ThisController = Cast<AAIController>(GetController());
	BaseTimePerShot = TimePerShot;
	PlayerActor = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	//ThisController->GetBlackboardComponent()->SetValueAsFloat(TEXT("FireCooldown"), FireCooldown);
	
}

// Called every frame
void ABaseAIClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseAIClass::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

float ABaseAIClass::TakeDamage(float DamageAmount, struct FDamageEvent const &DamageEvent, class AController *EventInstigator, AActor* DamageCauser)
{
	SetRagdollMode(true);
    float DamageToApply = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, EventInstigator);
    Health -= DamageToApply;

    if(IsDead())
    {
        Health = 0.0f;
        ACardslingerTestGameMode* GameMode = GetWorld()->GetAuthGameMode<ACardslingerTestGameMode>();
        if(GameMode != nullptr)
        {
            GameMode->PawnKilled(this);
        }
		GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
        DetachFromControllerPendingDestroy();
        
    }
    return DamageToApply;
}

bool ABaseAIClass::IsDead() const
{
    return Health <= 0;
}

float ABaseAIClass::GetHealthPercent() const
{
    return Health/MaxHealth;
}

bool ABaseAIClass::HitTrace(FHitResult& Hit, FVector& ShotDirection)
{
	FVector ViewLocation;
	FRotator ViewRotation;
	//AController* OwnerController = GetOwnerController();
	//if(OwnerController == nullptr) return false;
	GetController()->GetPlayerViewPoint(ViewLocation, ViewRotation);

	FVector PlayerLocation = PlayerActor->GetActorLocation();
	FVector PlayerVelocty = PlayerActor->GetVelocity();

	float Distance = FVector::Dist(ViewLocation, PlayerLocation);
	float BulletTravelTime = Distance / BulletSpeed;

	FVector PredictedLocation = PlayerLocation + (PlayerVelocty * BulletTravelTime);

	if(bIsPredictiveAiming) ShotDirection = (PredictedLocation - ViewLocation).GetSafeNormal();
	else ShotDirection = ViewRotation.Vector();
	FVector End = ViewLocation + ShotDirection * MaxRange;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);
	Params.AddIgnoredActor(GetOwner());
	//DrawDebugLine(GetWorld(), ViewLocation, End, FColor::Red, true, 100.0f);
	return GetWorld()->LineTraceSingleByChannel(Hit, ViewLocation, End, ECollisionChannel::ECC_GameTraceChannel1, Params);
}

void ABaseAIClass::ShootMultiple()
{
	float TempFireCooldown = FireCooldown;
	for(int32 i = 0; i <= NumberOfShots; i++)
	{
		FTimerHandle StaggerFireHandle;
		GetWorldTimerManager().SetTimer(StaggerFireHandle, this, &ABaseAIClass::Shoot, TimePerShot * i);
	}
	TempFireCooldown += TimePerShot * NumberOfShots;
	ThisController->GetBlackboardComponent()->SetValueAsFloat(TEXT("FireCooldown"), TempFireCooldown);

}

void ABaseAIClass::Shoot()
{
	FHitResult Hit;
	FVector ShotDirection;
	AController* OwnerController = GetController();
	if(OwnerController == nullptr) return;
	if(HitTrace(Hit, ShotDirection) || bIsPredictiveAiming)
	{
	//UGameplayStatics::PlaySoundAtLocation(GetWorld(), ImpactSound, Hit.Location);
	//FPointDamageEvent DamageEvent(Damage, Hit, ShotDirection, nullptr);
	//AActor* HitActor = Hit.GetActor();
	//if(HitActor == nullptr) return;
	//HitActor->TakeDamage(Damage, DamageEvent, OwnerController, this);
	//ShotDirection *= -1;
	ShootLocation = GetMesh()->GetBoneLocation(TEXT("gun_barrel"), EBoneSpaces::WorldSpace);
	float LowerBound = 1 - AccuracyModifier;
	float UpperBound = 1 + AccuracyModifier;
	FVector RandomAimOffset = FVector(FMath::RandRange(LowerBound,UpperBound), 
	FMath::RandRange(LowerBound,UpperBound), 
	FMath::RandRange(LowerBound,UpperBound));
	ShotDirection *= RandomAimOffset;
	AEnemyProjectile* Projectile = GetWorld()->SpawnActor<AEnemyProjectile>(Bullet, ShootLocation, ShotDirection.Rotation());
	Projectile->SetBulletSpeed(BulletSpeed);
	if(GetComponentByClass<UPostProcessComponent>()->bEnabled) Projectile->EnableSlowEffect(true);
	Projectile->SetOwnerClass(this);
	ActiveBullets.Emplace(Projectile);
	UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), MuzzleFlash, GetMesh()->GetBoneLocation(TEXT("gun_barrel")), ShotDirection.Rotation(), FVector::One(), true, true, ENCPoolMethod::None, true);
	}
}

void ABaseAIClass::SetRagdollMode(bool bIsRagdollMode)
{
	if(bIsRagdollMode)
	{
		GetMesh()->SetSimulatePhysics(true);
		GetMesh()->bPauseAnims = true;
		ThisController = Cast<AAIController>(GetController());
		UBehaviorTreeComponent* BT = Cast<UBehaviorTreeComponent>(ThisController->GetBrainComponent());
		BT->StopTree(EBTStopMode::Safe);
	}
	else
	{
		GetMesh()->SetSimulatePhysics(false);
	}
}

void ABaseAIClass::EnableSlowEffect(bool bIsSlow)
{
	GetComponentByClass<UPostProcessComponent>()->bEnabled = bIsSlow;
	ThisController = Cast<AAIController>(GetController());
	if(bIsSlow) 
	{
		GetMesh()->SetCustomDepthStencilValue(2);
	}
	else
	{ 
		GetMesh()->SetCustomDepthStencilValue(1);
	}
	if(bIsSlow && ThisController)
	{
		ThisController->GetBlackboardComponent()->SetValueAsFloat(TEXT("FireCooldown"), FireCooldown / GetActorTimeDilation());
		TimePerShot /= GetActorTimeDilation();
	}
	else if(!bIsSlow && ThisController)
	{
		ThisController->GetBlackboardComponent()->SetValueAsFloat(TEXT("FireCooldown"), FireCooldown);
		TimePerShot = BaseTimePerShot;
	}

	for(AEnemyProjectile* ActiveBullet : ActiveBullets)
	{
		if(ActiveBullet) ActiveBullet->EnableSlowEffect(bIsSlow);
		else ActiveBullets.Remove(ActiveBullet);
	}

}

float ABaseAIClass::GetFireCooldown()
{
	return FireCooldown;
}

void ABaseAIClass::RemoveProjectile(AEnemyProjectile* Projectile)
{
	ActiveBullets.Remove(Projectile);
}