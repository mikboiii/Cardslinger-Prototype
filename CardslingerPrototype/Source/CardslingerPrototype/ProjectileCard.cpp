// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileCard.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"

// Sets default values
AProjectileCard::AProjectileCard()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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