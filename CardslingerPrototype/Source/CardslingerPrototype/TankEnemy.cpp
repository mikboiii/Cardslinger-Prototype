// Fill out your copyright notice in the Description page of Project Settings.


#include "TankEnemy.h"

#include "Components/SphereComponent.h"

ATankEnemy::ATankEnemy()
{
	ShieldComponent = CreateDefaultSubobject<USphereComponent>(TEXT("ShieldComponent"));
	ShieldComponent->SetupAttachment(RootComponent);

	ShieldComponent->ComponentTags.Add(FName("Shield"));
}
