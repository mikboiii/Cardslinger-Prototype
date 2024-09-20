// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProjectileCard.h"
#include "ConcussiveProjectileCard.generated.h"

/**
 * 
 */
UCLASS()
class CARDSLINGERPROTOTYPE_API AConcussiveProjectileCard : public AProjectileCard
{
	GENERATED_BODY()

	protected:
		virtual void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) override;

		//the damage that the card explosion deals
		UPROPERTY(EditAnywhere)
		float CardExplosiveDamage = 10.0f;
		//the radius of the card explosion
		UPROPERTY(EditAnywhere)
		float CardExplosionRadius = 300.0f;
		UPROPERTY(EditAnywhere)
		float CardPushForce = 10000.0f;
		UPROPERTY(EditAnywhere)
		float RagdollTime = 2.0f;

		void ConcussionSphere();
		
		TArray<AActor*> AffectedEnemies;
		TArray<AActor*> FindActorsInRange(UClass* ActorClass, float Radius);
};
