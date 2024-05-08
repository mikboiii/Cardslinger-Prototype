// Fill out your copyright notice in the Description page of Project Settings.


#include "CardslingerPlayerController.h"
#include "Engine/EngineTypes.h"
#include "Blueprint/UserWidget.h"
#include "TimerManager.h"

void ACardslingerPlayerController::GameHasEnded(AActor *EndGameFocus, bool bIsWinner)
{
    Super::GameHasEnded(EndGameFocus, bIsWinner);
    if(bIsWinner)
    {
    UUserWidget *WinScreen = CreateWidget(this, WinScreenClass);
    if(WinScreen == nullptr) return;
    WinScreen->AddToViewport();
    }
    else
    {
    UUserWidget *LoseScreen = CreateWidget(this, LoseScreenClass);
    if(LoseScreen == nullptr) return;
    LoseScreen->AddToViewport();
    }
    GetWorldTimerManager().SetTimer(RestartTimer, this, &APlayerController::RestartLevel, RestartDelay);

}

void ACardslingerPlayerController::BeginPlay()
{
    Super::BeginPlay();

    UUserWidget *PlayerHUD = CreateWidget(this, HUDScreenClass);
    if(PlayerHUD == nullptr) return;
    PlayerHUD->AddToViewport();
}

