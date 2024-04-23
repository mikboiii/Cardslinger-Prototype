// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCard.h"
#include "BaseCardInheritanceTest.generated.h"

/**
 * 
 */
UCLASS()
class CARDSLINGERPROTOTYPE_API ABaseCardInheritanceTest : public ABaseCard
{
	GENERATED_BODY()
	public:
	ABaseCardInheritanceTest();

	private:
	virtual void CardEffect() override;
};
