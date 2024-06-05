// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_PlayerLocationIfSeen.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"
#include "Kismet/GameplayStatics.h"


UBTService_PlayerLocationIfSeen::UBTService_PlayerLocationIfSeen()
{
    NodeName = TEXT("Update Player Location If Seen");
}

void UBTService_PlayerLocationIfSeen::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
    Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

    APawn *PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
    if(PlayerPawn == nullptr) return;

    AAIController* Controller = OwnerComp.GetAIOwner();
    if(Controller == nullptr) return;

    if(Controller->LineOfSightTo(PlayerPawn, FVector::Zero()))
    {
        OwnerComp.GetBlackboardComponent()->SetValueAsObject(TEXT("Player"), PlayerPawn);
        OwnerComp.GetBlackboardComponent()->SetValueAsVector(TEXT("LastKnownPlayerLocation"), PlayerPawn->GetActorLocation());
    }
    else
    {
        OwnerComp.GetBlackboardComponent()->ClearValue(TEXT("Player"));
    }
}
