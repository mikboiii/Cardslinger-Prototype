// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseAIClass.h"
#include "FlyingEnemy.generated.h"

/*
 * 
 */
UCLASS()
class CARDSLINGERPROTOTYPE_API AFlyingEnemy : public ABaseAIClass
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	
};
