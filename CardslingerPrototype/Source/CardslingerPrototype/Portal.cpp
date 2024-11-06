// Fill out your copyright notice in the Description page of Project Settings.


#include "Portal.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SceneComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Materials/MaterialInstance.h"
#include "Materials/Material.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
APortal::APortal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Origin = CreateDefaultSubobject<USceneComponent>(TEXT("Origin"));
	PortalPlane = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Portal Plane"));
	SetRootComponent(Origin);
	PortalPlane->SetupAttachment(Origin);
	PortalCam = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("Portal Camera"));
	PortalCam->SetupAttachment(Origin);

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
	TwinnedPortal->GetPortalCam()->TextureTarget = portalRenderTarget;
	SetClipPlanes();
}

// Called every frame
void APortal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UpdatePortalView();
}

USceneCaptureComponent2D* APortal::GetPortalCam()
{
	return PortalCam;
}

void APortal::UpdatePortalView()
{
	FVector portalPos;
	FRotator portalRot;
	FVector portalScale;
	UKismetMathLibrary::BreakTransform(GetActorTransform(), portalPos, portalRot, portalScale);
	portalScale *= FVector(-1.0f,-1.0f, 1.0f);	
	FTransform newTransform = UKismetMathLibrary::MakeTransform(portalPos, portalRot, portalScale);
	FVector playerCamTransform = UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0)->GetCameraLocation();
	FVector playerCamInversePos = UKismetMathLibrary::InverseTransformLocation(newTransform, playerCamTransform);
	FVector twinnedPortalCamLocation = UKismetMathLibrary::TransformLocation(TwinnedPortal->GetActorTransform(), playerCamInversePos);
	//TwinnedPortal->GetPortalCam()->SetWorldLocation(twinnedPortalCamLocation);

	//FRotator playerCamRot = UGameplayStatics::GetPlayerCameraManager(GetWorld(),0)->GetCameraRotation();
	FRotator playerCamRot = UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0)->GetCameraRotation();
	FVector XVector;
	FVector YVector;
	FVector ZVector;
	UKismetMathLibrary::BreakRotIntoAxes(playerCamRot, XVector, YVector, ZVector);
	MirrorByNormal(XVector);
	MirrorByNormal(YVector);
	MirrorByNormal(ZVector);
	FRotator twinnedPortalCamRotation = UKismetMathLibrary::MakeRotationFromAxes(XVector, YVector, ZVector);
	//TwinnedPortal->GetPortalCam()->SetWorldRotation(UKismetMathLibrary::MakeRotationFromAxes(XVector, YVector, ZVector));
	TwinnedPortal->GetPortalCam()->SetWorldLocationAndRotation(twinnedPortalCamLocation, twinnedPortalCamRotation);

}

void APortal::MirrorByNormal(FVector& outInput)	
{
	FVector inverseInput = UKismetMathLibrary::InverseTransformDirection(GetActorTransform(), outInput);
	inverseInput = UKismetMathLibrary::MirrorVectorByNormal(inverseInput, FVector(1.0f, 0.0f, 0.0f));
	inverseInput = UKismetMathLibrary::MirrorVectorByNormal(inverseInput, FVector(0.0f, 1.0f, 0.0f));
	outInput = UKismetMathLibrary::TransformDirection(TwinnedPortal->GetActorTransform(), inverseInput);
}

void APortal::SetClipPlanes()
{
	if(TwinnedPortal)
	{
		PortalCam->bEnableClipPlane = true;
		FVector PlaneLoc = PortalPlane->GetComponentLocation();
		FVector PortalForwardVector = GetActorForwardVector();
		PortalForwardVector *= -3;
		PortalCam->ClipPlaneBase = PlaneLoc + PortalForwardVector;
		PortalCam->ClipPlaneNormal = GetActorForwardVector();
	}
}

