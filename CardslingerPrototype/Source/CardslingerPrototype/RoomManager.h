#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h" 
#include "RoomManager.generated.h"

class ABaseAIClass;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDoorOverlap);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRoomEntered);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRoomCleared);

UCLASS()
class CARDSLINGERPROTOTYPE_API ARoomManager : public AActor
{
	GENERATED_BODY()

public:
	// Expose events to Blueprints
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnDoorOverlap OnDoorOverlap;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnRoomEntered OnRoomEntered;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnRoomCleared OnRoomCleared;

	UPROPERTY(EditAnywhere)
	TArray<ABaseAIClass*> ActiveEnemies;

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

	void SpawnEnemies();

	UFUNCTION()
	void OnEnemyDeath(ABaseAIClass* DeadEnemy);


	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Room")
	AActor* Door;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Room")
	UBoxComponent* DoorTrigger;   // assign an Actor with a BoxComponent

	UPROPERTY(EditAnywhere, Category = "Room")
	TArray<AActor*> SpawnPoints;

	UPROPERTY(EditAnywhere, Category = "Room")
	TSubclassOf<ABaseAIClass> EnemyClass;

	UPROPERTY(EditAnywhere, Category = "Room")
	int32 NumEnemiesToSpawn = 3;

	UPROPERTY(EditAnywhere, Category = "Room")
	bool bPreSpawned = false;

	UPROPERTY(EditAnywhere, Category = "Room")
	bool bPlayerEnteredRoom;
};