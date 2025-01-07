// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_LookAtObject.generated.h"

/**
 * 
 */
UCLASS()
class CARDSLINGERPROTOTYPE_API UBTTask_LookAtObject : public UBTTask_BlackboardBase
{
	GENERATED_BODY()

	public:
		UBTTask_LookAtObject();

		UPROPERTY(EditAnywhere, Category = Blackboard) 
		FBlackboardKeySelector TargetKey;
	protected:
		virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

		void TurnToTarget(AActor* AIActor, AActor* PlayerActor);
};
