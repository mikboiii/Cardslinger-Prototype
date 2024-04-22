// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCharacterClass.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "Components/InputComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Components/CapsuleComponent.h"

// Sets default values
ABaseCharacterClass::ABaseCharacterClass()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseCharacterClass::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseCharacterClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseCharacterClass::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    // Get the player controller
    APlayerController* PC = Cast<APlayerController>(GetController());
 
    // Get the local player subsystem
    UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer());
    // Clear out existing mapping, and add our mapping
    Subsystem->ClearAllMappings();
    Subsystem->AddMappingContext(InputMapping, 0);

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
    {
        // Moving
        EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ABaseCharacterClass::Move);
        EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ABaseCharacterClass::Look);
        EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ACharacter::Jump);
        EnhancedInputComponent->BindAction(ShootAction, ETriggerEvent::Triggered, this, &ABaseCharacterClass::Shoot);
        //EnhancedInputComponent->BindAction(RotateAction, ETriggerEvent::Triggered, this, &ATank::Rotate);
    }
}

void ABaseCharacterClass::Move(const FInputActionValue& Value)
{
	// Get the axis value from the input action value
    float Forward = Value.Get<FVector2D>().Y; // Replace "AxisName" with the name of your input axis
	float Right = Value.Get<FVector2D>().X;

    FVector DeltaLocation = FVector::ZeroVector;
    DeltaLocation.X += Forward * UGameplayStatics::GetWorldDeltaSeconds(this) * Speed;
	DeltaLocation.Y += Right * UGameplayStatics::GetWorldDeltaSeconds(this) * Speed;
    AddMovementInput(GetActorForwardVector() * Forward);
    AddMovementInput(GetActorRightVector() * Right);
}

void ABaseCharacterClass::Look(const FInputActionValue& Value)
{
    AddControllerPitchInput(Value.Get<FVector2D>().Y);
    AddControllerYawInput(Value.Get<FVector2D>().X);
}

void ABaseCharacterClass::Shoot()
{

}
