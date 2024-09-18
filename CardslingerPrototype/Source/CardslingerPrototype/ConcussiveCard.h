// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCard.h"
#include "ConcussiveCard.generated.h"

/**
 * 
 */
UCLASS()
class CARDSLINGERPROTOTYPE_API AConcussiveCard : public ABaseCard
{
	GENERATED_BODY()
	virtual void CardEffect(class ACardDeck* CardDeck, FVector Direction, FVector Target, AActor* TargetActor) override;

private:
	//the explosive projectile card class
	UPROPERTY(EditAnywhere)
	TSubclassOf<class AProjectileCard> ExplosionProjectileCardClass;
};
