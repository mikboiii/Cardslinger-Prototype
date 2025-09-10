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
    enemyTarget = FindClosestEnemy();
    if (enemyTarget)
    {
        UE_LOG(LogTemp, Log, TEXT("%f"), enemyTarget->GetActorLocation());
        UE_LOG(LogTemp, Log, TEXT("Target = %s"), *enemyTarget->GetActorNameOrLabel());

        // Add enemy to hit list
        HitEnemies.Add(enemyTarget);

        //create unreal damage event
        FPointDamageEvent DamageEvent(CardDamage, Hit, -GetActorForwardVector(), nullptr);
        //apply damage to target
        enemyTarget->TakeDamage(CardLightningDamage, DamageEvent, enemyTarget->GetController(), this);
    }
    DestroyCard();
}

ABaseAIClass* ALightningProjectileCard::FindClosestEnemy()
{
    EnemyTargets = FindActorsInRange(ABaseAIClass::StaticClass(), CardChainDistance);

    // Store the card hit location
    cardLocation = GetActorLocation();
    //Store the closest distance to the card impact
    if (!EnemyTargets.IsEmpty())
    {
        AActor* Closest = nullptr;
        float closestDist = CardChainDistance;

        // Foreach loop to check each enemy found in the radius
        for (AActor* selectedEnemy : EnemyTargets)
        {
            // If no enemies found then skip
            if (!selectedEnemy) continue;

            // Check if enemy already been hit
            if (HitEnemies.Contains(selectedEnemy)) continue;

            // Find the distance between the card impact location and an enemy
            float ClosestDistanceSq = FVector::DistSquared(cardLocation, selectedEnemy->GetActorLocation());

            // Make sure closest & cardToEnemyDistance gets initilised first run
            // ClosestDistanceSq
            if (Closest == nullptr || ClosestDistanceSq < closestDist)
            {
                Closest = selectedEnemy;
                closestDist = ClosestDistanceSq;

                DrawDebugLine(GetWorld(), GetActorLocation(), selectedEnemy->GetActorLocation(), FColor::Red, false, 1000.0f);
            }
        }
        // Cast the closestEnemy found from the loop to be the first lightning target
        /*ABaseAIClass* lightningTarget = Cast<ABaseAIClass>(closestEnemy);
        return lightningTarget;*/
        return Cast<ABaseAIClass>(Closest);
    }
    return nullptr;
};


