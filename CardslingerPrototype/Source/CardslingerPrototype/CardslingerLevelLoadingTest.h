// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CardslingerTestGameMode.h"
#include "CardslingerLevelLoadingTest.generated.h"

/**
 * 
 */
UCLASS()
class CARDSLINGERPROTOTYPE_API ACardslingerLevelLoadingTest : public ACardslingerTestGameMode
{
	GENERATED_BODY()
	
	public:
		virtual void PawnKilled(class APawn* PawnKilled) override;

		virtual void EndGame(bool bIsPlayerWinner) override;
};
