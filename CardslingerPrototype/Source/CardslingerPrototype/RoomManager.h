#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnPoint.h"
#include "RoomManager.generated.h"

class ABaseAIClass;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBoxTriggerEntered);

// Per door events
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDoorOpen, AActor*, Door);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDoorClose, AActor*, Door);

USTRUCT(BlueprintType)
struct FDoorSpawnConfig
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<class ADoorBase> Door = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TObjectPtr<ASpawnPoint>> SpawnPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NumEnemiesToSpawn = 3;

	UPROPERTY()
	TArray<TObjectPtr<ABaseAIClass>> ActiveEnemies;

	UPROPERTY()
	bool bPlayerEnteredRoom = false;
};

UCLASS()
class CARDSLINGERPROTOTYPE_API ARoomManager : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnBoxTriggerEntered OnBoxTriggerEntered;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnDoorOpen OnDoorShouldOpen;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnDoorClose OnDoorShouldClose;

protected:
	ARoomManager();

	virtual void BeginPlay() override;

	UFUNCTION()
	void OnPlayerEnterRoom(UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);

	void LockDoors();
	void UnlockDoors();

	void SpawnEnemies(AActor* Doors);

	UFUNCTION()
	void OnEnemyDeath(ABaseAIClass* DeadEnemy);
	
	// Spawn configuration array
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Room")
	TArray<FDoorSpawnConfig> DoorSpawnConfigs;
	
	// UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Room")
	// TArray<UBoxComponent*> DoorTriggers; 

	UPROPERTY(EditAnywhere, Category = "Room")
	TSubclassOf<ABaseAIClass> EnemyClass;
};