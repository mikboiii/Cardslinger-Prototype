// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCard.h"
#include "ShieldCard.generated.h"

/**
 * 
 */
UCLASS()
class CARDSLINGERPROTOTYPE_API AShieldCard : public ABaseCard
{
	GENERATED_BODY()
	public:
		virtual void CardEffect(class ACardDeck* CardDeck, FVector Direction, FVector Target, AActor* TargetActor) override;
		//determines the value of shield added (between 0 and 1 if percentile)
		UPROPERTY(EditDefaultsOnly)
		float ShieldRestored = 0.5f;
		//determines if the card restores a percentage of shield
		UPROPERTY(EditDefaultsOnly)
		bool IsPercentileShield = true;	
};
