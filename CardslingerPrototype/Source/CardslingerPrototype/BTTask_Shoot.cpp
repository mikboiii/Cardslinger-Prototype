// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_Shoot.h"
#include "BaseAIClass.h"
#include "BaseAIController.h"

UBTTask_Shoot::UBTTask_Shoot()
{
    NodeName = TEXT("Shoot");
}

EBTNodeResult::Type UBTTask_Shoot::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    Super::ExecuteTask(OwnerComp, NodeMemory);
    if(OwnerComp.GetAIOwner()->GetPawn() == nullptr) return EBTNodeResult::Failed;
    ABaseAIClass* Character = Cast<ABaseAIClass>(OwnerComp.GetAIOwner()->GetPawn());
    if(Character == nullptr) return EBTNodeResult::Failed;

    Character->Shoot();
    return EBTNodeResult::Succeeded;
}