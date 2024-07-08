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

	BulletSkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BulletSkeletalMesh"));
	SetRootComponent(BulletSkeletalMesh);
	BulletCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BulletCollision"));
	BulletCollision->SetupAttachment(BulletSkeletalMesh);
	BulletTrail = CreateDefaultSubobject<UNiagaraComponent>(TEXT("BulletTrail"));
	BulletTrail->SetupAttachment(BulletCollision);
	if(BulletCollision != nullptr)
	{
	//Sets up collision delegates
	//CardCollision->OnComponentHit.AddDynamic(this, &AProjectileCard::OnHit);
	//CardSkeletalMesh->OnComponentHit.AddDynamic(this, &AProjectileCard::OnHit);
	}

}

// Called when the game starts or when spawned
void AEnemyProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemyProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

