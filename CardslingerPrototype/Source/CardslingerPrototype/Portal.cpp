// Fill out your copyright notice in the Description page of Project Settings.


#include "Portal.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneCaptureComponent2D.h"

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
	
}

// Called every frame
void APortal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

