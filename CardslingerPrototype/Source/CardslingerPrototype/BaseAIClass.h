// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseAIClass.generated.h"

UCLASS()
class CARDSLINGERPROTOTYPE_API ABaseAIClass : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseAIClass();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	float TakeDamage(float DamageAmount, struct FDamageEvent const &DamageEvent, class AController *EventInstigator, AActor* DamageCauser) override;

	UFUNCTION(BlueprintPure)
	bool IsDead() const;

	UFUNCTION(BlueprintPure)
	float GetHealthPercent() const;

	void Shoot();

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
	
	bool HitTrace(FHitResult& Hit, FVector& ShotDirection);
};
