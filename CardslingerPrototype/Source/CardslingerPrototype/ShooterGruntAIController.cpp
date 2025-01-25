// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterGruntAIController.h"

void AShooterGruntAIController::BeginPlay()
{
    Super::BeginPlay();

    
    if(AIBehavior != nullptr)
    {
        RunBehaviorTree(AIBehavior);
        if(GetPawn()) 
        {
            GetBlackboardComponent()->SetValueAsVector(TEXT("StartLocation"), GetPawn()->GetActorLocation());
            GetBlackboardComponent()->SetValueAsFloat(TEXT("FireCooldown"), Cast<ABaseAIClass>(GetPawn())->GetFireCooldown());
        }
    }
}