#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnPoint.generated.h"

UCLASS(BlueprintType)
class CARDSLINGERPROTOTYPE_API ASpawnPoint : public AActor
{
	GENERATED_BODY()
	
public:	
	ASpawnPoint();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<class ABaseAIClass> EnemyClass;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
