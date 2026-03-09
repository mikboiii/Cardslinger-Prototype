#include "DoorBase.h"
#include "Components/BoxComponent.h"

ADoorBase::ADoorBase()
{
	PrimaryActorTick.bCanEverTick = false;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	DoorTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("DoorTrigger"));
	DoorTrigger->SetupAttachment(RootComponent);

	DoorTrigger->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	DoorTrigger->SetGenerateOverlapEvents(true);
}