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

	FVector NextPosition = GetActorLocation() + (GetActorForwardVector() * BulletSpeed * DeltaTime);
	SetActorLocation(NextPosition, true);
}

void AEnemyProjectile::SetOwnerClass(ABaseAIClass* NewOwner)
{
	OwnerAI = NewOwner;
	BulletMesh->IgnoreActorWhenMoving(OwnerAI, true);
	BulletCollision->IgnoreActorWhenMoving(OwnerAI, true);
}



void AEnemyProjectile::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor != this)
    {
        //if the collision is an enemy class actor, apply damage and hit fx
		if(OtherActor == PlayerPawn)
		{

			FPointDamageEvent DamageEvent(BulletDamage, Hit, -GetActorForwardVector(), nullptr);
			OtherActor->TakeDamage(BulletDamage, DamageEvent, OwnerAI->GetController(), this);
		}
    }
	UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), ImpactFX, GetActorLocation(), GetActorForwardVector().Rotation(), FVector::One(), true, true, ENCPoolMethod::None, true);
    DestroyProjectile();
}

void AEnemyProjectile::DestroyProjectile()
{
	if(OwnerAI) OwnerAI->RemoveProjectile(this);
	BulletSpeed = 0.0f;
	BulletMesh->SetVisibility(false, false);
	BulletMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	BulletCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	FTimerHandle DeleteTimerHandle;
	GetWorldTimerManager().SetTimer(DeleteTimerHandle, this, &AEnemyProjectile::DestroyProjectileTimerFunction, 2.0f);
}

void AEnemyProjectile::DestroyProjectileTimerFunction()
{
	Destroy();
}

void AEnemyProjectile::EnableSlowEffect(bool bIsSlow)
{
	if(bIsSlow) BulletSpeed *= 0.05f;
	else BulletSpeed = BaseBulletSpeed;

	UStaticMeshComponent* Mesh = FindComponentByClass<UStaticMeshComponent>();
	
	if(!Mesh)
	{
		return;
	}
	if(bIsSlow) 
	{
		if(Mesh) Mesh->SetCustomDepthStencilValue(3);
		if(BulletTrail) BulletTrail->SetCustomDepthStencilValue(3);
	}
	else 
	{
		if(Mesh) Mesh->SetCustomDepthStencilValue(1);
		if(BulletTrail) BulletTrail->SetCustomDepthStencilValue(1);
	}
}