// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCard.h"
#include "HoverCard.generated.h"

/**
 * 
 */
UCLASS()
class CARDSLINGERPROTOTYPE_API AHoverCard : public ABaseCard
{
	GENERATED_BODY()

	virtual void CardEffect(class ACardDeck* CardDeck, FVector Direction, FVector Target, AActor* TargetActor) override;

	void EndHover();

	private:
		UPROPERTY(EditAnywhere)
		float FlyTime = 10.0f;

		UPROPERTY(EditAnywhere)
		float FlySpeed = 500.0f;
};
