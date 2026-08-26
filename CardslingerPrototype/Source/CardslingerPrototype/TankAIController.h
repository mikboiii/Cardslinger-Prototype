// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseAIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class CARDSLINGERPROTOTYPE_API ATankAIController : public ABaseAIController
{
	GENERATED_BODY()

	virtual void BeginPlay() override;

	UBlackboardComponent* GetBlackboardComponent() const { return BlackboardComponent; }

};	
