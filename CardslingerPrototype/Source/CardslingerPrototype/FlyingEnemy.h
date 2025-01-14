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

	AFlyingAIController* ThisController;

	virtual void Shoot() override;

	virtual void ShootMultiple() override;

	virtual bool HitTrace(FHitResult& Hit, FVector& ShotDirection) override;

	float RunTime = 0.0f;

public:
	virtual void Tick(float DeltaTime) override;

private:
	bool bCanShoot = true;

	void ResetShooting();
	
};
