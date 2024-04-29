// Fill out your copyright notice in the Description page of Project Settings.

/* Projectile Card Class
Needs to store particle effects and sounds
Needs to trigger different effects depending on the card which spawned it
Needs to be flexible and spawnable in the world
*/

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProjectileCard.generated.h"

UCLASS()
class CARDSLINGERPROTOTYPE_API AProjectileCard : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectileCard();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void DestroyCard();

	FTimerHandle CardLifetimeManager;

	UPROPERTY(EditAnywhere)
	float CardLifetime = 100.0f;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
