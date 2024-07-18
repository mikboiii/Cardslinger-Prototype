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
	float HealthPerSegment = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat")
	int32 AmountOfHealthSegments = 10;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat")
	int32 AmountOfEnergySegments = 3;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat")
	float EnergyPerSegment = 1.0f;

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
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* ZoomAction;
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* DashAction;
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* FlyAction;

	void Move(const FInputActionValue& Value);
	void FlyUp(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);
	void UseCard(const FInputActionValue& Value);
	void Zoom(const FInputActionValue& Value);

	void Shoot();

	void ShootMultiple();

	UFUNCTION()
	void Dash();

	UFUNCTION()
	void DashEndFunction();

	UFUNCTION()
	void UpdateDash(float Value);

	void DashCooldownFunction();

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
	UFUNCTION(BlueprintCallable)
	void IncrementClip();

	void SetFlyMode(bool bIsFlying);


	void Heal(bool IsPercentile, float HealingAmount);

	void AddShield(bool IsPercentile, float ShieldValue);
	
	void GiveEnergy(float EnergyValue);

	UFUNCTION(BlueprintPure)
	float GetHealthPercent() const;
	UFUNCTION(BlueprintPure)
	float GetEnergyPercent() const;
	UFUNCTION(BlueprintPure)
	float GetHealth() const;
	UFUNCTION(BlueprintPure)
	float GetEnergy() const;
	UFUNCTION(BlueprintPure)
	float GetShield() const;
	UFUNCTION(BlueprintPure)
	int32 GetClip() const;
	UFUNCTION(BlueprintPure)
	int32 GetMaxClip() const;
	UFUNCTION(BlueprintPure)
	int32 GetChargedCards();
	UFUNCTION(BlueprintPure)
	void GetCardCharge(float &OutCurrentCharge, float &OutMaxCharge);
	UFUNCTION(BlueprintPure)
	float GetDashRecharge();

private:

	UPROPERTY(EditAnywhere, Category = "Movement")
	float BaseSpeed = 10.0f;

	bool bIsCharacterFlying = false;

	float Speed = 10.f;
	
	float CameraLeanValue = 0.0f;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float MaxCameraLeanValue = 25.0f;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float CameraRotateSpeed = 1.0f;

	void LeanCamera(float DeltaTime);

	UPROPERTY(EditAnywhere, Category = "Movement")
	float DashSpeed = 50.0f;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float DashDistance = 300.0f;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float DashDuration = 0.3f;
	
	UPROPERTY(EditAnywhere, Category = "Movement")
	float DashCooldown = 5.0f;

	float DashRecharge = 0.0f;

	UPROPERTY(EditAnywhere, Category = "Movement")
    UCurveFloat* DashCurve;

	bool bIsDashing = false;

	FVector DashStartLocation;
	FVector DashEndLocation;

	
	UPROPERTY(VisibleAnywhere, Category = "Combat")
	float Health;

	UPROPERTY(EditDefaultsOnly, Category = "Combat")
	float MaxHealth = 100.0f;

	float MaxShield;
	UPROPERTY(VisibleAnywhere, Category = "Combat")
	float CurrentShield;

	UPROPERTY(EditAnywhere, Category = "Combat")
	float MaxRange = 1000.0f;

	UPROPERTY(EditAnywhere, Category = "Combat", meta=(EditCondition="bIsStaggeredFiring"))
	int32 CardsPerShot = 3;

	UPROPERTY(EditAnywhere, Category = "Combat")
	int32 MaxClip = 52;

	UPROPERTY(VisibleAnywhere, Category = "Combat")
	int32 CurrentClip;

	//UPROPERTY(EditDefaultsOnly, Category="Combat")
	//float ReloadDelay = 5.0f;

	UPROPERTY(EditDefaultsOnly, Category="Combat")
	float FireDelay = 0.1f;

	UPROPERTY(EditDefaultsOnly, Category="Combat", meta=(EditCondition="bIsStaggeredFiring"))
	float StaggerDelay = 0.05f;

	UPROPERTY(EditDefaultsOnly, Category = "Combat")
	bool bIsStaggeredFiring;

	UPROPERTY(Instanced, EditAnywhere)
    class UTimelineComponent* DashTimeline;

	UPROPERTY(EditDefaultsOnly, Category="Combat")
	float MaxEnergy = 3.0f;

	bool CanFire = false;

	UPROPERTY(EditDefaultsOnly, Category="Combat")
	float EnergyMinimum = 1.0f;

	UPROPERTY(EditDefaultsOnly, Category="Combat")
	float EnergyRegenRate = 0.1f;

	UPROPERTY(EditDefaultsOnly, Category="Combat")
	bool InfiniteEnergy = false;

	float CurrentEnergy;

	UPROPERTY(EditDefaultsOnly, Category="Combat")
	float CardChargeRate = 0.1f;

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

	FTimerHandle AutoFireManager;

	void ReloadTimerFunction();

	void FireCooldown();

	void Reload();
	UPROPERTY(VisibleAnywhere, Category="Combat")
	bool CanReload = true;

	bool bIsChargeMode = false;

	bool bCanDash = true;

	float ChargeForOneCard = 1.0f;

	UPROPERTY(VisibleAnywhere, Category="Combat")
	int32 CardsCharged;
	UPROPERTY(EditAnywhere, Category="Combat")
	int32 MaxCardsCharged = 7;
	UPROPERTY(VisibleAnywhere, Category="Combat")
	float CardCharge = 0.0f;

	UPROPERTY(Instanced, EditAnywhere)
	class USceneComponent* CardDeckLocation;

	UPROPERTY(Instanced, EditAnywhere)
	class UCameraComponent* CameraComponent;

	UPROPERTY(EditAnywhere, Instanced)
	class USpringArmComponent* SpringArm2;

	void DrawCardTimerFunction(int CardIndex);

	void ReplenishHandFunction();
};
