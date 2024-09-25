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
#include "BaseAIController.h"

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
	ThisController = Cast<ABaseAIController>(GetController());
	BaseTimePerShot = TimePerShot;
	PlayerActor = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	CollisionCapsule = GetCapsuleComponent();
	CollisionCapsule->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	EnemyMesh = GetMesh();
	MeshOffset = EnemyMesh->GetRelativeLocation();
	MeshRotation = EnemyMesh->GetRelativeRotation();
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
	//calculate distance from enemy to player
	float Distance = FVector::Dist(ViewLocation, PlayerLocation);
	//calculate time taken (in seconds) for bullet to travel the required distance
	float BulletTravelTime = Distance / BulletSpeed;

	//calculate the position of where the bullet needs to be based on where the player will be and how fast the bullet travels
	FVector PredictedLocation = PlayerLocation + (PlayerVelocty * BulletTravelTime);

	//aim shot at where the player is going to be based on movement (can be messy with short bursts of very fast movement)
	if(bIsPredictiveAiming) ShotDirection = (PredictedLocation - ViewLocation).GetSafeNormal();
	//otherwise shoot directly forward
	else ShotDirection = ViewRotation.Vector();
	//calculate end of linetrace to determine shot viability
	FVector End = ViewLocation + ShotDirection * MaxRange;
	//create parameter list for ignored actors (prevent wacky bullet collision)
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);
	Params.AddIgnoredActor(GetOwner());
	//DrawDebugLine(GetWorld(), ViewLocation, End, FColor::Red, true, 100.0f);
	//shoot line trace
	return GetWorld()->LineTraceSingleByChannel(Hit, ViewLocation, End, ECollisionChannel::ECC_GameTraceChannel1, Params);
}

void ABaseAIClass::ShootMultiple()
{
	//create temp fire cooldown to calculate accurate delay between firing the last shot and the first shot of the next volley
	float TempFireCooldown = FireCooldown;
	for(int32 i = 0; i <= NumberOfShots; i++)
	{
		FTimerHandle StaggerFireHandle;
		//delay each bullet by an incremental timer
		GetWorldTimerManager().SetTimer(StaggerFireHandle, this, &ABaseAIClass::Shoot, TimePerShot * i);
	}
	TempFireCooldown += TimePerShot * NumberOfShots;
	//set new fire cooldown to reflect actual time between volleys
	ThisController->GetBlackboardComponent()->SetValueAsFloat(TEXT("FireCooldown"), TempFireCooldown);

}

void ABaseAIClass::Shoot()
{
	FHitResult Hit;
	FVector ShotDirection;
	AController* OwnerController = GetController();
	//error catch
	if(OwnerController == nullptr) return;
	//only fire if the shot impacts something or if the enemies have predictive aiming (often aimed into empty space to track moving targets)
	if(HitTrace(Hit, ShotDirection) || bIsPredictiveAiming)
	{

	//i honestly forgot what this code was for but i'm scared to get rid of it:
	//UGameplayStatics::PlaySoundAtLocation(GetWorld(), ImpactSound, Hit.Location);
	//FPointDamageEvent DamageEvent(Damage, Hit, ShotDirection, nullptr);
	//AActor* HitActor = Hit.GetActor();
	//if(HitActor == nullptr) return;
	//HitActor->TakeDamage(Damage, DamageEvent, OwnerController, this);
	//ShotDirection *= -1;

	//get shot spawn location in world space
	ShootLocation = GetMesh()->GetBoneLocation(TEXT("gun_barrel"), EBoneSpaces::WorldSpace);
	//determine the upper and lower bound for aim variance
	float LowerBound = 1 - AccuracyModifier;
	float UpperBound = 1 + AccuracyModifier;
	//create aim offset to mimic innacuracy
	FVector RandomAimOffset = FVector(FMath::RandRange(LowerBound,UpperBound), 
	FMath::RandRange(LowerBound,UpperBound), 
	FMath::RandRange(LowerBound,UpperBound));
	//apply aim variance
	ShotDirection *= RandomAimOffset;
	//spawn bullet and apply transform
	AEnemyProjectile* Projectile = GetWorld()->SpawnActor<AEnemyProjectile>(Bullet, ShootLocation, ShotDirection.Rotation());
	//apply velocity to the bullet
	Projectile->SetBulletSpeed(BulletSpeed);
	//if slow shader is active, enable slow effect for bullet
	if(GetComponentByClass<UPostProcessComponent>()->bEnabled) Projectile->EnableSlowEffect(true);
	//set owner of bullet to this enemy
	Projectile->SetOwnerClass(this);
	//add bullet to list of active bullets
	ActiveBullets.Emplace(Projectile);
	//spawn muzzle flash
	UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), MuzzleFlash, GetMesh()->GetBoneLocation(TEXT("gun_barrel")), ShotDirection.Rotation(), FVector::One(), true, true, ENCPoolMethod::None, true);
	}
}

void ABaseAIClass::SetRagdollMode(bool bIsRagdollMode, float RagdollTime=2.0f)
{
	bRagdoll = bIsRagdollMode;

	if(bIsRagdollMode)
	{
		//clear ragdoll timer in case multiple sources of ragdoll affect the enemy
		GetWorldTimerManager().ClearTimer(RagdollReset);
		//create delegate so parameters can be set in the timer
		FTimerDelegate RagdollDelegate = FTimerDelegate::CreateUObject(this, &ABaseAIClass::SetRagdollMode, false, 0.0f);
		//set ragdoll duration
		GetWorldTimerManager().SetTimer(RagdollReset, RagdollDelegate, RagdollTime, false);
		//enable bone physics (ragdoll)
		GetMesh()->SetSimulatePhysics(true);
		//suspend animations
		GetMesh()->bPauseAnims = true;
		//get ai controller
		ThisController = Cast<ABaseAIController>(GetController());
		if(ThisController)
		{
		//suspend ai behaviour tree
		UBehaviorTreeComponent* BT = Cast<UBehaviorTreeComponent>(ThisController->GetBrainComponent());
		BT->StopTree(EBTStopMode::Safe);
		}
	}
	else
	{
		//check if ragdoll is still moving: ragdoll needs to be stationary on the ground to reset operations
		if(EnemyMesh->GetPhysicsLinearVelocity(FName(TEXT("pelvis"))).Size() <= RagdollSpeedMaximum)
		{
			//stop bone physics
			GetMesh()->SetSimulatePhysics(false);
			//resume animations
			GetMesh()->bPauseAnims = false;
			//set capsule collider to the ground at enemy position
			CollisionCapsule->SetWorldLocation(EnemyMesh->GetBoneLocation(TEXT("pelvis"))-MeshOffset);
			//attach mesh to collider
			EnemyMesh->AttachToComponent(CollisionCapsule, FAttachmentTransformRules::SnapToTargetIncludingScale);
			//offset to mesh's original position
			EnemyMesh->SetRelativeLocation(MeshOffset);
			//offset to mesh's original rotation
			EnemyMesh->SetRelativeRotation(MeshRotation);
			ThisController = Cast<ABaseAIController>(GetController());
			if(ThisController)
			{
			//restart behaviour tree
			UBehaviorTreeComponent* BT = Cast<UBehaviorTreeComponent>(ThisController->GetBrainComponent());
			ThisController->RunBehaviorTree(ThisController->GetBehaviorTree());
			}
		}
		//if still in motion, enemy will delay turning off ragdoll mode
		else
		{
			//clear current ragdoll timer
			GetWorldTimerManager().ClearTimer(RagdollReset);
			//create new delegate to disable ragdoll move
			FTimerDelegate RagdollDelegate = FTimerDelegate::CreateUObject(this, &ABaseAIClass::SetRagdollMode, false, 0.0f);
			//start new timer
			GetWorldTimerManager().SetTimer(RagdollReset, RagdollDelegate, RagdollSpeedCheckTimer, false);
		}
	}
}

void ABaseAIClass::EnableSlowEffect(bool bIsSlow)
{
	//turn on slow effect shader
	GetComponentByClass<UPostProcessComponent>()->bEnabled = bIsSlow;
	//get controller
	ThisController = Cast<ABaseAIController>(GetController());
	if(bIsSlow) 
	{
		//set actor stencil value to the slow effect shader
		GetMesh()->SetCustomDepthStencilValue(2);
	}
	else
	{ 
		//set to neutral stencil (no effect)
		GetMesh()->SetCustomDepthStencilValue(1);
	}
	if(bIsSlow && ThisController)
	{
		//slow shot delay 
		ThisController->GetBlackboardComponent()->SetValueAsFloat(TEXT("FireCooldown"), FireCooldown / GetActorTimeDilation());
		TimePerShot /= GetActorTimeDilation();
	}
	else if(!bIsSlow && ThisController)
	{
		//reset shot delay
		ThisController->GetBlackboardComponent()->SetValueAsFloat(TEXT("FireCooldown"), FireCooldown);
		TimePerShot = BaseTimePerShot;
	}

	for(AEnemyProjectile* ActiveBullet : ActiveBullets)
	{
		//enable/disable slow effect for all active bullets belonging to this enemy
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

/*
Ragdoll Code:
	SetRagdollMode(true);

	GetWorldTimerManager().ClearTimer(RagdollReset);
	FTimerDelegate RagdollDelegate = FTimerDelegate::CreateUObject(this, &ABaseAIClass::SetRagdollMode, false);
	GetWorldTimerManager().SetTimer(RagdollReset, RagdollDelegate, 2.0f, false);
*/