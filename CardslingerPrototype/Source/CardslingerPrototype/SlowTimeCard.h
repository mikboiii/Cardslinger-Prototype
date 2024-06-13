// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCard.h"
#include "SlowTimeCard.generated.h"

/**
 * 
 */
UCLASS()
class CARDSLINGERPROTOTYPE_API ASlowTimeCard : public ABaseCard
{
	GENERATED_BODY()

	public:
		void CardEffect(class ACardDeck* CardDeck, FVector Direction, FVector Target, AActor* TargetActor) override;
	private:
		UPROPERTY(EditDefaultsOnly, Category = "CardEffect")
		TSubclassOf<class AProjectileCard> SlowTimeProjectileCardClass;
};
