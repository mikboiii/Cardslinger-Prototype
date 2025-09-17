#include "RoomManager.h"
#include "Components/BoxComponent.h" 
#include "GameFramework/Actor.h"

// Sets default values
ARoomManager::ARoomManager()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	UE_LOG(LogTemp, Warning, TEXT("RoomManager constructor called!"));
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
}

void ARoomManager::OnEnemyDeath(ABaseAIClass* DeadEnemy)
{
}
