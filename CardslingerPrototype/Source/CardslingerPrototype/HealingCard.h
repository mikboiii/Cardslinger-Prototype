// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCard.h"
#include "HealingCard.generated.h"

/**
 * 
 */
UCLASS()
class CARDSLINGERPROTOTYPE_API AHealingCard : public ABaseCard
{
	GENERATED_BODY()
	
	public:
		virtual void CardEffect(class ACardDeck* CardDeck, FVector Direction, FVector Target, AActor* TargetActor) override;
		//determines the value healed (between 0 and 1 if percentile)
		UPROPERTY(EditDefaultsOnly)
		float HealingRestored = 0.25;
		//determines if the card restores a percentage of health
		UPROPERTY(EditDefaultsOnly)
		bool IsPercentileHealing = true;
};
