// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCharacterClass.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "Components/InputComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "ExplosionTestCard.h"
#include "DrawDebugHelpers.h"
#include "Engine/DamageEvents.h"
#include "Engine/World.h"
#include "Math/UnrealMathUtility.h"
#include "Components/SceneComponent.h"
#include "TimerManager.h"
#include "BaseCard.h"
#include "CardDeck.h"
#include "ProjectileCard.h"

// Sets default values
ABaseCharacterClass::ABaseCharacterClass()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CardDeckLocation = CreateDefaultSubobject<USceneComponent>(TEXT("CardLocation"));
	CardDeckLocation->SetupAttachment(RootComponent);


}

// Called when the game starts or when spawned
void ABaseCharacterClass::BeginPlay()
{
	Super::BeginPlay();
	if(CardTemplate!=nullptr)
	{
	CardHand.Init(GetWorld()->SpawnActor<ABaseCard>(CardTemplate), 4);
	}
	CardHand[0] = GetWorld()->SpawnActor<AExplosionTestCard>(AExplosionTestCard::StaticClass());
	CurrentClip = MaxClip;
	if(CardDeckClass != nullptr && CardDeckLocation != nullptr)
	{
	CardDeck = GetWorld()->SpawnActor<ACardDeck>(CardDeckClass);
	CardDeck->AttachToComponent(CardDeckLocation, FAttachmentTransformRules::KeepRelativeTransform);
	}
	// for(int i = 0; i < 4; i++)
	// {

	// }
	
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
		EnhancedInputComponent->BindAction(CardAction, ETriggerEvent::Triggered, this, &ABaseCharacterClass::UseCard);
		EnhancedInputComponent->BindAction(ReloadAction, ETriggerEvent::Triggered, this, &ABaseCharacterClass::Reload);
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

void ABaseCharacterClass::UseCard(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Display, TEXT("Value: %f"),Value.Get<float>()-1);
	if(CardHand[FMath::Floor(Value.Get<float>())-1] == nullptr) return;
	CardHand[FMath::Floor(Value.Get<float>())-1]->CardEffect(CardDeck);
	
}
/// @brief Get good scrub
void ABaseCharacterClass::Shoot()
{
	if(CurrentClip > 0)
	{
		FHitResult Hit;
		FVector ShotDirection;
		//AController* OwnerController = GetOwnerController();
		//if(OwnerController == nullptr) return;
		CurrentClip--;
		if(HitTrace(Hit, ShotDirection))
		{
			UE_LOG(LogTemp, Display, TEXT("Trace Called"));
			FPointDamageEvent DamageEvent(Damage, Hit, ShotDirection, nullptr);
			//DrawDebugSphere(GetWorld(), Hit.ImpactPoint, 100.0f, 16, FColor::Red, true, 10000.0f);
			AActor* HitActor = Hit.GetActor();
			if(HitActor == nullptr) return;
			HitActor->TakeDamage(Damage, DamageEvent, GetController(), this);
		}
		CardDeck->FireCard(-ShotDirection, BasicCardProjectile);
		CardDeck->RemoveCardFromDeck(CurrentClip);
	}
}

bool ABaseCharacterClass::HitTrace(FHitResult& Hit, FVector& ShotDirection)
{
	FVector ViewLocation;
	FRotator ViewRotation;
	//AController* OwnerController = GetOwnerController();
	//if(OwnerController == nullptr) return false;
	GetController()->GetPlayerViewPoint(ViewLocation, ViewRotation);
	ShotDirection = -ViewRotation.Vector();
	FVector End = ViewLocation + ViewRotation.Vector() * MaxRange;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);
	Params.AddIgnoredActor(GetOwner());
	return GetWorld()->LineTraceSingleByChannel(Hit, ViewLocation, End, ECollisionChannel::ECC_GameTraceChannel1, Params);
}

AController* ABaseCharacterClass::GetOwnerController() const
{
	UE_LOG(LogTemp, Display, TEXT("Controller Called"));
	APawn* OwnerPawn = Cast<APawn>(GetOwner());
	if(OwnerPawn == nullptr) return nullptr;
	UE_LOG(LogTemp, Display, TEXT("Controller returned"));
	return OwnerPawn->GetController();
}

void ABaseCharacterClass::Reload()
{
	if(CanReload && CurrentClip != MaxClip)
	{
	CanReload = false;
	GetWorldTimerManager().SetTimer(ReloadTimeManager, this, &ABaseCharacterClass::ReloadTimerFunction, ReloadDelay);
	CardDeck->ShuffleDeck();
	}
}

void ABaseCharacterClass::ReloadTimerFunction()
{
	CanReload = true;
	CurrentClip = MaxClip;
}

ACardDeck* ABaseCharacterClass::GetDeck() const
{
	return CardDeck;
}
