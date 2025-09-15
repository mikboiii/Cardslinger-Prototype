#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RoomManager.generated.h"

class ABaseAIClass; // Enemies
class AActor; // Doors
class UBoxComponent; // Trigger to close doors

UCLASS()
class CARDSLINGERPROTOTYPE_API ARoomManager : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ARoomManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void LockDoors();
	void UnlockDoors();

	void SpawnEnemies();
	void OnEnemyDeath(ABaseAIClass* DeadEnemy);

	UPROPERTY(EditAnywhere, Category = "Room")
	UBoxComponent* TriggerVolume;

	UPROPERTY(EditAnywhere, Category = "Room")
	TArray<AActor*> Doors;

	UPROPERTY(EditAnywhere, Category = "Room")
	TArray<AActor*> SpawnPoints;

	UPROPERTY(EditAnywhere, Category = "Room")
	TSubclassOf<ABaseAIClass> EnemyClass;

	UPROPERTY(EditAnywhere, Category = "Room")
	int32 NumEnemiesToSpawn = 3;

	UPROPERTY(EditAnywhere, Category = "Room")
	bool bPreSpawned = false;

private:
	TArray<ABaseAIClass*> ActiveEnemies;
};