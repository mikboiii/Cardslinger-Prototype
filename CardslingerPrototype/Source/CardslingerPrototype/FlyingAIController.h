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

protected:
		virtual void InitializeBlackboardValues() override;

		UPROPERTY(EditAnywhere, Category="AI")
		float HoverDistFromPlayer = 1000.0f;
};
