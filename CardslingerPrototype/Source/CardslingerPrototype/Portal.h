// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Portal.generated.h"

UCLASS()
class CARDSLINGERPROTOTYPE_API APortal : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APortal();

	UPROPERTY(Instanced, EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* PortalPlane;
	UPROPERTY(Instanced, EditAnywhere, BlueprintReadWrite)
	class USceneCaptureComponent2D* PortalCam;
	class USceneComponent* Origin;
	UPROPERTY(Instanced, EditAnywhere, BlueprintReadWrite)
	class UBoxComponent* PlayerCollision;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	class UMaterial* portalMat;
	UPROPERTY(EditAnywhere)
	class UMaterialInstanceDynamic* portalViewMat;
	UPROPERTY(EditAnywhere)
	class UTextureRenderTarget2D* portalRenderTarget;
	UPROPERTY(EditAnywhere)
	APortal* TwinnedPortal;
	void UpdatePortalView();

	FVector MirrorByNormal(FVector outInput);

	AActor* PlayerActor;
	
	void SetClipPlanes();

	void TeleportCheck();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	class USceneCaptureComponent2D* GetPortalCam();

};
