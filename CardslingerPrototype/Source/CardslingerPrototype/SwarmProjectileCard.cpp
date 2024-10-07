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
    SpawnSwarm();
}

void ASwarmProjectileCard::SpawnSwarm()
{
    float CardRelease = SwarmDelay / SwarmPopulation;
    for(int32 i = 0; i < SwarmPopulation; i++)
    {
        UE_LOG(LogTemp, Display, TEXT("%d"),i);
        FTimerHandle CardSpawnHandle;
        FTimerDelegate CardSpawnDelegate = FTimerDelegate::CreateUObject(this, &ASwarmProjectileCard::SpawnSwarmProjectile, SwarmDelay - (CardRelease * i));
        GetWorldTimerManager().SetTimer(CardSpawnHandle, CardSpawnDelegate, CardRelease * i, false);
    }
    for(AProjectileCard* NewCard : ProjectileCards)
    {
        NewCard->SetIgnoredActors(CardActors);
    }
    DestroyCard();
}

void ASwarmProjectileCard::SpawnSwarmProjectile(float CardFreezeDelay)
    {
        FVector CardSpawn = FVector(
        FMath::RandRange(-HorizontalOffsetBound, HorizontalOffsetBound),
        FMath::RandRange(-HorizontalOffsetBound, HorizontalOffsetBound),
        FMath::RandRange(10.0f,VerticalOffsetBound)
        );
        AProjectileCard* LaunchedCard = GetWorld()->SpawnActor<AProjectileCard>(SwarmCardClass, GetActorLocation()+CardSpawn, GetActorRotation());
        LaunchedCard->FreezeCard(true);
        UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), SpawnFX, GetActorLocation()+CardSpawn, GetActorForwardVector().Rotation(),FVector(ParticleScale), true, true, ENCPoolMethod::None, true);
        FTimerHandle SwarmDelayHandle;
        if(!EnemyTargets.IsEmpty())
        {
            AActor* RandomEnemy = EnemyTargets[FMath::RandRange(0,EnemyTargets.Num()-1)];
            FVector EnemyLocation = RandomEnemy->GetActorLocation();
            FTimerDelegate SwarmDelegate = FTimerDelegate::CreateUObject(LaunchedCard, &AProjectileCard::FreezeCard, false);
            GetWorldTimerManager().SetTimer(SwarmDelayHandle, SwarmDelegate, SwarmDelay, false);
            LaunchedCard->SetHomingTarget(EnemyLocation, RandomEnemy);
            ProjectileCards.Emplace(LaunchedCard);
            CardActors.Emplace(LaunchedCard);
        }
    }