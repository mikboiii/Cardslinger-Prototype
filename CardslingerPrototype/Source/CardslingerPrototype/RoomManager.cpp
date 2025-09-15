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

void ARoomManager::LockDoors()
{
}

void ARoomManager::UnlockDoors()
{
}

void ARoomManager::SpawnEnemies()
{
}

void ARoomManager::OnEnemyDeath(ABaseAIClass* DeadEnemy)
{
}
