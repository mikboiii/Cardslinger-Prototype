// Fill out your copyright notice in the Description page of Project Settings.


#include "FlyingAIController.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BaseCharacterClass.h"
#include "FlyingEnemy.h"

void AFlyingAIController::BeginPlay()
{
    Super::BeginPlay();

    if(AIBehavior != nullptr)
    {
        RunBehaviorTree(AIBehavior);
        if(GetPawn()) 
        {
            GetBlackboardComponent()->SetValueAsObject(TEXT("PlayerActor"), Cast<ABaseCharacterClass>(PlayerPawn));
            GetBlackboardComponent()->SetValueAsFloat(TEXT("TargetDistToPlayer"), HoverDistFromPlayer);
        }
    }

}
