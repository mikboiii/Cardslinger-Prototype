#include "RoomManager.h"
#include "SpawnPoint.h"
#include "Components/BoxComponent.h" 
#include "GameFramework/Actor.h"
#include "BaseAIClass.h"
#include "DoorBase.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ARoomManager::ARoomManager()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
}

// Called when the game starts or when spawned
void ARoomManager::BeginPlay()
{
	Super::BeginPlay();

	for (FDoorSpawnConfig& Config : DoorSpawnConfigs)
	{
		if (!Config.Door) continue;

		UBoxComponent* Trigger = Config.Door->DoorTrigger;

		if (Trigger)
		{
			Trigger->OnComponentBeginOverlap.AddDynamic(this,&ARoomManager::OnPlayerEnterRoom);
			UE_LOG(LogTemp, Log, TEXT("Bound trigger for %s"),*Config.Door->GetName());
		}
	}
}

void ARoomManager::OnPlayerEnterRoom(
	UPrimitiveComponent* OverlappedComp,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("Overlap detected by RoomManager"));
	
	
	FDoorSpawnConfig* TriggeredDoorConfig = nullptr;

	// Find which door triggered
	for (FDoorSpawnConfig& Config : DoorSpawnConfigs)
	{
		if (Config.Door && Config.Door->DoorTrigger == OverlappedComp)
		{
			TriggeredDoorConfig = &Config;
			UE_LOG(LogTemp, Warning, TEXT("Door name is: %s"), *TriggeredDoorConfig->Door->GetName());
			break;
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

	// Stop door trigger from firing multiple times
	TriggeredDoorConfig->Door->DoorTrigger->SetGenerateOverlapEvents(false);
	TriggeredDoorConfig->bPlayerEnteredRoom = true; // Set door config to stop multiple triggers

	UE_LOG(LogTemp, Warning, TEXT("Broadcasting Door Close for %s"), *TriggeredDoorConfig->Door->GetName());
	TriggeredDoorConfig->Door->CloseDoor();
	
	if (TriggeredDoorConfig->Door)
	{
		TriggeredDoorConfig->Door->Tags.AddUnique("Locked");
	}
	
	SpawnEnemies(TriggeredDoorConfig->Door);
}

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
	for (FDoorSpawnConfig& Config : DoorSpawnConfigs)
	{
		if (Config.ActiveEnemies.Contains(DeadEnemy))
		{
			Config.ActiveEnemies.Remove(DeadEnemy);

			if (Config.ActiveEnemies.Num() == 0 && Config.Door)
			{
				Config.Door->Tags.Remove("Locked");
				Config.Door->OpenDoor();
			}

			break;
		}
	}
}
