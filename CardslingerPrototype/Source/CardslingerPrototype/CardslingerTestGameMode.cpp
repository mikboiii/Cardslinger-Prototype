// Fill out your copyright notice in the Description page of Project Settings.


#include "CardslingerTestGameMode.h"
#include "EngineUtils.h"
#include "GameFramework/Controller.h"
#include "Kismet/GameplayStatics.h"
#include "BaseAIController.h"
#include "Engine/DamageEvents.h"
#include "BaseAIClass.h"

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
    //EndGame(true);
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

void ACardslingerTestGameMode::NPCKillAll()
{
    FHitResult Hit;
    FPointDamageEvent KillEvent(1000000.0f, Hit, FVector::Zero(), nullptr);
    AController* DebugController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
    AActor* DebugPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
    for(ABaseAIClass* Enemy : TActorRange<ABaseAIClass>(GetWorld()))
    {
        
        Enemy->TakeDamage(1000000.0f, KillEvent, DebugController, DebugController);
    }
}
