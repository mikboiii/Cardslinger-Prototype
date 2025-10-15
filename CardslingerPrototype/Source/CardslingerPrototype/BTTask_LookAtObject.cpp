// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_LookAtObject.h"
#include "FlyingEnemy.h"
#include "FlyingAIController.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "BehaviorTree/BlackboardComponent.h"


UBTTask_LookAtObject::UBTTask_LookAtObject()
{
    NodeName = TEXT("Look at object");
}

EBTNodeResult::Type UBTTask_LookAtObject::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    Super::ExecuteTask(OwnerComp, NodeMemory);
    if(OwnerComp.GetAIOwner()->GetPawn() == nullptr) return EBTNodeResult::Failed;
    AFlyingEnemy* Character = Cast<AFlyingEnemy>(OwnerComp.GetAIOwner()->GetPawn());
    if(Character == nullptr) return EBTNodeResult::Failed;
    if(OwnerComp.GetBlackboardComponent()->GetValueAsObject(TargetKey.SelectedKeyName) == nullptr)
    {
        OwnerComp.GetBlackboardComponent()->SetValueAsObject(TEXT("PlayerActor"), Cast<ABaseCharacterClass>(UGameplayStatics::GetPlayerCharacter(GetWorld(),0)));
        return EBTNodeResult::Failed;
    }
    AActor* Target = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(TargetKey.SelectedKeyName));
    TurnToTarget(Character, Target);
    return EBTNodeResult::Succeeded;
}

void UBTTask_LookAtObject::TurnToTarget(AActor* AIActor, AActor* PlayerActor)
{
    FRotator LookRotator = UKismetMathLibrary::FindLookAtRotation(AIActor->GetActorLocation(), PlayerActor->GetActorLocation());
    AIActor->SetActorRotation(LookRotator);
}