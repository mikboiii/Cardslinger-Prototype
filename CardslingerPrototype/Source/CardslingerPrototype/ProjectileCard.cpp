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

// Sets default values
AProjectileCard::AProjectileCard()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CardSkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CardSkeletalMesh"));
	CardSkeletalMesh->SetupAttachment(RootComponent);
	CardCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("CardCollision"));
	CardCollision->SetupAttachment(CardSkeletalMesh);
	CardTrail = CreateDefaultSubobject<UNiagaraComponent>(TEXT("CardTrail"));
	CardTrail->SetupAttachment(CardCollision);
	CardProjectile = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("CardProjectileMovement"));
	CardProjectile->SetUpdatedComponent(RootComponent);

	if(CardCollision != nullptr)
	{
	CardCollision->OnComponentHit.AddDynamic(this, &AProjectileCard::OnHit);
	CardSkeletalMesh->OnComponentHit.AddDynamic(this, &AProjectileCard::OnHit);
	}

}

// Called when the game starts or when spawned
void AProjectileCard::BeginPlay()
{
	Super::BeginPlay();
	GetWorldTimerManager().SetTimer(CardLifetimeManager, this, &AProjectileCard::DestroyCard, CardLifetime);
	
}

// Called every frame
void AProjectileCard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	/*
	FVector ToMove;
	ToMove = GetActorForwardVector() * CardVelocity;
	AddActorWorldOffset(ToMove, true);
	*/
}

void AProjectileCard::DestroyCard()
{
	Destroy();
}

void AProjectileCard::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor != this)
    {
        //DrawDebugSphere(GetWorld(), Hit.ImpactPoint, 10.0f, 16, FColor::Red, true, 10000.0f);
		if(OtherActor != UGameplayStatics::GetPlayerPawn(GetWorld(), 0) && OtherActor->IsA(ABaseAIClass::StaticClass()))
		{
			FPointDamageEvent DamageEvent(CardDamage, Hit, -GetActorForwardVector(), nullptr);
			OtherActor->TakeDamage(CardDamage, DamageEvent, UGameplayStatics::GetPlayerPawn(GetWorld(), 0)->GetController(), this);
				if(CardImpact)
				{
					UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), CardImpact, Hit.ImpactPoint, GetActorForwardVector().Rotation(),FVector(ParticleScale), true, true, ENCPoolMethod::None, true);
				}
		}
    }

    Destroy();
}