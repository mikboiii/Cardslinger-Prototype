#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "DoorBase.generated.h"

UCLASS()
class CARDSLINGERPROTOTYPE_API ADoorBase : public AActor
{
	GENERATED_BODY()

public:
	ADoorBase();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UBoxComponent> DoorTrigger;

	UFUNCTION(BlueprintImplementableEvent)
	void OpenDoor();

	UFUNCTION(BlueprintImplementableEvent)
	void CloseDoor();
};


