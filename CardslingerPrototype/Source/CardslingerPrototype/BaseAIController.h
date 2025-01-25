// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
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
	bool IsDead() const;

	class UBehaviorTree* GetBehaviorTree();

protected:
	virtual void BeginPlay() override;

	APawn* PlayerPawn;


	UPROPERTY(EditAnywhere)
	float FollowRadius = 50.0f;
	UPROPERTY(EditAnywhere)
	class UBehaviorTree* AIBehavior;
};
