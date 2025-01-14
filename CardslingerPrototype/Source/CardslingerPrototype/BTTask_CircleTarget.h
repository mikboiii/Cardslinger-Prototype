// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_CircleTarget.generated.h"

/**
 * 
 */
UCLASS()
class CARDSLINGERPROTOTYPE_API UBTTask_CircleTarget : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	
	public:
		UBTTask_CircleTarget();

		UPROPERTY(EditAnywhere, Category = Blackboard) 
		FBlackboardKeySelector TargetKey;
		UPROPERTY(EditAnywhere, Category = Blackboard) 
		FBlackboardKeySelector SineKey;
		UPROPERTY(EditAnywhere, Category = Blackboard) 
		FBlackboardKeySelector SpeedKey;

	private:
		virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

		void CircleTarget(AActor* AIActor, AActor* PlayerActor, UBehaviorTreeComponent& OwnerComp);

		void SwitchDirection();

		UPROPERTY(EditAnywhere, Category = Blackboard)
		float TimeToSwitchDir = 7.0f;

		float DirectionMode = 1.0f;

		bool bCanSwitchDirection = true;
};
