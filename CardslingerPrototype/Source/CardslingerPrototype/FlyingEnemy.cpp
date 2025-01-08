// Fill out your copyright notice in the Description page of Project Settings.


#include "FlyingEnemy.h"

AFlyingEnemy::AFlyingEnemy()
{
	tempBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Debug body"));
	tempBody->SetupAttachment(GetMesh());
}

void AFlyingEnemy::BeginPlay()
{
	Super::BeginPlay();
}

void AFlyingEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

float AFlyingEnemy::TakeDamage(float DamageAmount, struct FDamageEvent const &DamageEvent, class AController *EventInstigator, AActor* DamageCauser)
{
	//call unreal damage code
    float DamageToApply = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, EventInstigator);
    if(IsDead())
    {
		tempBody->SetSimulatePhysics(true);
    }
    return DamageToApply;
}