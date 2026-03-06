#include "RoomManager.h"
#include "SpawnPoint.h"
#include "Components/BoxComponent.h" 
#include "GameFramework/Actor.h"
#include "BaseAIClass.h"


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

	for (const FDoorSpawnConfig& Config : DoorSpawnConfigs)
	{
		const AActor* DoorActor = Config.Door;
		
		if (!DoorActor) continue;
		{
			UBoxComponent* Trigger = DoorActor->FindComponentByClass<UBoxComponent>();
			if (Trigger)
			{
				Trigger->OnComponentBeginOverlap.AddDynamic(this, &ARoomManager::OnPlayerEnterRoom);
				UE_LOG(LogTemp, Log, TEXT("Bound trigger box: %s"), *DoorActor->GetName());
			}
			else
			{
				UE_LOG(LogTemp, Log, TEXT("Door %s has no trigger box"), *DoorActor->GetName());
			}
		}
	}
}

void ARoomManager::OnPlayerEnterRoom(UPrimitiveComponent* OverlappedComp,AActor* OtherActor,UPrimitiveComponent* OtherComp,int32 OtherBodyIndex,bool bFromSweep,const FHitResult& SweepResult)
{
	if (!OtherActor->ActorHasTag("Player")) return; // Only trigger for player

	FDoorSpawnConfig* TriggeredDoorConfig = nullptr;

	// Find which door triggered
	for (FDoorSpawnConfig& Config : DoorSpawnConfigs)
	{
		if  (!Config.Door) continue;
		if (UBoxComponent* Trigger = Config.Door->FindComponentByClass<UBoxComponent>())
		{
			if (Trigger == OverlappedComp)
			{
				TriggeredDoorConfig = &Config;
				break;
			}
		}
	}

	// make sure trigger belongs to a door and that door is not null
	if (!TriggeredDoorConfig)
	{
		UE_LOG(LogTemp, Warning, TEXT("Triggered door not found for overlap!"));
		return;
	}

	// Prevent retriggering for the same door
	if (TriggeredDoorConfig->bPlayerEnteredRoom)
	{
		UE_LOG(LogTemp, Log, TEXT("Door %s already triggered"), *TriggeredDoorConfig->Door->GetName());
		return;
	}

	TriggeredDoorConfig->bPlayerEnteredRoom = true; // Set door config to stop multiple triggers
	
	OnDoorShouldClose.Broadcast(TriggeredDoorConfig->Door); // Event for Blueprints
	
	if (TriggeredDoorConfig->Door)
	{
		TriggeredDoorConfig->Door->Tags.AddUnique("Locked");
	}
	
	SpawnEnemies(TriggeredDoorConfig->Door);
}
//
// void ARoomManager::LockDoors(Con)
// {
// 	for (const FDoorSpawnConfig& Config : DoorSpawnConfigs)
// 	{
// 		if (Config.Door)
// 		{
// 			Config.Door->Tags.AddUnique("Locked");
// 			OnDoorShouldClose.Broadcast(Config.Door);
// 		}
// 	}
// }

void ARoomManager::SpawnEnemies(AActor* Door)
{
	// Find the DoorActor that triggered the overlap, so we spawn the correct enemies associated with that door
	const FDoorSpawnConfig* Config = nullptr;

	for (const FDoorSpawnConfig& Item : DoorSpawnConfigs)
	{
		if (Item.Door == Door)
		{
			Config = &Item;
			break;
		}
	}

	if (!Config)
	{
		UE_LOG(LogTemp, Warning, TEXT("No spawn config for this door."));
		return;
	}

	// Make sure enemies and spawnpoints have been assigned
	if (!EnemyClass || Config->SpawnPoints.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("Missing enemy class or spawn points."));
		return;
	}

	// Get the SpawnCount from the door config, ensure enemies only spawn up to the amount of SpawnPoints
	int32 SpawnCount = FMath::Min(Config->NumEnemiesToSpawn, Config->SpawnPoints.Num());
	
	// // Copy SpawnPoints, then shuffle it
	
	// TArray<AActor*> ShuffledPoints = SpawnPoints;
	// // Swap each element with a random position
	// for (int32 i = 0; i < ShuffledPoints.Num(); i++)
	// {
	// 	int32 SwapIndex = FMath::RandRange(0, SpawnPoints.Num() - 1); 
	// 	ShuffledPoints.Swap(i, SwapIndex);
	// }

	for (int32 i = 0; i < SpawnCount; i++)
	{
		ASpawnPoint* SpawnPoint = Config->SpawnPoints[i];
		if (!SpawnPoint) continue;

		FVector Location = SpawnPoint->GetActorLocation();
		FRotator Rotation = SpawnPoint->GetActorRotation();

		// Check if spawnpoint has assigned a specifc enemy to spawn 
		TSubclassOf<ABaseAIClass> ClassToSpawn;
		if (SpawnPoint->EnemyClass)
		{
			ClassToSpawn = SpawnPoint->EnemyClass;
		}
		else // use default
		{
			ClassToSpawn = EnemyClass;
		}

		if (!ClassToSpawn) continue;
		
		ABaseAIClass* Enemy = GetWorld()->SpawnActor<ABaseAIClass>(ClassToSpawn, Location, Rotation);
		if (Enemy)
		{
			FDoorSpawnConfig& SpawnConfig = *const_cast<FDoorSpawnConfig*>(Config);
			SpawnConfig.ActiveEnemies.Add(Enemy);
			Enemy->OnEnemyDeath.AddDynamic(this, &ARoomManager::OnEnemyDeath);
		}
	}
	UE_LOG(LogTemp, Log, TEXT("Spawned %d enemies for door %s"), SpawnCount, *Door->GetName());
}

void ARoomManager::OnEnemyDeath(ABaseAIClass* DeadEnemy)
{
	UE_LOG(LogTemp, Log, TEXT("OnEnemyDeath, remove activeEnemy"));

	//find which door has the enemy in the config
	for (FDoorSpawnConfig& Config : DoorSpawnConfigs)
	{
		if (Config.ActiveEnemies.Contains(DeadEnemy))
		{
			Config.ActiveEnemies.Remove(DeadEnemy);
			UE_LOG(LogTemp, Log, TEXT("Enemy from door %s died: Remaining enemies %d"), *Config.Door->GetName(), Config.ActiveEnemies.Num());

			if (Config.ActiveEnemies.Num() == 0 && Config.Door)
			{
				Config.Door->Tags.Remove("Locked");
				OnDoorShouldOpen.Broadcast(Config.Door); // Event for Blueprints
			}
			break;
		}
	}
	
	// ActiveEnemies.Remove(DeadEnemy);
	//
	// if (ActiveEnemies.Num() == 0)
	// {
	// 	UnlockDoors();
	// 	OnRoomCleared.Broadcast(); // Event for Blueprints
	// }
}
