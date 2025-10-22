#include "RoomManager.h"
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

	for (AActor* DoorActor : Doors)
	{
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
	if (bPlayerEnteredRoom) return; // Prevent multiple triggers

	AActor* TriggeredDoor = nullptr;
	for (AActor* DoorActor: Doors)
	{
		if (UBoxComponent* Trigger = DoorActor->FindComponentByClass<UBoxComponent>())
		{
			if (Trigger == OverlappedComp)
			{
				TriggeredDoor = DoorActor;
				break;
			}
		}
	}
	
	bPlayerEnteredRoom = true;
	OnRoomEntered.Broadcast(); // Event for Blueprints
	LockDoors();
	
	SpawnEnemies(TriggeredDoor);
}

void ARoomManager::LockDoors()
{
	for (AActor* Door : Doors)
	{
		if (Door)
			Door->Tags.AddUnique("Locked");
	}
}

void ARoomManager::UnlockDoors()
{
	for (AActor* Door : Doors)
	{
		if (Door)
			Door->Tags.Remove("Locked");
	}
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
		AActor* SpawnPoint = Config->SpawnPoints[i];
		if (!SpawnPoint) continue;

		FVector Location = SpawnPoint->GetActorLocation();
		FRotator Rotation = SpawnPoint->GetActorRotation();

		ABaseAIClass* Enemy = GetWorld()->SpawnActor<ABaseAIClass>(EnemyClass, Location, Rotation);
		if (Enemy)
		{
			ActiveEnemies.Add(Enemy);
			Enemy->OnEnemyDeath.AddDynamic(this, &ARoomManager::OnEnemyDeath);
		}
	}
	UE_LOG(LogTemp, Log, TEXT("Spawned %d enemies for door %s"), SpawnCount, *Door->GetName());
}

void ARoomManager::OnEnemyDeath(ABaseAIClass* DeadEnemy)
{
	UE_LOG(LogTemp, Log, TEXT("OnEnemyDeath, remove activeEnemy"));

	ActiveEnemies.Remove(DeadEnemy);

	if (ActiveEnemies.Num() == 0)
	{
		UnlockDoors();
		OnRoomCleared.Broadcast(); // Event for Blueprints
	}
}
