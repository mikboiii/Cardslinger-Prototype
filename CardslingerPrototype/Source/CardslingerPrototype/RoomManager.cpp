#include "RoomManager.h"

// Sets default values
ARoomManager::ARoomManager()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ARoomManager::BeginPlay()
{
	Super::BeginPlay();
}

void ARoomManager::OnPlayerEnterRoom(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!OtherActor->ActorHasTag("Player")) return; // Filter out non player tags

	bPlayerEnteredRoom = true;
	LockDoors();
}

void ARoomManager::LockDoors()
{
	for (AActor* Door : Doors)
	{
		if (Door)
		{
			Door->Tags.AddUnique("Locked"); // Event that will close the door
		}
	}
}

void ARoomManager::UnlockDoors()
{
	for (AActor* Door : Doors)
	{
		if (Door)
		{
			Door->Tags.Remove("Locked"); // Event that will open the door
		}
	}
}

void ARoomManager::SpawnEnemies()
{
}

void ARoomManager::OnEnemyDeath(ABaseAIClass* DeadEnemy)
{
}
