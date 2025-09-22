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

	if (Door)
	{
		DoorTrigger = Door->FindComponentByClass<UBoxComponent>();

		if (DoorTrigger)
		{
			DoorTrigger->OnComponentBeginOverlap.AddDynamic(this, &ARoomManager::OnPlayerEnterRoom);
			UE_LOG(LogTemp, Log, TEXT("Trigger box: %s"), *DoorTrigger->GetName());
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("TriggerBox is Null!"));
		}
	}
}

void ARoomManager::OnPlayerEnterRoom(UPrimitiveComponent* OverlappedComp,AActor* OtherActor,UPrimitiveComponent* OtherComp,int32 OtherBodyIndex,bool bFromSweep,const FHitResult& SweepResult)
{
	if (!OtherActor->ActorHasTag("Player")) return; // Filter out non player tags

	OnRoomEntered.Broadcast(); // Event for Blueprints
	bPlayerEnteredRoom = true;
	LockDoors();
}

void ARoomManager::LockDoors()
{
	//for (AActor* Door : Doors)
	//{
		if (Door)
		{
			UE_LOG(LogTemp, Log, TEXT("Lock Doors Bitch"));
			Door->Tags.AddUnique("Locked"); // Event that will close the door
		}
	//}
}

void ARoomManager::UnlockDoors()
{
	//for (AActor* Door : Doors)
	//{
		if (Door)
		{
			Door->Tags.Remove("Locked"); // Event that will open the door
		}
	//}
}

void ARoomManager::SpawnEnemies()
{
	if (!EnemyClass || SpawnPoints.Num() == 0) // Check enemy and spawn points have been set
	{
		UE_LOG(LogTemp, Log, TEXT("No enemies assigned OR no spawnpoints"));
		return;
	}

	for (int32 i = 0; i > NumEnemiesToSpawn; i++)
	{
		int32 Index = FMath::RandRange(0, SpawnPoints.Num() - 1);
		AActor* SpawnPoint = SpawnPoints[Index];
		if (!SpawnPoint) continue;

		FVector Location = SpawnPoint->GetActorLocation();
		FRotator Rotation = SpawnPoint->GetActorRotation();

		ABaseAIClass* SpawnedEnemy = GetWorld()->SpawnActor<ABaseAIClass>(EnemyClass, Location, Rotation);
		if (SpawnedEnemy)
		{
			ActiveEnemies.Add(SpawnedEnemy);
			SpawnedEnemy->OnEnemyDeath.AddDynamic(this, &ARoomManager::OnEnemyDeath);
		}
	}

}

void ARoomManager::OnEnemyDeath(ABaseAIClass* DeadEnemy)
{
	ActiveEnemies.Remove(DeadEnemy);

	if (ActiveEnemies.Num() == 0)
	{
		UnlockDoors();
		OnRoomCleared.Broadcast(); // Event for Blueprints
	}
}
