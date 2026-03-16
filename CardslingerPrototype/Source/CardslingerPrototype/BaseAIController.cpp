// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseAIController.h"
#include "Kismet/GameplayStatics.h"
#include "BaseAIClass.h"

void ABaseAIController::BeginPlay()
{
    Super::BeginPlay();
    PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
}

void ABaseAIController::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);
}

bool ABaseAIController::IsDead() const
{
    ABaseAIClass* ControlledCharacter = Cast<ABaseAIClass>(GetPawn());
    if(ControlledCharacter != nullptr)
    {
        return ControlledCharacter->IsDead();
    }
    return true;
}

void ABaseAIController::OnPossess(APawn* InPawn)
{
    Super::OnPossess(InPawn);

    // RunBehaviorTree and initialize blackboard here
    if (AIBehavior)
    {
        RunBehaviorTree(AIBehavior);
        BlackboardComponent = GetBlackboardComponent();
        
        if (!BlackboardComponent)
        {
            UE_LOG(LogTemp, Warning, TEXT("%s: Blackboard invalid after RunBehaviorTree"), *GetName());
            return;
        }
        // Set the player for all AI
        BlackboardComponent->SetValueAsObject(TEXT("PlayerActor"), PlayerPawn);

        // Let children set their own values
        InitializeBlackboardValues();
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("%s has no AIBehavior assigned"), *GetName());
    }
}

// Put base AI values you want in here
void ABaseAIController::InitializeBlackboardValues()
{
    if (BlackboardComponent)
    {
        BlackboardComponent->SetValueAsFloat(TEXT("FireCooldown"), 1.0f);
    }
}


UBehaviorTree* ABaseAIController::GetBehaviorTree()
{
    return AIBehavior;
}
