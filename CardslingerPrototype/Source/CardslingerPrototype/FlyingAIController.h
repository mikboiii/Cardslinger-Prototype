// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "FlyingAIController.generated.h"

/**
 * 
 */
UCLASS()
class CARDSLINGERPROTOTYPE_API AFlyingAIController : public AAIController
{
	GENERATED_BODY()
	
	public:
		virtual void Tick(float DeltaSeconds) override;
		bool IsDead() const;

		class UBehaviorTree* GetBehaviorTree();

	protected:
		virtual void BeginPlay() override;

	private:
		APawn* PlayerPawn;


		UPROPERTY(EditAnywhere)
		float HoverDistFromPlayer = 1000.0f;
		UPROPERTY(EditAnywhere)
		class UBehaviorTree* AIBehavior;
};
