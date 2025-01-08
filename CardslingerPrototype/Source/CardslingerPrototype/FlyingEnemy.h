// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseAIClass.h"
#include "FlyingEnemy.generated.h"

/*
 * 
 */
UCLASS()
class CARDSLINGERPROTOTYPE_API AFlyingEnemy : public ABaseAIClass
{
	GENERATED_BODY()

	AFlyingEnemy();

protected:
	virtual void BeginPlay() override;

	float TakeDamage(float DamageAmount, struct FDamageEvent const &DamageEvent, class AController *EventInstigator, AActor* DamageCauser) override;

	UPROPERTY(EditAnywhere, Instanced)
	UStaticMeshComponent* tempBody;

public:
	virtual void Tick(float DeltaTime) override;
	
};
