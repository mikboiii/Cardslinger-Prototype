// Fill out your copyright notice in the Description page of Project Settings.


#include "Portal.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"
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
	PlayerCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Player Collider"));
	PlayerCollision->SetupAttachment(Origin);

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
	PlayerActor = Cast<AActor>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
}

// Called every frame
void APortal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UpdatePortalView();
	TeleportCheck();
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
	portalScale.X *= -1.0f;
	portalScale.Y *= -1.0f;
	//portalScale.Z *= -1.0f;
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
	FRotator twinnedPortalCamRotation = UKismetMathLibrary::MakeRotationFromAxes(MirrorByNormal(XVector), MirrorByNormal(YVector), MirrorByNormal(ZVector));
	//TwinnedPortal->GetPortalCam()->SetWorldRotation(UKismetMathLibrary::MakeRotationFromAxes(XVector, YVector, ZVector));
	TwinnedPortal->GetPortalCam()->SetWorldLocationAndRotation(twinnedPortalCamLocation, twinnedPortalCamRotation);

}

FVector APortal::MirrorByNormal(FVector outInput)	
{
	FVector inverseInput = UKismetMathLibrary::InverseTransformDirection(GetActorTransform(), outInput);
	inverseInput = UKismetMathLibrary::MirrorVectorByNormal(inverseInput, FVector(1.0f, 0.0f, 0.0f));
	inverseInput = UKismetMathLibrary::MirrorVectorByNormal(inverseInput, FVector(0.0f, 1.0f, 0.0f));
	return UKismetMathLibrary::TransformDirection(TwinnedPortal->GetActorTransform(), inverseInput);
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

void APortal::TeleportCheck()
{
	TArray<AActor*> ActorsInPortal;
	PlayerCollision->GetOverlappingActors(ActorsInPortal);
	if(ActorsInPortal.Contains(PlayerActor))
	{
		if(PlayerDotCheck(UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0)->GetCameraLocation(), GetActorLocation(), GetActorForwardVector()))
		{
			TeleportPlayer();
		}
	}
}

bool APortal::PlayerDotCheck(FVector CurrentPos, FVector PortalPos, FVector PortalNormal)
{
	bool bIsCrossing = false;
	bool bIsPlayerInFront = false; 
	if(FVector::DotProduct(PortalNormal, (CurrentPos - PortalPos)) >= 0.0f) bIsPlayerInFront = true;
	FPlane TempPlane = UKismetMathLibrary::MakePlaneFromPointAndNormal(PortalPos, PortalNormal);
	float TempFloat;
	FVector TempVec;
	bool bIsIntersect = UKismetMathLibrary::LinePlaneIntersection(LastPos, CurrentPos, TempPlane, TempFloat, TempVec);
	bIsCrossing = (!bIsPlayerInFront && bIsIntersect && bIsLastInFront);
	bIsLastInFront = bIsPlayerInFront;
	LastPos = CurrentPos;

	return bIsCrossing;
}

void APortal::TeleportPlayer()
{
	FTransform PortalTransform = GetActorTransform();
	PortalTransform.SetScale3D(PortalTransform.GetScale3D() * FVector(-1,-1,1));
	FVector InverseLoc = UKismetMathLibrary::InverseTransformLocation(PortalTransform, PlayerActor->GetActorLocation());
	FVector NewPlayerLocation = UKismetMathLibrary::TransformLocation(TwinnedPortal->GetActorTransform(), InverseLoc);
	PlayerActor->SetActorLocation(NewPlayerLocation);

	FRotator PlayerRotation = PlayerActor->GetActorRotation();
	FVector XVector;
	FVector YVector;
	FVector ZVector;
	UKismetMathLibrary::BreakRotIntoAxes(PlayerRotation, XVector, YVector, ZVector);
	FRotator NewPlayerRotation = UKismetMathLibrary::MakeRotationFromAxes(MirrorByNormal(XVector), MirrorByNormal(YVector), MirrorByNormal(ZVector));
	PlayerActor->SetActorRotation(NewPlayerRotation);

	PlayerRotation = UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetControlRotation();
	UKismetMathLibrary::BreakRotIntoAxes(PlayerRotation, XVector, YVector, ZVector);
	NewPlayerRotation = UKismetMathLibrary::MakeRotationFromAxes(MirrorByNormal(XVector), MirrorByNormal(YVector), MirrorByNormal(ZVector));
	UGameplayStatics::GetPlayerController(GetWorld(), 0)->SetControlRotation(NewPlayerRotation);
}

