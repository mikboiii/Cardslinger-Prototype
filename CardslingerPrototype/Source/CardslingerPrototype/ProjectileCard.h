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

	
	void SetHomingTarget(FVector Target);

	void SetHomingTarget(FVector Target, AActor* TargetActor);

	void SetBoneTarget(FName BoneName);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void DestroyCard();
	//timer handle to handle card decay
	FTimerHandle CardLifetimeManager;
	//the amount of time (in seconds) that a card will last for before naturally deleting itself
	UPROPERTY(EditAnywhere)
	float CardLifetime = 100.0f;
	//the multiplier applied to the scale of the particle hit effect
	UPROPERTY(EditAnywhere)
	float ParticleScale = 1.0f;

	UFUNCTION()
	virtual void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
	//the card's collider
	UPROPERTY(Instanced,EditAnywhere)
	class UBoxComponent* CardCollision;
	//the card's trail particle system
	UPROPERTY(Instanced, EditAnywhere)
	class UNiagaraComponent* CardTrail;
	//the card's particle impact system
	UPROPERTY(EditAnywhere)
	class UNiagaraSystem* CardImpact;
	//the card's velocity
	UPROPERTY(EditAnywhere)
	float CardSpeed;

	UPROPERTY(Instanced, EditAnywhere)
	class USkeletalMeshComponent* CardSkeletalMesh;
	UPROPERTY(EditAnywhere)
	float CardVelocity = 20.0f;
	UPROPERTY(EditAnywhere)
	float CardDamage = 10.0f;

	//target location of the card
	UPROPERTY()
	FVector TargetLocation;
	//mid point of the curve
	UPROPERTY()
	FVector MidPoint;
	//curve point of the curve
	UPROPERTY()
	FVector CurvedPoint;
	//the width of the card's flight path
	UPROPERTY(EditAnywhere, Category="Projectile Flight")
	float MinCurveRadius = 40.0f;
	UPROPERTY(EditAnywhere, Category="Projectile Flight")
	float MaxCurveRadius = 400.0f;
	//the distance of the widest point in the card flight path from the starting position
	//longer = flatter curve
	UPROPERTY(EditAnywhere, Category="Projectile Flight")
	float MinCurvePointDistance = 0.2f;
	UPROPERTY(EditAnywhere, Category="Projectile Flight")
	float MaxCurvePointDistance = 0.8f;
	//the min and max angle of the card's initial trajectory
	UPROPERTY(EditAnywhere, Category="Projectile Flight")
	float MinAngle = 0.0f;
	UPROPERTY(EditAnywhere, Category="Projectile Flight")
	float MaxAngle = 360.0f;
	//determines if the card is homing or not
	UPROPERTY(EditAnywhere, Category="Projectile Flight")
	bool IsHoming;
	UPROPERTY(EditAnywhere, Category="Combat")
	float EnergyOnDamage = 0.1f;

	UPROPERTY(EditAnywhere)
	bool DestroyOnImpact;

	//AActor reference to the target enemy
	AActor* TargetEnemy;

	class ABaseCharacterClass* PlayerPawn;

	bool bIsAttached = false;

	FName BoneTarget = NAME_None;

	UFUNCTION()
	void CalculateMidPoint();
	UFUNCTION()
	void CalculateCurveControlPoint();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
