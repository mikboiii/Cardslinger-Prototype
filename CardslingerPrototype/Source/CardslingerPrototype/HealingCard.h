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
		virtual void CardEffect(class ACardDeck* CardDeck, FVector Direction) override;
		UPROPERTY(EditDefaultsOnly)
		float HealingRestored;
		UPROPERTY(EditDefaultsOnly)
		bool IsPercentileHealing;
};
