// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCharacterClass.h"
#include "GameFramework/SpringArmComponent.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "Components/InputComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Camera/CameraComponent.h"
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
#include "CardslingerTestGameMode.h"
#include "CardslingerPlayerController.h"
#include "Components/ProgressBar.h"
#include "Blueprint/UserWidget.h"
#include "PlayerHUDWidget.h"
#include "BaseAIClass.h"


// Sets default values
ABaseCharacterClass::ABaseCharacterClass()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//Generate blueprint components
	SpringArm2 = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	SpringArm2->SetupAttachment(GetCapsuleComponent());
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComponent->SetupAttachment(SpringArm2);
	CardDeckLocation = CreateDefaultSubobject<USceneComponent>(TEXT("CardLocation"));
	CardDeckLocation->SetupAttachment(CameraComponent);


}

// Called when the game starts or when spawned
void ABaseCharacterClass::BeginPlay()
{
	Super::BeginPlay();
	if(CardTemplate!=nullptr)
	{
		//init player hand
		CardHand.Init(nullptr, 4);
	}

	if(CardDeckClass != nullptr && CardDeckLocation != nullptr)
	{
		//spawn card deck in world
		CardDeck = GetWorld()->SpawnActor<ACardDeck>(CardDeckClass);
		CardDeck->AttachToComponent(CardDeckLocation, FAttachmentTransformRules::KeepRelativeTransform);
	}
	Reload();

	//init health
	Health = MaxHealth;

	ACardslingerPlayerController* PC = Cast<ACardslingerPlayerController>(GetController());
	//get pointer to player hud widget
	PlayerHUD = PC->GetHUD();
	
	//draw initial hands
	ReplenishHandFunction();
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
		//binds all input actions to functions in the player
        EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ABaseCharacterClass::Move);
        EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ABaseCharacterClass::Look);
        EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ACharacter::Jump);
        EnhancedInputComponent->BindAction(ShootAction, ETriggerEvent::Triggered, this, &ABaseCharacterClass::Shoot);
		EnhancedInputComponent->BindAction(CardAction, ETriggerEvent::Triggered, this, &ABaseCharacterClass::UseCard);
		EnhancedInputComponent->BindAction(ReloadAction, ETriggerEvent::Triggered, this, &ABaseCharacterClass::Reload);
    }
}

void ABaseCharacterClass::Move(const FInputActionValue& Value)
{
	// Get the axis value from the input action value
    float Forward = Value.Get<FVector2D>().Y;
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

/// @brief Function used to apply damage to the player and notify game mode in case of death
/// @param DamageAmount Incoming damage amount
/// @param DamageEvent Incoming damage event
/// @param EventInstigator Incoming damage controller
/// @param DamageCauser Actor causing the damage
/// @return Returns a damage applied float
float ABaseCharacterClass::TakeDamage(float DamageAmount, struct FDamageEvent const &DamageEvent, class AController *EventInstigator, AActor* DamageCauser)
{
    float DamageToApply = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, EventInstigator);
    Health -= DamageToApply;

    if(IsDead())
    {
		//prevent negative health values
        Health = 0.0f;
        ACardslingerTestGameMode* GameMode = GetWorld()->GetAuthGameMode<ACardslingerTestGameMode>();
        if(GameMode != nullptr)
        {
			//notify game mode that player is dead
            GameMode->PawnKilled(this);
        }
		//remove controller from player
        DetachFromControllerPendingDestroy();
		//disable collision
        GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    }
    return DamageToApply;
}

///@brief Uses the selected card's special effect and moves it to the discard pile
///@param Value This is the index of the selected card
void ABaseCharacterClass::UseCard(const FInputActionValue& Value)
{
	//enhanced input only allows floats, so value is floored and decremented to compensate for zero index
	int Index = FMath::Floor(Value.Get<float>())-1;
	if(!CardHand.IsValidIndex(Index)) return;
	if(CardHand[Index] == nullptr) return;
	Cast<UPlayerHUDWidget>(PlayerHUD)->RemoveCard(Index);
	//hit trace maintained in case specific card effects require hitscan
	FVector ShotDirection;
	FHitResult Hit;
	if(HitTrace(Hit, ShotDirection)) 
	{
		ShotDirection = CardDeck->GetActorLocation() - Hit.ImpactPoint;
		//if the hitscan finds an enemy actor, the card will have their details
		if(Hit.GetActor()->IsA(ABaseAIClass::StaticClass()))
		{
			CardHand[Index]->CardEffect(CardDeck, -ShotDirection, Hit.ImpactPoint, Hit.GetActor());
		}
		else
		{
			//Has shot direction reversed: shot direction originally made for hit events
			CardHand[Index]->CardEffect(CardDeck, -ShotDirection, Hit.ImpactPoint, nullptr);
		}
	}

	else
	{
		CardHand[Index]->CardEffect(CardDeck, -ShotDirection, Hit.ImpactPoint, nullptr);
	}
	//Sets the array index to nullptr to prevent array resizing
	CardHand[Index] = nullptr;
	//Creates a timer delegate to enable the use of parameters in timer function
	//index reserves spot in player hand
	FTimerDelegate CardCooldownDelegate = FTimerDelegate::CreateUObject(this, &ABaseCharacterClass::DrawCardTimerFunction, Index);
	//creates a new timer manager for each card to prevent timer overriding
	FTimerHandle DrawCardTimeManager;
	GetWorldTimerManager().SetTimer(DrawCardTimeManager, CardCooldownDelegate ,CardCooldownDelay, false);

	//if deck is empty, call function to replenish from discard pile and queue hand replenishing
	if(CardDeck->IsDeckEmpty() && IsHandEmpty())
	{
		GetWorldTimerManager().SetTimer(DrawCardTimeManager, this, &ABaseCharacterClass::ReplenishHandFunction, CardCooldownDelay);
	}
}


/// @brief Fires a single basic shot
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
			FPointDamageEvent DamageEvent(Damage, Hit, ShotDirection, nullptr);
			//gets pointer to the actor hit by the line trace
			AActor* HitActor = Hit.GetActor();
			if(HitActor == nullptr) return;
			ShotDirection = CardDeck->GetActorLocation() - Hit.ImpactPoint;
			//if the line trace hits an enemy actor, have the card home in on them
			if(Hit.GetActor()->IsA(ABaseAIClass::StaticClass()))
			{
				//launch basic projectile
				CardDeck->FireCard(-ShotDirection, BasicCardProjectile, Hit.ImpactPoint, Hit.GetActor());
				//remove from deck
				CardDeck->RemoveCardFromDeck(CurrentClip);
				return;
			}
		}
		//launch basic projectile
		CardDeck->FireCard(-ShotDirection, BasicCardProjectile, Hit.ImpactPoint, nullptr);
		//remove from deck
		CardDeck->RemoveCardFromDeck(CurrentClip);
	}
}

///@brief Creates line trace between shot origin and end point
///@param Hit Out FHitResult parameter
///@param ShotDirection The direction for the line trace
bool ABaseCharacterClass::HitTrace(FHitResult& Hit, FVector& ShotDirection)
{
	FVector ViewLocation;
	FRotator ViewRotation;
	//gets position of player eyes
	GetController()->GetPlayerViewPoint(ViewLocation, ViewRotation);
	//Determines the end FVector of the linetrace
	FVector End = ViewLocation + ViewRotation.Vector() * MaxRange;
	//Shot firection for aiming the card's velocity
	ShotDirection = -ViewRotation.Vector();
	//creates parameter list for the line trace
	FCollisionQueryParams Params;
	//ignores specific actors so the projectiles don't collide with them
	Params.AddIgnoredActor(this);
	Params.AddIgnoredActor(GetOwner());
	Params.AddIgnoredActors(CardDeck->Children);
	return GetWorld()->LineTraceSingleByChannel(Hit, ViewLocation, End, ECollisionChannel::ECC_GameTraceChannel1, Params);
}

/// @brief Gets player controller
/// @return returns player controller
AController* ABaseCharacterClass::GetOwnerController() const
{
	APawn* OwnerPawn = Cast<APawn>(GetOwner());
	if(OwnerPawn == nullptr) return nullptr;
	return OwnerPawn->GetController();
}

/// @brief Starts the reload function for the primary weapon
void ABaseCharacterClass::Reload()
{
	if(CanReload && CurrentClip != MaxClip)
	{
	CanReload = false;
	//Starts timer for when weapon restores ammo and re-enables reloading
	GetWorldTimerManager().SetTimer(ReloadTimeManager, this, &ABaseCharacterClass::ReloadTimerFunction, ReloadDelay);
	CardDeck->ShuffleDeck();
	}
}

/// @brief Restores ammo and enables reloading. For use only with timer functions
void ABaseCharacterClass::ReloadTimerFunction()
{
	CanReload = true;
	CurrentClip = MaxClip;
}

///@brief Returns the CardDeck object that the player is using
ACardDeck* ABaseCharacterClass::GetDeck() const
{
	return CardDeck;
}

///@brief Checks if the player's hand is empty
bool ABaseCharacterClass::IsHandEmpty() const
{
	for(int i = 0; i < CardHand.Num(); i++)
	{
		if(CardHand[i] != nullptr) return false;
	}
	return true;
}

/// @brief Draws a card from the deck at the given index in the player's hand. For use only with timer functions
/// @param CardIndex This is the index in the hand where the card will be drawn
void ABaseCharacterClass::DrawCardTimerFunction(int CardIndex)
{
	if(CardDeck->IsDeckEmpty())
	{
		//CardHand[CardIndex] = nullptr;
	}
	else
	{
		CardHand[CardIndex] = CardDeck->DrawCard();
		Cast<UPlayerHUDWidget>(PlayerHUD)->SetCard(CardIndex, CardHand[CardIndex]->CardWidget);
	}
}

///@brief Draws a card for each index in the hand
void ABaseCharacterClass::ReplenishHandFunction()
{
	if(CardDeck->IsDeckEmpty()) CardDeck->ShuffleDiscard();
	for(int i = 0; i < CardHand.Num(); i++)
	{
		CardHand[i] = CardDeck->DrawCard();
		if(CardHand[i]->CardWidget != nullptr)
		{
			Cast<UPlayerHUDWidget>(PlayerHUD)->SetCard(i, CardHand[i]->CardWidget);
		}
	}
}

///@brief Returns alive state of the player
bool ABaseCharacterClass::IsDead() const
{
	return Health <= 0.0f;
}

/// @brief Heals the player
/// @param IsPercentile changes whether the HealingValue parameter is a percentile healing amount
/// @param HealingValue the amount of healing delivered
void ABaseCharacterClass::Heal(bool IsPercentile, float HealingValue)
{
	if(IsPercentile) Health += MaxHealth * HealingValue;
	else Health += HealingValue;
	if(Health > MaxHealth) Health = MaxHealth;
}

/// @brief blueprint pure function to return the remaning health percentage of the player
/// @return the remaining percentage of health the character is left on 
float ABaseCharacterClass::GetHealthPercent() const
{
	return Health/MaxHealth;
}
