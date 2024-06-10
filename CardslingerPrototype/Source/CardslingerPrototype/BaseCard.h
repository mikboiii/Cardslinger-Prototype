// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Containers/UnrealString.h"
#include "Engine/Texture2D.h"
#include "Styling/SlateTypes.h"
#include "BaseCard.generated.h"

UCLASS()
class CARDSLINGERPROTOTYPE_API ABaseCard : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseCard();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//The name of the card
	UPROPERTY(EditAnywhere)
	FString CardName;
	//the description of what the card does
	UPROPERTY(EditAnywhere)
	FString CardDescription;
	//determines if the card is homing
	UPROPERTY(EditAnywhere)
	bool bIsHoming = false;
	//stores the widget of the card's ui design
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Instanced)
	UUserWidget* CardWidget;

	virtual void CardEffect(class ACardDeck* CardDeck, FVector Direction, FVector Target, AActor* TargetActor);
};
