// Fill out your copyright notice in the Description page of Project Settings.


#include "SwarmProjectileCard.h"
#include "Kismet/GameplayStatics.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "BaseAIClass.h"
#include "Engine/DamageEvents.h"
#include "Components/SkeletalMeshComponent.h"

void ASwarmProjectileCard::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
    EnemyTargets = FindActorsInRange(ABaseAIClass::StaticClass(), SearchRadius);
}

void ASwarmProjectileCard::SpawnSwarm()
{
    for(int i = 0; i < SwarmPopulation; i++)
    {

    }
}