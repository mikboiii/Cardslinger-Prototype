// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCard.h"
#include "ExplosionTestCard.generated.h"

/**
 * 
 */
UCLASS()
class CARDSLINGERPROTOTYPE_API AExplosionTestCard : public ABaseCard
{
	GENERATED_BODY()
	virtual void CardEffect(class ACardDeck* CardDeck, FVector Direction) override;

private:
	UPROPERTY(EditAnywhere)
	TSubclassOf<class AProjectileCard> ExplosionProjectileCardClass;

};


