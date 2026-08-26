// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseAIClass.h"
#include "AIController.h"	
#include "TankAIController.h"
#include "TankEnemy.generated.h"

/**
 * 
 */

class USphereComponent;
class AProjectileCard;

UCLASS()
class CARDSLINGERPROTOTYPE_API ATankEnemy : public ABaseAIClass // Maybe implement interface later?
{
	GENERATED_BODY()

public:
	ATankEnemy();
	
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USphereComponent* ShieldComponent;

	virtual void BeginPlay() override;

	UPROPERTY()
	ATankAIController* ThisController;
	
public:
	void HandleShieldHit(AProjectileCard* Projectile, const FHitResult& Hit);

};


