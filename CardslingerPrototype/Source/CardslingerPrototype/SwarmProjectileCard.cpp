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
    UE_LOG(LogTemp, Display, TEXT("Swarm card impact"));
    EnemyTargets = FindActorsInRange(ABaseAIClass::StaticClass(), SearchRadius);
    SpawnSwarm();
}

void ASwarmProjectileCard::SpawnSwarm()
{
    TArray<AProjectileCard*> ProjectileCards;
    TArray<AActor*> CardActors;
    for(int32 i = 0; i < SwarmPopulation; i++)
    {
        AProjectileCard* LaunchedCard = GetWorld()->SpawnActor<AProjectileCard>(SwarmCardClass, GetActorLocation()+FVector(0,0,10), GetActorRotation());
        UE_LOG(LogTemp, Display, TEXT("Card Spawned"));
        ProjectileCards.Emplace(LaunchedCard);
        CardActors.Emplace(LaunchedCard);
    }

    for(AProjectileCard* NewCard : ProjectileCards)
    {
        NewCard->SetIgnoredActors(CardActors);
    }

    DestroyCard();
}