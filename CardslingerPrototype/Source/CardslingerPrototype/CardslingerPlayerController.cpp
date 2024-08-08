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
    //GetWorldTimerManager().SetTimer(RestartTimer, this, &APlayerController::RestartLevel, RestartDelay);

}

void ACardslingerPlayerController::BeginPlay()
{
    Super::BeginPlay();

    HUD = CreateWidget(this, HUDScreenClass);
    PauseScreen = CreateWidget(this, PauseScreenClass);
    if(HUD == nullptr) return;
    HUD->AddToViewport();
}

UUserWidget* ACardslingerPlayerController::GetHUD() const
{
    return HUD;
}

void ACardslingerPlayerController::RestartLevelBP()
{
    RestartLevel();
}

void ACardslingerPlayerController::PauseLevel()
{
    UE_LOG(LogTemp, Display, TEXT("Pause called"));
    if(PauseScreen) PauseScreen->AddToViewport();
}

