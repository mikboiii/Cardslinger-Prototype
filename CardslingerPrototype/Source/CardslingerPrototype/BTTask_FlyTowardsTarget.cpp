// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_FlyTowardsTarget.h"
#include "FlyingEnemy.h"
#include "FlyingAIController.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTTask_FlyTowardsTarget::UBTTask_FlyTowardsTarget()
{
    NodeName = TEXT("Fly towards object");
}

EBTNodeResult::Type UBTTask_FlyTowardsTarget::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    Super::ExecuteTask(OwnerComp, NodeMemory);
    if(OwnerComp.GetAIOwner()->GetPawn() == nullptr) return EBTNodeResult::Failed;
    AFlyingEnemy* Character = Cast<AFlyingEnemy>(OwnerComp.GetAIOwner()->GetPawn());
    if(Character == nullptr) return EBTNodeResult::Failed;
    AActor* Target = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(TargetKey.SelectedKeyName));
    Character->AddMovementInput(Target->GetActorLocation() - Character->GetActorLocation());
    return EBTNodeResult::Succeeded;
}