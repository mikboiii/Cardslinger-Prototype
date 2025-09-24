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
    MaxLevelIndex = LevelList.Num()-1;
    UE_LOG(LogTemp, Display, TEXT("Max Level: %d, Current Level: %d"), MaxLevelIndex, CurrentLevel);
    FLatentActionInfo LatentInfo;
    UGameplayStatics::LoadStreamLevel(this, FName(LevelList[CurrentLevel].GetAssetName()), true, false, LatentInfo);
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
    FLatentActionInfo LatentInfoLoad;
    FLatentActionInfo LatentInfoUnload;
    UGameplayStatics::LoadStreamLevel(this, FName(LevelList[CurrentLevel+1].GetAssetName()), true, true, LatentInfoLoad);
    UGameplayStatics::UnloadStreamLevel(this, FName(LevelList[CurrentLevel].GetAssetName()), LatentInfoUnload, true);
    UGameplayStatics::GetStreamingLevel(this, FName(LevelList[CurrentLevel].GetAssetName()))->SetShouldBeLoaded(false);
    UE_LOG(LogTemp, Display, TEXT("Level unloaded: %s"), *LevelList[CurrentLevel].GetAssetName());
    if(CurrentLevel<MaxLevelIndex) CurrentLevel++;
    UE_LOG(LogTemp, Display, TEXT("Max Level: %d, Current Level: %d"), MaxLevelIndex, CurrentLevel);
}