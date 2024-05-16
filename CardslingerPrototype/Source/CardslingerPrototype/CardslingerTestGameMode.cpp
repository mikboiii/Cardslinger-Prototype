// Fill out your copyright notice in the Description page of Project Settings.


#include "CardslingerTestGameMode.h"
#include "EngineUtils.h"
#include "GameFramework/Controller.h"
#include "BaseAIController.h"

void ACardslingerTestGameMode::PawnKilled(APawn* PawnKilled)
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


void ACardslingerTestGameMode::EndGame(bool bIsPlayerWinner)
{
    //bool bIsPlayerController = Controller->IsPlayerController();
    for(AController* Controller : TActorRange<AController>(GetWorld()))
    {
        bool bIsWinner = Controller->IsPlayerController() == bIsPlayerWinner;
        Controller->GameHasEnded(Controller->GetPawn(), bIsWinner);
    }
}
