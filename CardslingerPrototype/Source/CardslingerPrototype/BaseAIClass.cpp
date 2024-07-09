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
	ShotDirection = -ViewRotation.Vector();
	FVector End = ViewLocation + ViewRotation.Vector() * MaxRange;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);
	Params.AddIgnoredActor(GetOwner());
	//DrawDebugLine(GetWorld(), ViewLocation, End, FColor::Red, true, 100.0f);
	return GetWorld()->LineTraceSingleByChannel(Hit, ViewLocation, End, ECollisionChannel::ECC_GameTraceChannel1, Params);
}

void ABaseAIClass::Shoot()
{
	FHitResult Hit;
	FVector ShotDirection;
	AController* OwnerController = GetController();
	if(OwnerController == nullptr) return;
	if(HitTrace(Hit, ShotDirection))
	{
	//UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ImpactFlash, Hit.Location, ShotDirection.Rotation());
	//UGameplayStatics::PlaySoundAtLocation(GetWorld(), ImpactSound, Hit.Location);
	//FPointDamageEvent DamageEvent(Damage, Hit, ShotDirection, nullptr);
	//AActor* HitActor = Hit.GetActor();
	//if(HitActor == nullptr) return;
	//HitActor->TakeDamage(Damage, DamageEvent, OwnerController, this);
	ShotDirection *= -1;
	AEnemyProjectile* Projectile = GetWorld()->SpawnActor<AEnemyProjectile>(Bullet, (GetActorLocation() + GetActorForwardVector() * 50), ShotDirection.Rotation());
	if(GetComponentByClass<UPostProcessComponent>()->bEnabled) Projectile->EnableSlowEffect(true);
	ActiveBullets.Emplace(Projectile);
	}
}

void ABaseAIClass::EnableSlowEffect(bool bIsSlow)
{
	GetComponentByClass<UPostProcessComponent>()->bEnabled = bIsSlow;
	AAIController* ThisController = Cast<AAIController>(GetController());
	if(bIsSlow && ThisController)
	{
		ThisController->GetBlackboardComponent()->SetValueAsFloat(TEXT("FireCooldown"), FireCooldown / GetActorTimeDilation());
	}
	else if(!bIsSlow && ThisController)
	{
		ThisController->GetBlackboardComponent()->SetValueAsFloat(TEXT("FireCooldown"), FireCooldown);
	}

	for(AEnemyProjectile* ActiveBullet : ActiveBullets)
	{
		ActiveBullet->EnableSlowEffect(bIsSlow);
	}
}