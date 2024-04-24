// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseCharacterClass.generated.h"

class UInputMappingContext;
class UInputAction;
struct FInputActionValue;
class ABaseCard;

UCLASS()
class CARDSLINGERPROTOTYPE_API ABaseCharacterClass : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCharacterClass();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputMappingContext* InputMapping;
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* MoveAction;
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* LookAction;
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* JumpAction;
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* ShootAction;
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* CardAction;
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* ReloadAction;

	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);
	void UseCard(const FInputActionValue& Value);

	void Shoot();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	UFUNCTION(BlueprintPure)
	ACardDeck* GetDeck() const;

private:

	UPROPERTY(EditAnywhere)
	float Speed = 10.f;
	
	UPROPERTY(VisibleAnywhere, Category = "Combat")
	float Health;

	UPROPERTY(EditDefaultsOnly, Category = "Combat")
	float MaxHealth = 100.0f;

	UPROPERTY(EditAnywhere, Category = "Combat")
	float MaxRange = 1000.0f;

	UPROPERTY(EditAnywhere, Category = "Combat")
	float Damage = 10.0f;

	UPROPERTY(EditAnywhere, Category = "Combat")
	int16 MaxClip = 52;

	UPROPERTY(VisibleAnywhere, Category = "Combat")
	int16 CurrentClip;

	UPROPERTY(EditDefaultsOnly, Category="Combat")
	float ReloadDelay = 5.0f;

//temporary card deck array -> card deck will be its own object
	UPROPERTY(EditAnywhere)
	TSubclassOf<class ACardDeck> CardDeckClass;
	UPROPERTY(EditAnywhere)
	class ACardDeck* CardDeck;
	UPROPERTY(VisibleAnywhere)
	TArray<ABaseCard*> CardHand;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ABaseCard> CardTemplate;

	AController* GetOwnerController() const;

	bool HitTrace(FHitResult& Hit, FVector& ShotDirection);
	
	FTimerHandle ReloadTimeManager;

	void ReloadTimerFunction();

	void Reload();
	UPROPERTY(VisibleAnywhere, Category="Combat")
	bool CanReload = true;

	UPROPERTY(Instanced, EditAnywhere)
	class USceneComponent* CardDeckLocation;
};
