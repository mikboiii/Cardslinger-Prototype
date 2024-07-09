// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyProjectile.h"
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
	UE_LOG(LogTemp, Display, TEXT("Enemy bullet spawned"));
	PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	
}

// Called every frame
void AEnemyProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NextPosition = GetActorLocation() + GetActorForwardVector() * BulletSpeed;
	SetActorLocation(NextPosition, true);
}

void AEnemyProjectile::SetOwnerController(AController* NewOwner)
{
	OwnerController = NewOwner;
}



void AEnemyProjectile::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor != this)
    {
        //if the collision is an enemy class actor, apply damage and hit fx
		if(OtherActor == PlayerPawn)
		{

			FPointDamageEvent DamageEvent(BulletDamage, Hit, -GetActorForwardVector(), nullptr);
			OtherActor->TakeDamage(BulletDamage, DamageEvent, OwnerController, this);
		}
    }

    Destroy();
}

void AEnemyProjectile::DestroyProjectile()
{
	Destroy();
}