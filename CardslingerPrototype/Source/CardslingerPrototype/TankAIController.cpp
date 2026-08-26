// Fill out your copyright notice in the Description page of Project Settings.


#include "TankAIController.h"
#include "CoreMinimal.h"
#include "AIController.h"
#include "BaseAIController.h"
#include "BaseCharacterClass.h"


void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	if(AIBehavior != nullptr)
	{
		RunBehaviorTree(AIBehavior);
		if(GetPawn()) 
		{
			GetBlackboardComponent()->SetValueAsObject(TEXT("PlayerActor"), Cast<ABaseCharacterClass>(PlayerPawn));
		}
	}

}
