// Fill out your copyright notice in the Description page of Project Settings.


#include "Portal.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Materials/MaterialInstance.h"
#include "Materials/Material.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
APortal::APortal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PortalPlane = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Portal Plane"));
	SetRootComponent(PortalPlane);
	PortalCam = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("Portal Camera"));

}

// Called when the game starts or when spawned
void APortal::BeginPlay()
{
	Super::BeginPlay();
	SetTickGroup(TG_PostUpdateWork);
	portalViewMat = UMaterialInstanceDynamic::Create(portalMat, portalViewMat);
	PortalPlane->SetMaterial(0, portalViewMat);
	int32 viewportX;
	int32 viewportY;
	UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetViewportSize(viewportX, viewportY);
	portalRenderTarget = UKismetRenderingLibrary::CreateRenderTarget2D(GetWorld(), viewportX, viewportY);
	portalMat->SetTextureParameterValueEditorOnly(TEXT("CamInput"), portalRenderTarget);
	
}

// Called every frame
void APortal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

