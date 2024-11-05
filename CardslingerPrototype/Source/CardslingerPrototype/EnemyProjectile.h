// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyProjectile.generated.h"

UCLASS()
class CARDSLINGERPROTOTYPE_API AEnemyProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemyProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetOwnerClass(class ABaseAIClass* NewOwner);

	void EnableSlowEffect(bool bIsSlow, float TimeDilationValue);

	void SetBulletSpeed(float NewSpeed);

private:
	UPROPERTY(Instanced, EditAnywhere)
	class UStaticMeshComponent* BulletMesh;
	UPROPERTY(Instanced, EditAnywhere)
	class UBoxComponent* BulletCollision;
	UPROPERTY(Instanced, EditAnywhere)
	class UNiagaraComponent* BulletTrail;

	UPROPERTY(EditAnywhere)
	class UNiagaraSystem* ImpactFX;

	AActor* PlayerPawn;

	class ABaseAIClass* OwnerAI;

	void DestroyProjectile();

	UPROPERTY(EditAnywhere, Category="Combat")
	float BulletLifetime = 100.0f;

	UPROPERTY(EditAnywhere, Category="Combat")
	float BaseBulletSpeed = 3000.0f;

	float BulletSpeed;

	UPROPERTY(EditAnywhere, Category="Combat")
	float BulletDamage = 10.0f;

	FTimerHandle BulletLifetimeManager;

	UFUNCTION()
	virtual void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);

	void DestroyProjectileTimerFunction();

};
