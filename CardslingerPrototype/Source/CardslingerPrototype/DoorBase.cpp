#include "DoorBase.h"

ADoorBase::ADoorBase()
{
	PrimaryActorTick.bCanEverTick = false;
	
	DoorTrigger->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	DoorTrigger->SetGenerateOverlapEvents(true);
}