// Fill out your copyright notice in the Description page of Project Settings.


/*
Deck object stores special cards for the game
TODO:
Serialise/Deserialise saved decks
*/
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CardDeck.generated.h"

class ABaseCard;

UCLASS()
class CARDSLINGERPROTOTYPE_API ACardDeck : public AActor
{
	GENERATED_BODY()
	
private:
	// Sets default values for this actor's properties
	ACardDeck();

	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<ABaseCard>> DrawPile;

	UPROPERTY(VisibleAnywhere)
	TArray<TSubclassOf<ABaseCard>> DiscardPile;


	UPROPERTY(EditAnywhere, Category = "Card Types")
	TSubclassOf<class AProjectileCard> ProjectileCardClass;

	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	ABaseCard* DrawCard();

	void ShuffleDiscard();

	UFUNCTION(BlueprintCallable)
	void ShuffleDeck();

	AProjectileCard* FireCard(FVector Direction, TSubclassOf<class AProjectileCard> CardClass, TWeakObjectPtr<USceneComponent> Target);

	UFUNCTION(BlueprintPure)
	bool IsDeckEmpty() const;

	UFUNCTION(BlueprintImplementableEvent)
	void RemoveCardFromDeck(int CardIndex);
};
