// Fill out your copyright notice in the Description page of Project Settings.


#include "LightningProjectileCard.h"
#include "Kismet/GameplayStatics.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "Engine/DamageEvents.h"
#include "BaseAIClass.h"
#include "GameFramework/Actor.h"

void ALightningProjectileCard::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
    FindClosestEnemy();
}

ABaseAIClass* ALightningProjectileCard::FindClosestEnemy()/*TArray<AActor*> EnemiesToCheck)*/
{
    EnemyTargets = FindActorsInRange(ABaseAIClass::StaticClass(), CardChainDistance);

    // Store the card hit location
    FVector cardLocation = GetActorLocation();
    // Store the closest distance to the card impact
    AActor* closestEnemy;

    for(AActor* selectedEnemy : EnemyTargets)
    {    
        float cardToEnemyDistance = FVector::Distance(cardLocation, selectedEnemy->GetActorLocation());

        if (cardToEnemyDistance < FVector::Distance(cardLocation, closestEnemy->GetActorLocation()))
            closestEnemy = selectedEnemy;

    }
    ABaseAIClass* lightningTarget = Cast<ABaseAIClass, AActor>(closestEnemy);
    return lightningTarget;
};
