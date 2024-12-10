// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCard.h"
#include "ReflectionCard.generated.h"

/**
 * 
 */
UCLASS()
class CARDSLINGERPROTOTYPE_API AReflectionCard : public ABaseCard
{
	GENERATED_BODY()
	public:
		virtual void CardEffect(class ACardDeck* CardDeck, FVector Direction, FVector Target, AActor* TargetActor) override;

		UPROPERTY(EditDefaultsOnly)
		float ReflectionShieldDuration = 2.0f;
};
