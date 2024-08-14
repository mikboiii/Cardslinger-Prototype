// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CardslingerPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class CARDSLINGERPROTOTYPE_API ACardslingerPlayerController : public APlayerController
{
	GENERATED_BODY()
	
	public:
	virtual void GameHasEnded(class AActor *EndGameFocus = nullptr, bool bIsWinner = false) override;

	virtual void BeginPlay() override;
	
	private:
		UPROPERTY(EditAnywhere)
		TSubclassOf<class UUserWidget> LoseScreenClass;

		UPROPERTY(EditAnywhere)
		TSubclassOf<class UUserWidget> WinScreenClass;

		UPROPERTY(EditAnywhere)
		float RestartDelay = 5.0f;

		FTimerHandle RestartTimer;

		UPROPERTY(EditAnywhere)
		TSubclassOf<class UUserWidget> HUDScreenClass;

		UPROPERTY(EditAnywhere)
		TSubclassOf<class UUserWidget> PauseScreenClass;

		class UUserWidget* HUD;

		class UUserWidget* PauseScreen;

		bool bIsGamePaused = false;

	public:
		class UUserWidget* GetHUD() const;

		UFUNCTION(BlueprintCallable)
		void RestartLevelBP();
		UFUNCTION(BlueprintCallable)
		void PauseLevel();
};
