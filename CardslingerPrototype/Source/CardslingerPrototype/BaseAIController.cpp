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

UBehaviorTree* ABaseAIController::GetBehaviorTree()
{
    return AIBehavior;
}
