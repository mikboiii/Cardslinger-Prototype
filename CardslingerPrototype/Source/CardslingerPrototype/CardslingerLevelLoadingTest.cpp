// Fill out your copyright notice in the Description page of Project Settings.


#include "CardslingerLevelLoadingTest.h"
#include "EngineUtils.h"
#include "GameFramework/Controller.h"
#include "Kismet/GameplayStatics.h"
#include "BaseAIController.h"
#include "Engine/DamageEvents.h"
#include "BaseAIClass.h"

void ACardslingerLevelLoadingTest::StartPlay()
{
    Super::StartPlay();
    MaxLevel = LevelList.Num();
    LoadNextLevel();
}

void ACardslingerLevelLoadingTest::PawnKilled(APawn* PawnKilled)
{
    APlayerController* PlayerController = Cast<APlayerController>(PawnKilled->GetController());
    if(PlayerController != nullptr)
    {
        EndGame(false);
    }

    for(ABaseAIController* Controller : TActorRange<ABaseAIController>(GetWorld()))
    {
        if(!Controller->IsDead())
        {
            return;
        }
        
    }
    EndGame(true);
}


void ACardslingerLevelLoadingTest::EndGame(bool bIsPlayerWinner)
{
    //LoadNextLevel();
}

void ACardslingerLevelLoadingTest::LoadNextLevel()
{
    FLatentActionInfo LatentInfo;
    UGameplayStatics::LoadStreamLevel(this, FName(LevelList[CurrentLevel].GetAssetName()), true, true, LatentInfo);
    if(CurrentLevel<MaxLevel) CurrentLevel++;
}