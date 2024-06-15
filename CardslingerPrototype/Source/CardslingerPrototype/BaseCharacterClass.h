// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseCharacterClass.generated.h"

class UInputMappingContext;
class UInputAction;
struct FInputActionValue;
class ABaseCard;
class UProgressBar;
class UUWidget;
UCLASS()
class CARDSLINGERPROTOTYPE_API ABaseCharacterClass : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCharacterClass();
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat")
	float HealthPerSegment;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat")
	int32 AmountOfSegments;

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

	float TakeDamage(float DamageAmount, struct FDamageEvent const &DamageEvent, class AController *EventInstigator, AActor* DamageCauser) override;
	UFUNCTION(BlueprintPure)
	ACardDeck* GetDeck() const;
	UFUNCTION(BlueprintPure)
	bool IsHandEmpty() const;
	UFUNCTION(BlueprintPure)
	bool IsDead() const;

	void Heal(bool IsPercentile, float HealingAmount);
	
	void GiveEnergy(float EnergyValue);

	UFUNCTION(BlueprintPure)
	float GetHealthPercent() const;
	UFUNCTION(BlueprintPure)
	float GetEnergyPercent() const;
	UFUNCTION(BlueprintPure)

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

	UPROPERTY(EditDefaultsOnly, Category="Combat")
	float MaxEnergy = 3.0f;

	UPROPERTY(EditDefaultsOnly, Category="Combat")
	float EnergyMinimum = 1.0f;

	UPROPERTY(EditDefaultsOnly, Category="Combat")
	float EnergyRegenRate = 0.1f;

	UPROPERTY(EditDefaultsOnly, Category="Combat")
	bool InfiniteEnergy = false;

	float CurrentEnergy;

	UPROPERTY()
	UUserWidget* PlayerHUD;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UUserWidget> CardBackClass;

	UPROPERTY(EditDefaultsOnly, Category="Combat")
	float CardCooldownDelay = 4.0f;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class ACardDeck> CardDeckClass;
	UPROPERTY(EditAnywhere)
	class ACardDeck* CardDeck;
	UPROPERTY(VisibleAnywhere)
	TArray<ABaseCard*> CardHand;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ABaseCard> CardTemplate;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class ABaseCard> CardToTest;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class AProjectileCard> BasicCardProjectile;

	AController* GetOwnerController() const;

	bool HitTrace(FHitResult& Hit, FVector& ShotDirection);

	
	FTimerHandle ReloadTimeManager;
	//FTimerHandle DrawCardTimeManager;

	void ReloadTimerFunction();

	void Reload();
	UPROPERTY(VisibleAnywhere, Category="Combat")
	bool CanReload = true;

	UPROPERTY(Instanced, EditAnywhere)
	class USceneComponent* CardDeckLocation;

	UPROPERTY(Instanced, EditAnywhere)
	class UCameraComponent* CameraComponent;

	UPROPERTY(EditAnywhere, Instanced)
	class USpringArmComponent* SpringArm2;

	void DrawCardTimerFunction(int CardIndex);


	void ReplenishHandFunction();
};
