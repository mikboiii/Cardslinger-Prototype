// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseAIClass.h"
#include "TankEnemy.generated.h"

/**
 * 
 */
UCLASS()
class CARDSLINGERPROTOTYPE_API ATankEnemy : public ABaseAIClass // Maybe implement interface later?
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USphereComponent* ShieldComponent;

	virtual void BeginPlay() override;
	class AProjectileCard;
	
public:
	void HandleShieldHit(AProjectileCard* Projectile, const FHitResult& Hit);
};


