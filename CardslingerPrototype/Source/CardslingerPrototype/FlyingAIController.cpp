// Fill out your copyright notice in the Description page of Project Settings.


#include "FlyingAIController.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "FlyingEnemy.h"

void AFlyingAIController::BeginPlay()
{
    Super::BeginPlay();

    PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

    if(AIBehavior != nullptr)
    {
        RunBehaviorTree(AIBehavior);
        if(GetPawn()) 
        {
            GetBlackboardComponent()->SetValueAsVector(TEXT("StartLocation"), GetPawn()->GetActorLocation());
        }
    }

}

void AFlyingAIController::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);
}

bool AFlyingAIController::IsDead() const
{
    AFlyingEnemy* ControlledCharacter = Cast<AFlyingEnemy>(GetPawn());
    if(ControlledCharacter != nullptr)
    {
        return ControlledCharacter->IsDead();
    }
    return true;
}

UBehaviorTree* AFlyingAIController::GetBehaviorTree()
{
    return AIBehavior;
}
