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

	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);
	void UseCard(const FInputActionValue& Value);

	void Shoot();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:

	UPROPERTY(EditAnywhere)
	float Speed = 10.f;
	
	UPROPERTY(VisibleAnywhere)
	float Health;

	UPROPERTY(EditDefaultsOnly)
	float MaxHealth = 100.0f;

	UPROPERTY(EditAnywhere)
	float MaxRange = 1000.0f;

	UPROPERTY(EditAnywhere)
	float Damage = 10.0f;

	TArray<ABaseCard*> CardDeck;
	UPROPERTY(VisibleAnywhere)
	TArray<ABaseCard*> CardHand;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ABaseCard> CardTemplate;

	AController* GetOwnerController() const;

	bool HitTrace(FHitResult& Hit, FVector& ShotDirection);
};
