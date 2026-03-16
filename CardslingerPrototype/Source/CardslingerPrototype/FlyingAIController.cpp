// Fill out your copyright notice in the Description page of Project Settings.


#include "FlyingAIController.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BaseCharacterClass.h"
#include "FlyingEnemy.h"

void AFlyingAIController::InitializeBlackboardValues()
{
    // Keep base AI values
    Super::InitializeBlackboardValues();

    if (BlackboardComponent)
    {
        BlackboardComponent->SetValueAsFloat(TEXT("TargetDistToPlayer"), HoverDistFromPlayer);
    }
}