// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_CheckDistanceToTarget.h"
#include "FlyingEnemy.h"
#include "FlyingAIController.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTTask_CheckDistanceToTarget::UBTTask_CheckDistanceToTarget()
{
    NodeName = TEXT("Check distance to target");
}

EBTNodeResult::Type UBTTask_CheckDistanceToTarget::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    Super::ExecuteTask(OwnerComp, NodeMemory);
    if(OwnerComp.GetAIOwner()->GetPawn() == nullptr) return EBTNodeResult::Failed;
    AFlyingEnemy* Character = Cast<AFlyingEnemy>(OwnerComp.GetAIOwner()->GetPawn());
    if(Character == nullptr) return EBTNodeResult::Failed;
    AActor* Target = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(TargetKey.SelectedKeyName));
    float TargetDistance = OwnerComp.GetBlackboardComponent()->GetValueAsFloat(DistanceKey.SelectedKeyName);
    
    if(FVector::Dist(Cast<AActor>(Character)->GetActorLocation(), Target->GetActorLocation()) < TargetDistance)
    {
        return EBTNodeResult::Succeeded;
    }
    else
    {
        return EBTNodeResult::Failed;
    }
}

