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

	
	UFUNCTION()
	void SetHomingTarget(FVector Target);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void DestroyCard();

	FTimerHandle CardLifetimeManager;

	UPROPERTY(EditAnywhere)
	float CardLifetime = 100.0f;

	UPROPERTY(EditAnywhere)
	float ParticleScale = 1.0f;

	UFUNCTION()
	virtual void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);

	UPROPERTY(Instanced,EditAnywhere)
	class UBoxComponent* CardCollision;

	UPROPERTY(Instanced, EditAnywhere)
	class UNiagaraComponent* CardTrail;

	UPROPERTY(EditAnywhere)
	class UNiagaraSystem* CardImpact;

	UPROPERTY(Instanced, EditAnywhere)
	class UProjectileMovementComponent* CardProjectile;

	UPROPERTY(Instanced, EditAnywhere)
	class USkeletalMeshComponent* CardSkeletalMesh;
	UPROPERTY(EditAnywhere)
	float CardVelocity = 20.0f;
	UPROPERTY(EditAnywhere)
	float CardDamage = 10.0f;


	UPROPERTY(EditAnywhere, Category="Projectile Flight")
	FVector TargetLocation;
	UPROPERTY(EditAnywhere, Category="Projectile Flight")
	FVector MidPoint;
	UPROPERTY(EditAnywhere, Category="Projectile Flight")
	FVector CurvedPoint;

	UPROPERTY(EditAnywhere, Category="Projectile Flight")
	float MinCurveRadius = 40.0f;
	UPROPERTY(EditAnywhere, Category="Projectile Flight")
	float MaxCurveRadius = 400.0f;
	UPROPERTY(EditAnywhere, Category="Projectile Flight")
	float MinCurvePointDistance = 0.2f;
	UPROPERTY(EditAnywhere, Category="Projectile Flight")
	float MaxCurvePointDistance = 0.8f;
	UPROPERTY(EditAnywhere, Category="Projectile Flight")
	float MinAngle = 0.0f;
	UPROPERTY(EditAnywhere, Category="Projectile Flight")
	float MaxAngle = 360.0f;

	UFUNCTION()
	FVector CalculateMidPoint();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
