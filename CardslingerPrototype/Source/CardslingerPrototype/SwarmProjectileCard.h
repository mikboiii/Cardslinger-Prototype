// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProjectileCard.h"
#include "SwarmProjectileCard.generated.h"

/**
 * 
 */
UCLASS()
class CARDSLINGERPROTOTYPE_API ASwarmProjectileCard : public AProjectileCard
{
	GENERATED_BODY()

	protected:	
		virtual void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) override;

	private:

		UPROPERTY(EditAnywhere)
		int32 SwarmPopulation = 12;
		
		UPROPERTY(EditAnywhere)
		float SearchRadius = 500.0f;

		UPROPERTY(EditAnywhere)
		TSubclassOf<AProjectileCard> SwarmCardClass;

		UPROPERTY(EditAnywhere)
		class UNiagaraSystem* SpawnFX;

		UPROPERTY(EditAnywhere)
		float SwarmDelay = 1.0f;

		TArray<AActor*> EnemyTargets;

		TArray<AProjectileCard*> SpawnedCards;

		UPROPERTY(EditAnywhere)
		float HorizontalOffsetBound = 50;

		UPROPERTY(EditAnywhere)
		float VerticalOffsetBound = 10;

		void SpawnSwarm();

		void SpawnSwarmProjectile(float CardFreezeDelay);

		TArray<AProjectileCard*> ProjectileCards;
    	TArray<AActor*> CardActors;
};
