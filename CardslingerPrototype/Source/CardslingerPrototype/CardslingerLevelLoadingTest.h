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

		virtual void StartPlay() override;

	private:
		UFUNCTION(BlueprintCallable, Category="Level Loading")
		void LoadNextLevel();
		UPROPERTY(EditAnywhere, Category="Levels")
		TArray<TSoftObjectPtr<UWorld>> LevelList;

		UPROPERTY(VisibleAnywhere)
		int CurrentLevel = 0;
		UPROPERTY(VisibleAnywhere)
		int MaxLevelIndex;
};
