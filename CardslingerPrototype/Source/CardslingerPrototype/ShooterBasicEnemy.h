// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseAIClass.h"
#include "ShooterBasicEnemy.generated.h"

/**
 * 
 */
UCLASS()
class CARDSLINGERPROTOTYPE_API AShooterBasicEnemy : public ABaseAIClass
{
	GENERATED_BODY()

	protected:
		virtual float TakeDamage(float DamageAmount, struct FDamageEvent const &DamageEvent, class AController *EventInstigator, AActor* DamageCauser) override;
};
