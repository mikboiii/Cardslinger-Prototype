// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_CheckDistanceToTarget.generated.h"

/**
 * 
 */
UCLASS()
class CARDSLINGERPROTOTYPE_API UBTTask_CheckDistanceToTarget : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	
	public:
		UBTTask_CheckDistanceToTarget();
		UPROPERTY(EditAnywhere, Category = Blackboard) 
		FBlackboardKeySelector TargetKey;
		UPROPERTY(EditAnywhere, Category = Blackboard) 
		FBlackboardKeySelector DistanceKey;

	private:
		virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
