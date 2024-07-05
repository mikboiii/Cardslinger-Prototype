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

	UPROPERTY(EditAnywhere, Category="Deck Settings")
	TArray<TSubclassOf<ABaseCard>> FullDeck;

	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<ABaseCard>> DrawPile;

	UPROPERTY(VisibleAnywhere)
	TArray<TSubclassOf<ABaseCard>> DiscardPile;


	UPROPERTY(EditAnywhere, Category = "Card Types")
	TSubclassOf<class AProjectileCard> ProjectileCardClass;

	UPROPERTY(EditAnywhere, Category = "Card Types")
	class USkeletalMesh* CardSkeletalMeshTemplate;

	class ABaseCharacterClass* Player;
	
	FTimerHandle ReloadHandle;
	UPROPERTY(EditAnywhere)
	float ReloadDelayPerCard = 0.05f;

	UPROPERTY(EditAnywhere, Category = "Card Types")
    TSubclassOf<class UAnimInstance> CardAnimationBlueprint;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FString SavePath;

	TArray<USkeletalMeshComponent*> CardMeshArray;

	UPROPERTY(EditAnywhere)
	USkeletalMeshComponent* CardSkeletalMesh;

	void SpawnCard();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	ABaseCard* DrawCard();

	void ShuffleDiscard();

	float GetTimeToReload();

	UFUNCTION(BlueprintCallable)
	void ShuffleDeck();

	AProjectileCard* FireCard(FVector Direction, TSubclassOf<class AProjectileCard> CardClass, FVector Target, AActor* TargetActor);

	UFUNCTION(BlueprintPure)
	bool IsDeckEmpty() const;
	UFUNCTION(BlueprintPure)
	int32 DrawCardNum() const;

	void RemoveCardFromDeck(int CardIndex);

	void ReloadCards();
	UFUNCTION(BlueprintCallable)
	void SaveDeck(const FString& SavePath);
	UFUNCTION(BlueprintCallable, CallInEditor, Category="Deck Settings")
	void ManualSaveDeck();
	UFUNCTION(BlueprintCallable)
	TArray<TSubclassOf<ABaseCard>> LoadDeck(const FString& SavePath);

	UFUNCTION(BlueprintCallable)
	void AddCard(TSubclassOf<ABaseCard> CardToAdd, bool bAddToDiscard, bool bIsTemporaryCard);
	UFUNCTION(BlueprintCallable)
	void RemoveCard(TSubclassOf<ABaseCard> CardToRemove, bool bIsPermanent);
	UFUNCTION(BlueprintCallable)
	void RemoveCardAtIndex(int32 Index, bool bIsPermanent);
};
