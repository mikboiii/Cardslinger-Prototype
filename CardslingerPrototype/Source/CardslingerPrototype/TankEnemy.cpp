// Fill out your copyright notice in the Description page of Project Settings.


#include "TankEnemy.h"

#include "ProjectileCard.h"
#include "Components/SphereComponent.h"

ATankEnemy::ATankEnemy()
{
	ShieldComponent = CreateDefaultSubobject<USphereComponent>(TEXT("ShieldComponent"));
	ShieldComponent->SetupAttachment(RootComponent);

	ShieldComponent->ComponentTags.Add(FName("Shield"));
}

void ATankEnemy::BeginPlay()
{
	Super::BeginPlay();
}

void ATankEnemy::HandleShieldHit(
	AProjectileCard* Projectile,
	const FHitResult& Hit)
{
	if (!Projectile)
		return;
}
