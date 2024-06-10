// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProjectileCard.h"
#include "SlowTimeProjectileCard.generated.h"

/**
 * 
 */
UCLASS()
class CARDSLINGERPROTOTYPE_API ASlowTimeProjectileCard : public AProjectileCard
{
	GENERATED_BODY()

	protected:

		virtual void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) override;

		void SlowTimeSphere();

		void ResetTimeDilation();

		TArray<AActor*> FindActorsInRange(UClass* ActorClass, float Radius);

		TArray<AActor*> AffectedEnemies;

		UPROPERTY(EditAnywhere)
		float CardSlowTimeRadius = 300.0f;

		UPROPERTY(EditAnywhere)
		float CardSlowDilationValue = 0.5f;

		UPROPERTY(EditAnywhere)
		float CardSlowDuration = 15.0f;
};
