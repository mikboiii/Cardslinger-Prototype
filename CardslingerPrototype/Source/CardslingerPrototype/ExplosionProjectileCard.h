// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProjectileCard.h"
#include "ExplosionProjectileCard.generated.h"

/**
 * 
 */
UCLASS()
class CARDSLINGERPROTOTYPE_API AExplosionProjectileCard : public AProjectileCard
{
	GENERATED_BODY()

protected:
	virtual void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) override;

	//the damage that the card explosion deals
	UPROPERTY(EditAnywhere)
	float CardExplosiveDamage = 100.0f;
	//the radius of the card explosion
	UPROPERTY(EditAnywhere)
	float CardExplosionRadius = 300.0f;
};
