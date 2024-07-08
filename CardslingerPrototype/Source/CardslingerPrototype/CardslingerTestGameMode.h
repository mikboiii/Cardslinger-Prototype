// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CardslingerTestGameMode.generated.h"

/**
 * 
 */
UCLASS()
class CARDSLINGERPROTOTYPE_API ACardslingerTestGameMode : public AGameModeBase
{
	GENERATED_BODY()
	public:
		virtual void PawnKilled(class APawn* PawnKilled);

		virtual void EndGame(bool bIsPlayerWinner);

	private:
		UFUNCTION(Exec, Category="Commands")
		void NPCKillAll();
};
