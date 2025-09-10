// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProjectileCard.h"
#include "LightningProjectileCard.generated.h"

/**
 * 
 */
UCLASS()
class CARDSLINGERPROTOTYPE_API ALightningProjectileCard : public AProjectileCard
{
	GENERATED_BODY()

	virtual void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) override;

	class ABaseAIClass* FindClosestEnemy();

	void ChainLightning(const FHitResult& Hit);

private:
	//the damage that the lighting deals
	UPROPERTY(EditAnywhere)
	float CardLightningDamage = 100.0f;

	//the reduction of chain damage between targets
	UPROPERTY(EditAnywhere)
	float ChainDamageReduction = 10.0f;

	//the distance the lightning can chain to
	UPROPERTY(EditAnywhere)
	float CardChainDistance = 600.0f;

	//the reduction of chain range between targets
	UPROPERTY(EditAnywhere)
	float ChainRangeReduction = 100.0f;

	// amount of times the lightning can chain between enemies
	UPROPERTY(EditAnywhere)
	int32 CardLightningChains = 3;

	// hit list of enemies hit by lightning
	UPROPERTY()
	TArray<AActor*> HitEnemies;


	FVector cardLocation;

	AActor* closestEnemy;

	class ABaseAIClass* target;

	TArray<AActor*> EnemyTargets;
};
