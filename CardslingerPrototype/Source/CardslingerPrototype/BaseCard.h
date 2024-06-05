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

	UPROPERTY(EditAnywhere)
	FString CardName;

	UPROPERTY(EditAnywhere)
	FString CardDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Instanced)
	UUserWidget* CardWidget;

	virtual void CardEffect(class ACardDeck* CardDeck, FVector Direction);
};
