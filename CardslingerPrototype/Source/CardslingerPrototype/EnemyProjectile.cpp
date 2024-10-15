// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyProjectile.h"
#include "Kismet/GameplayStatics.h"
#include "Components/BoxComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SceneComponent.h"
#include "Engine/DamageEvents.h"
#include "NiagaraComponent.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "BaseAIClass.h"
#include "DrawDebugHelpers.h"
#include "TimerManager.h"
#include "BaseCharacterClass.h"

// Sets default values
AEnemyProjectile::AEnemyProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BulletMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BulletMesh"));
	SetRootComponent(BulletMesh);
	BulletCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BulletCollision"));
	BulletCollision->SetupAttachment(BulletMesh);
	BulletTrail = CreateDefaultSubobject<UNiagaraComponent>(TEXT("BulletTrail"));
	BulletTrail->SetupAttachment(BulletCollision);
	if(BulletCollision != nullptr)
	{
		//Sets up collision delegates
		BulletCollision->OnComponentHit.AddDynamic(this, &AEnemyProjectile::OnHit);
		BulletMesh->OnComponentHit.AddDynamic(this, &AEnemyProjectile::OnHit);
	}

}

// Called when the game starts or when spawned
void AEnemyProjectile::BeginPlay()
{
	Super::BeginPlay();
	PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	BulletSpeed = BaseBulletSpeed;
	GetWorldTimerManager().SetTimer(BulletLifetimeManager, this, &AEnemyProjectile::DestroyProjectile, BulletLifetime);
	
}

// Called every frame
void AEnemyProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//translate bullet with sweep
	FVector NextPosition = GetActorLocation() + (GetActorForwardVector() * BulletSpeed * DeltaTime);
	SetActorLocation(NextPosition, true);
}

/// @brief Set an owner for the bullet and prevent collisions with them
/// @param NewOwner The pawn which "owns" the bullet
void AEnemyProjectile::SetOwnerClass(ABaseAIClass* NewOwner)
{
	OwnerAI = NewOwner;
	//disable collisions with owner
	BulletMesh->IgnoreActorWhenMoving(OwnerAI, true);
	BulletCollision->IgnoreActorWhenMoving(OwnerAI, true);
}


/// @brief Function to process what happens on bullet collision
/// @param HitComponent this is the primitive component of the bullet
/// @param OtherActor this is the actor with which the bullet collides
/// @param OtherComponent this is the primitive component of the impacted actor
/// @param NormalImpulse this is the fvector knockback force
/// @param Hit this is the reference to the collision event
void AEnemyProjectile::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor != this)
    {
        //if the collision is an enemy class actor, apply damage and hit fx
		if(OtherActor == PlayerPawn)
		{
			//create unreal damage event
			FPointDamageEvent DamageEvent(BulletDamage, Hit, -GetActorForwardVector(), nullptr);
			if(FMath::Asin(FVector::DotProduct(PlayerPawn->GetActorForwardVector(), Hit.Normal)) > 0)
			{
				ReflectBullet();
			}
			//apply damage to other actor
			OtherActor->TakeDamage(BulletDamage, DamageEvent, OwnerAI->GetController(), this);
		}
    }
	//play impact fx
	UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), ImpactFX, GetActorLocation(), GetActorForwardVector().Rotation(), FVector::One(), true, true, ENCPoolMethod::None, true);
    DestroyProjectile();
}

/// @brief safely deletes the bullet
void AEnemyProjectile::DestroyProjectile()
{
	//remove self from owner's projectile list
	if(OwnerAI) OwnerAI->RemoveProjectile(this);
	//set speed to 0
	BulletSpeed = 0.0f;
	//disable visibility
	BulletMesh->SetVisibility(false, false);
	//disable collision
	BulletMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	BulletCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	FTimerHandle DeleteTimerHandle;
	//create new timer to delay actual destruction of the bullet (allow trail to finish)
	GetWorldTimerManager().SetTimer(DeleteTimerHandle, this, &AEnemyProjectile::DestroyProjectileTimerFunction, 2.0f);
}

/// @brief Timer function to destroy the bullet once its lifetime elapses
void AEnemyProjectile::DestroyProjectileTimerFunction()
{
	Destroy();
}

/// @brief Toggles the slow effect for the bullet
/// @param bIsSlow enables/disables the slow effect
/// @param TimeDilationValue the new time dilation
void AEnemyProjectile::EnableSlowEffect(bool bIsSlow, float TimeDilationValue)
{
	//change bullet speed
	if(bIsSlow) BulletSpeed = BaseBulletSpeed * TimeDilationValue;
	else BulletSpeed = BaseBulletSpeed;

	//get mesh
	UStaticMeshComponent* Mesh = FindComponentByClass<UStaticMeshComponent>();
	
	if(!Mesh)
	{
		return;
	}
	if(bIsSlow) 
	{
		//enable slow shader
		if(Mesh) Mesh->SetCustomDepthStencilValue(3);
		if(BulletTrail) BulletTrail->SetCustomDepthStencilValue(3);
	}
	else 
	{
		//disable slow shader
		if(Mesh) Mesh->SetCustomDepthStencilValue(1);
		if(BulletTrail) BulletTrail->SetCustomDepthStencilValue(1);
	}
}

/// @brief Set the bullet speed to a new value
/// @param NewSpeed the new speed that the bullet is set to
void AEnemyProjectile::SetBulletSpeed(float NewSpeed)
{
	BaseBulletSpeed = NewSpeed;
	BulletSpeed = BaseBulletSpeed;
}

void AEnemyProjectile::ReflectBullet()
{
	UE_LOG(LogTemp, Display, TEXT("Bullet Reflected"));
}