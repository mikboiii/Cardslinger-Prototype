// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BaseAIController.generated.h"

/**
 * 
 */
UCLASS()
class CARDSLINGERPROTOTYPE_API ABaseAIController : public AAIController
{
	GENERATED_BODY()

public:
	virtual void Tick(float DeltaSeconds) override;
	virtual void OnPossess(APawn* InPawn) override;
	bool IsDead() const;
	

	UBehaviorTree* GetBehaviorTree();

protected:
	virtual void BeginPlay() override;

	// Blackboard stuff
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AI")
	UBehaviorTree* AIBehavior;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI")
	UBlackboardComponent* BlackboardComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI")
	UBehaviorTreeComponent* BehaviorTreeComponent;

	UPROPERTY()
	APawn* PlayerPawn;

	UPROPERTY(EditAnywhere)
	float FollowRadius = 50.0f;

};
