// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_CircleTarget.h"
#include "FlyingEnemy.h"
#include "FlyingAIController.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Engine/World.h"
#include "TimerManager.h"

UBTTask_CircleTarget::UBTTask_CircleTarget()
{
    NodeName = TEXT("Circle target");
}

EBTNodeResult::Type UBTTask_CircleTarget::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    Super::ExecuteTask(OwnerComp, NodeMemory);
    if(OwnerComp.GetAIOwner()->GetPawn() == nullptr) return EBTNodeResult::Failed;
    AFlyingEnemy* Character = Cast<AFlyingEnemy>(OwnerComp.GetAIOwner()->GetPawn());
    if(Character == nullptr) return EBTNodeResult::Failed;
    AActor* Target = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(TargetKey.SelectedKeyName));
    CircleTarget(Character, Target, OwnerComp);
    return EBTNodeResult::Succeeded;
}

void UBTTask_CircleTarget::CircleTarget(AActor* AIActor, AActor* PlayerActor, UBehaviorTreeComponent& OwnerComp)
{
    FRotator LookRotator = UKismetMathLibrary::FindLookAtRotation(AIActor->GetActorLocation(), PlayerActor->GetActorLocation());
    FVector FlyingPos = UKismetMathLibrary::GetRightVector(LookRotator) * DirectionMode;
    FlyingPos.Z += OwnerComp.GetBlackboardComponent()->GetValueAsFloat(SineKey.SelectedKeyName);
    Cast<APawn>(AIActor)->AddMovementInput(FlyingPos);
    if(bCanSwitchDirection)
    {
        FTimerHandle DirectionChangeHandle;
        GetWorld()->GetTimerManager().SetTimer(DirectionChangeHandle, this, &UBTTask_CircleTarget::SwitchDirection, TimeToSwitchDir);
        bCanSwitchDirection = false;
    }
}

void UBTTask_CircleTarget::SwitchDirection()
{
    DirectionMode *= -1.0f;
    bCanSwitchDirection = true;
}