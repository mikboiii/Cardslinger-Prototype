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
    if (enemyTarget != nullptr)
    {
        UE_LOG(LogTemp, Log, TEXT("Target = %s"), *enemyTarget->GetActorNameOrLabel());

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
    UE_LOG(LogTemp, Log, TEXT("Find closest enemy!"));

    // Store the card hit location
    cardLocation = GetActorLocation();
    //Store the closest distance to the card impact
    if (!EnemyTargets.IsEmpty())
    {
        AActor* Closest = nullptr;
        float ClosestDistance = TNumericLimits<float>::Max();

        // Foreach loop to check each enemy found in the radius
        for (AActor* selectedEnemy : EnemyTargets)
        {
            if (!closestEnemy)
                closestEnemy = selectedEnemy;

            // Find the distance between the enemy and the enemy
            float cardToEnemyDistance = FVector::DistSquared(cardLocation, selectedEnemy->GetActorLocation());

            if (Closest == nullptr || cardToEnemyDistance < ClosestDistance)
            {
                closestEnemy = selectedEnemy;
                ClosestDistance = cardToEnemyDistance;
                UE_LOG(LogTemp, Log, TEXT("%f"), ClosestDistance);

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


