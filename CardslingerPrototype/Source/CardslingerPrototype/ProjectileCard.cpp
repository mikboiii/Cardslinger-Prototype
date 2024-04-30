// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileCard.h"
#include "Kismet/GameplayStatics.h"
#include "Components/BoxComponent.h"
#include "Components/SkeletalMeshComponent.h"
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

}

void AProjectileCard::DestroyCard()
{
	Destroy();
}

void AProjectileCard::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor != this)
    {
        DrawDebugSphere(GetWorld(), Hit.ImpactPoint, 100.0f, 16, FColor::Red, true, 10000.0f);
		UE_LOG(LogTemp, Display, TEXT("Card Impact"));
    }

    Destroy();
}