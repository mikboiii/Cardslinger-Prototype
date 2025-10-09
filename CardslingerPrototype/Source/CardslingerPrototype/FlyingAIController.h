// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BaseAIController.h"
#include "FlyingAIController.generated.h"


/**
 * 
 */
UCLASS()
class CARDSLINGERPROTOTYPE_API AFlyingAIController : public ABaseAIController
{
	GENERATED_BODY()

	public:
		UBlackboardComponent* GetBlackboardComponent() const { return BlackboardComponent; }
	
	protected:
		virtual void BeginPlay() override;

		UPROPERTY(EditAnywhere)
		float HoverDistFromPlayer = 1000.0f;
};
