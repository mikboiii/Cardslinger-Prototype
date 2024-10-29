// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCharacterClass.h"
#include "GameFramework/SpringArmComponent.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "Components/InputComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
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
#include "Components/TimelineComponent.h"
#include "Curves/CurveFloat.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "NiagaraComponent.h"
#include "Camera/CameraShakeBase.h"
#include "Camera/CameraShakeSourceComponent.h"


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
	DashTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("DashTimeline"));
	DashSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("EmitterSpringArm"));
	DashSpringArm->SetupAttachment(CameraComponent);
	DashEmitter = CreateDefaultSubobject<UNiagaraComponent>(TEXT("DashEmitter"));
	DashEmitter->SetupAttachment(DashSpringArm);
	PlayerCameraShakeSource = CreateDefaultSubobject<UCameraShakeSourceComponent>(TEXT("CharacterCameraShakeSource"));
	PlayerCameraShakeSource->SetupAttachment(CameraComponent);

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

	MaxHealth = AmountOfHealthSegments * HealthPerSegment;
	//init health
	Health = MaxHealth;

	MaxShield = MaxHealth;

	CurrentShield = 0.0f;

	CurrentEnergy = MaxEnergy;

	Speed = BaseSpeed;

	MaxEnergy = AmountOfEnergySegments * EnergyPerSegment;

	DashRecharge = 1.0f;

	PC = Cast<ACardslingerPlayerController>(GetController());
	//get pointer to player hud widget
	PlayerHUD = Cast<UPlayerHUDWidget>(PC->GetHUD());
	
	//draw initial hands
	ReplenishHandFunction();

	if(DashCurve)
	{
		FOnTimelineFloat ProgressFunction;
		ProgressFunction.BindUFunction(this, FName("UpdateDash"));
		DashTimeline->AddInterpFloat(DashCurve, ProgressFunction);

		FOnTimelineEvent FinishFunction;
		FinishFunction.BindUFunction(this, FName("DashEndFunction"));
		DashTimeline->SetTimelineFinishedFunc(FinishFunction);

		DashTimeline->SetPlayRate(1.0f / DashDuration);
	}
}

// Called every frame
void ABaseCharacterClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//tick until energy reaches minimum
	if(CurrentEnergy < EnergyMinimum)
	{
		CurrentEnergy+= (EnergyRegenRate) * DeltaTime;
	}
	//tick dash recharge
	DashRecharge += DeltaTime / DashCooldown;
	if(DashRecharge > 1) DashRecharge = 1.0f;

	//lean camera (mainly input deltatime)
	LeanCamera(DeltaTime);

}

// Called to bind functionality to input
void ABaseCharacterClass::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
 	ACardslingerPlayerController* PlayerController = Cast<ACardslingerPlayerController>(GetController());
    // Get the local player subsystem
    UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());
    // Clear out existing mapping, and add our mapping
    Subsystem->ClearAllMappings();
    Subsystem->AddMappingContext(InputMapping, 0);

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
    {
		//binds all input actions to functions in the player
        EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ABaseCharacterClass::Move);
        EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ABaseCharacterClass::Look);
        EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(FlyAction, ETriggerEvent::Triggered, this, &ABaseCharacterClass::FlyUp);
        EnhancedInputComponent->BindAction(ShootAction, ETriggerEvent::Triggered, this, &ABaseCharacterClass::ShootMultiple);
		EnhancedInputComponent->BindAction(CardAction, ETriggerEvent::Triggered, this, &ABaseCharacterClass::UseCard);
		EnhancedInputComponent->BindAction(ReloadAction, ETriggerEvent::Triggered, this, &ABaseCharacterClass::Reload);
		EnhancedInputComponent->BindAction(ZoomAction, ETriggerEvent::Triggered, this, &ABaseCharacterClass::Zoom);
		EnhancedInputComponent->BindAction(DashAction, ETriggerEvent::Triggered, this, &ABaseCharacterClass::Dash);
		EnhancedInputComponent->BindAction(PauseAction, ETriggerEvent::Triggered, this, &ABaseCharacterClass::Pause);
    }
}

void ABaseCharacterClass::FlyUp(const FInputActionValue& Value)
{
	if(bIsCharacterFlying)
	{
		AddMovementInput(GetActorUpVector() * Speed * Value.Get<float>());
	}
}


void ABaseCharacterClass::Move(const FInputActionValue& Value)
{
	// Get the axis value from the input action value
    float Forward = Value.Get<FVector2D>().Y;
	float Right = Value.Get<FVector2D>().X;

    FVector DeltaLocation = FVector::ZeroVector;
	//move character based on input direction
    DeltaLocation.X += Forward * UGameplayStatics::GetWorldDeltaSeconds(this) * Speed;
	DeltaLocation.Y += Right * UGameplayStatics::GetWorldDeltaSeconds(this) * Speed;
	AddMovementInput(GetActorForwardVector() * Forward);
	AddMovementInput(GetActorRightVector() * Right);

	//lean camera if lateral movement
	if(Right > 0) CameraLeanValue = MaxCameraLeanValue;
	else if(Right < 0) CameraLeanValue = -MaxCameraLeanValue;
	else CameraLeanValue = 0;
}

void ABaseCharacterClass::Look(const FInputActionValue& Value)
{
    AddControllerPitchInput(Value.Get<FVector2D>().Y);
    AddControllerYawInput(Value.Get<FVector2D>().X);
}

void ABaseCharacterClass::Pause(const FInputActionValue& Value)
{
	PC->PauseLevel();	
}

/// @brief Very quickly displaces the character in the direction of their input
void ABaseCharacterClass::Dash()
{
	//do nothing if dashing is impossible or if the curve does not exist (error catch)
	if((bIsDashing || !bCanDash) || !DashCurve) return;
	bIsDashing = true;
	bCanDash = false;

	//Get player input vector to determine direction
	FVector DashDirection = GetLastMovementInputVector().GetSafeNormal2D();
	DashStartLocation = GetActorLocation();
	//calculate dash end location based on dash parameters
	DashEndLocation = DashStartLocation + DashDirection * DashDistance;
	FTimerHandle DashCooldownHandle;
	//start dash cooldown timer
	GetWorldTimerManager().SetTimer(DashCooldownHandle, this, &ABaseCharacterClass::DashCooldownFunction, DashCooldown);
	DashRecharge = 0.0f;
	//start dash timeline
	DashTimeline->PlayFromStart();
	//reverse dash direction (to make it go in the actual direction)
	DashDirection *= -1;
	//set dash spring arm in the same direction as the dash
	DashSpringArm->SetWorldRotation(DashDirection.Rotation());
	//play the dash effect (speed lines)
	DashEmitter->Activate();
	//play camera shake
	if(DashShake) PlayerCameraShakeSource->StartCameraShake(DashShake);
	//Set player velocity to the same as the dash (to maintain momentum)
	GetMovementComponent()->Velocity = DashDirection * -DashSpeed;
}

/// @brief Indicate that the dash timeline has finished
void ABaseCharacterClass::DashEndFunction()
{
	bIsDashing = false;
}

/// @brief Function to move player along the dash
/// @param Value The position on the timeline curve (to determine how far along the curve the dash has progressed)
void ABaseCharacterClass::UpdateDash(float Value)
{
	//interpolate the player position based on dash completeness
	FVector NewLocation = FMath::Lerp(DashStartLocation, DashEndLocation, Value);
	//set player location
	SetActorLocation(NewLocation, true);
}

void ABaseCharacterClass::DashCooldownFunction()
{
	bCanDash = true;
}

/// @brief Function used to apply damage to the player and notify game mode in case of death
/// @param DamageAmount Incoming damage amount
/// @param DamageEvent Incoming damage event
/// @param EventInstigator Incoming damage controller
/// @param DamageCauser Actor causing the damage
/// @return Returns a damage applied float
float ABaseCharacterClass::TakeDamage(float DamageAmount, struct FDamageEvent const &DamageEvent, class AController *EventInstigator, AActor* DamageCauser)
{
	//call unreal base damage function
    float DamageToApply = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, EventInstigator);
	//if shield health exists, apply damage there first
	if(CurrentShield > 0)
	{
		//reduce shield hp
		CurrentShield -= DamageToApply;
		//flash shield damage effect
		PlayerHUD->FlashShieldVignetteBP();
		//if shield destroy, apply overflow damage to player
		if(CurrentShield < 0)
		{
			//reduce player hp by shield overflow
			Health -= FMath::Abs(CurrentShield);
			//set shield hp to 0
			CurrentShield = 0;
			//flash damage effect
			PlayerHUD->FlashDamageVignetteBP();
		}
	}
	else
	{
		//reduce health
    	Health -= DamageToApply;
		//flash damage effect
		PlayerHUD->FlashDamageVignetteBP();
	}

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
	//error catching
	if(!CardHand.IsValidIndex(Index)) return;
	if(CardHand[Index] == nullptr) return;
	//checks if sufficient energy to use card
	if(CurrentEnergy < CardHand[Index]->GetCardCost() && !InfiniteEnergy)
	{
		return;
	}

	else
	{
		if(!InfiniteEnergy) CurrentEnergy -= CardHand[Index]->GetCardCost();
		PlayerHUD->RemoveCard(Index);
		if(CardBackClass) PlayerHUD->SetCard(Index, CreateWidget<UUserWidget>(GetWorld(), CardBackClass));
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
			//gets pointer to the actor hit by the line trace
			AActor* HitActor = Hit.GetActor();
			if(HitActor == nullptr) return;
			ShotDirection = CardDeck->GetActorLocation() - Hit.ImpactPoint;
			//if the line trace hits an enemy actor, have the card home in on them
			if(Hit.GetActor()->IsA(ABaseAIClass::StaticClass()))
			{
				//get skeletal mesh from target
				USkeletalMeshComponent* TargetMesh = Cast<USkeletalMeshComponent>(Cast<ABaseAIClass>(HitActor)->GetMesh());
				//create empty fvector to store bone location
				FVector* BoneLocation = new FVector(0.0f,0.0f,0.0f);
				//find bone closest to linetrace impact point
				FName BoneName = TargetMesh->FindClosestBone(Hit.ImpactPoint, BoneLocation, 0.0f, true);
				//launch basic projectile
				CardDeck->FireCard(-ShotDirection, BasicCardProjectile, Hit.ImpactPoint, Hit.GetActor(), BoneName);
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

/// @brief Handles all shooting parameters and calls Shoot() as needed
void ABaseCharacterClass::ShootMultiple()
{
	if(CanFire)
	{
		//creates temporary fire delay variable to account for time between last shot fired and the first shot of the next volley
		float TempFireDelay = FireDelay;
		//creates int of the number of cards to fire
		int32 CardsToFire {CardsPerShot};
		//spool cards if charge mode is enabled (only works when staggered firing is enabled)
		if(bIsChargeMode)
		{
			//do nothing if no cards charged
			if(CardsCharged < 1) return;
			//set number of card to fire to the amount spooled
			CardsToFire = CardsCharged;
			//reset values
			CardsCharged = 0;
			CardCharge = 0.0f;
		}
		//if cards are set to staggered (fire in order) then start firing sequence
		if(bIsStaggeredFiring)
		{
			//cannot fire when cards are shooting
			CanFire = false;
			for(int32 i = 0; i <= CardsToFire; i++)
			{
				FTimerHandle StaggerFireHandle;
				//set timer for each card, delayed by their position in order
				GetWorldTimerManager().SetTimer(StaggerFireHandle, this, &ABaseCharacterClass::Shoot, StaggerDelay * i);
			}
			//get number of cards to fire
			float FloatCardsToFire = CardsToFire;
			//calculate actual delay for fire cooldown
			TempFireDelay += StaggerDelay * FloatCardsToFire;
			//start cooldown timer
			GetWorldTimerManager().SetTimer(AutoFireManager, this, &ABaseCharacterClass::FireCooldown, TempFireDelay);
		}
		else
		{
			//if no specific firing modes are active, fire one card
			Shoot();
			CanFire = false;
			GetWorldTimerManager().SetTimer(AutoFireManager, this, &ABaseCharacterClass::FireCooldown, FireDelay);
		}
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
	//shoot linetrace
	return GetWorld()->LineTraceSingleByChannel(Hit, ViewLocation, End, ECollisionChannel::ECC_GameTraceChannel2, Params);
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
	CanFire = false;
	CurrentClip = 0;
	//GetWorldTimerManager().SetTimer(ReloadTimeManager, this, &ABaseCharacterClass::ReloadTimerFunction, ReloadDelay);
	//Starts timer for when weapon restores ammo and re-enables reloading
	GetWorldTimerManager().SetTimer(ReloadTimeManager, this, &ABaseCharacterClass::ReloadTimerFunction, CardDeck->GetTimeToReload());
	CardDeck->ReloadCards();
	}
}

/// @brief Restores ammo and enables reloading. For use only with timer functions
void ABaseCharacterClass::ReloadTimerFunction()
{
	CanReload = true;
	CurrentClip = MaxClip;
	CanFire = true;
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
		PlayerHUD->SetCard(CardIndex, CardHand[CardIndex]->CardWidget);
	}
}

///@brief Draws a card for each index in the hand
void ABaseCharacterClass::ReplenishHandFunction()
{
	if(CardDeck->IsDeckEmpty()) CardDeck->ShuffleDiscard();
	for(int i = 0; i < CardHand.Num(); i++)
		{
			CardHand[i] = CardDeck->DrawCard();
			if(CardHand[i] != nullptr)
			{
				if(CardHand[i]->CardWidget != nullptr)
				{
					//only set card ui if it exists
					PlayerHUD->SetCard(i, CardHand[i]->CardWidget);
				}
			}
			else
			{
				PlayerHUD->SetCard(i, CreateWidget<UUserWidget>(GetWorld(), CardBackClass));
			}
		}
}

/// @brief Rotates the camera with character movement
/// @param DeltaTime the world delta time to enable smooth movement
void ABaseCharacterClass::LeanCamera(float DeltaTime)
{
	//get current camera rotation
	float CurrentCameraRoll = CameraComponent->GetRelativeRotation().Roll;
	//interpolate camera position for smooth movement
	float CameraRotation = UKismetMathLibrary::FInterpTo(CurrentCameraRoll, CameraLeanValue, DeltaTime, CameraRotateSpeed);
	//set camera rotation
	CameraComponent->SetRelativeRotation(FRotator(0, 0, CameraRotation));
}

///@brief Enables/disables flying movement for the player
///@param bIsFlying switches flying on or off
///@param FlyTime the duration that fly mode is active (only applicable when enabled)
void ABaseCharacterClass::SetFlyMode(bool bIsFlying, float FlyTime)
{
	bIsCharacterFlying = bIsFlying;
	if(bIsFlying)
	{
		//create delegate to allow timer functions with parameters
		FTimerDelegate FlyDelegate = FTimerDelegate::CreateUObject(this, &ABaseCharacterClass::SetFlyMode, false, 0.0f);
		//clear timer to ensure only one instance is active at one time
		GetWorldTimerManager().ClearTimer(FlyModeHandle);
		//start fly timer
		GetWorldTimerManager().SetTimer(FlyModeHandle, FlyDelegate, FlyTime, false);
		//enable flying
		GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Flying);
	}
	else
	{
		//disable flying
		GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Walking);
	}
}

void ABaseCharacterClass::SetReflectionMode(bool bIsReflecting, float ReflectionTime)
{
	bIsCharacterReflecting = bIsReflecting;
	FTimerDelegate ReflectDelegate = FTimerDelegate::CreateUObject(this, &ABaseCharacterClass::SetReflectionMode, false, 0.0f);
	GetWorldTimerManager().SetTimer(ReflectModeHandle, ReflectDelegate, ReflectionTime, false);
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
	//call blueprint event to play hud effect
	PlayerHUD->FlashHealVignetteBP();
}

/// @brief Increases the player's shield bar by the given value
/// @param IsPercentile If true, the ShieldValue will be treated as a percentage
/// @param ShieldValue The amount of shield added to the player
void ABaseCharacterClass::AddShield(bool IsPercentile, float ShieldValue)
{
	if(IsPercentile) CurrentShield += MaxShield * ShieldValue;
	else CurrentShield += ShieldValue;
	if(CurrentShield > MaxShield) CurrentShield = MaxShield;
	//call blueprint event to play hud effect
	PlayerHUD->FlashShieldVignetteBP();
}

/// @brief Adds the parameter value to the player's current energy
void ABaseCharacterClass::GiveEnergy(float EnergyValue)
{
	CurrentEnergy += EnergyValue;
	if(CurrentEnergy > MaxEnergy) CurrentEnergy = MaxEnergy;
}

/// @brief Enables firing standard weapon after cooldown
void ABaseCharacterClass::FireCooldown()
{
	if(!GetWorldTimerManager().IsTimerActive(ReloadTimeManager))
	{
		CanFire = true;
	}
}

/// @brief Switches firing mode
/// @param Value Input bool to check if the button is held
void ABaseCharacterClass::Zoom(const FInputActionValue& Value)
{
	if(Value.Get<bool>()) 
	{
		//CameraComponent->SetFieldOfView(45);
		//Speed = 5.0f;
		if(CardCharge >= ChargeForOneCard)
		{
			//add card to spool and reduce charge
			if(CardsCharged < MaxCardsCharged) CardCharge -= ChargeForOneCard;
			CardsCharged += 1;
			if(CardsCharged > MaxCardsCharged) CardsCharged = MaxCardsCharged;
		}
		//increase card charge whilst actiive
		CardCharge += CardChargeRate;
		bIsChargeMode = true;
	}
	else
	{
		//CameraComponent->SetFieldOfView(90);
		//Speed = 10.0f;
		CardCharge = 0;
		CardsCharged = 0;
		bIsChargeMode = false;
	}
}

/// @brief blueprint pure function to return the remaning health percentage of the player
/// @return the remaining percentage of health the character is left on 
float ABaseCharacterClass::GetHealthPercent() const
{
	return Health/MaxHealth;
}

/// @brief function to get the player's current health
/// @return the remaining total health the player has remaining
float ABaseCharacterClass::GetHealth() const
{
	return Health;
}

/// @brief function to get the player's current energy
/// @return the remaining total energy the player has remaining
float ABaseCharacterClass::GetEnergy() const
{
	return CurrentEnergy;
}

/// @brief function to get the player's current shield
/// @return the remaining total shield the player has remaining
float ABaseCharacterClass::GetShield() const
{
	return CurrentShield;
}

/// @brief function to return the player's remaining energy as a percentage
/// @return return the percentile value of energy the player has left (0-1)
float ABaseCharacterClass::GetEnergyPercent() const
{
	return CurrentEnergy/MaxEnergy;
}

/// @brief function to return the player's current clip
/// @return the discrete number of cards left in the clip
int32 ABaseCharacterClass::GetClip() const
{
	return CurrentClip;
}

/// @brief function to return the player's maximum clip
/// @return the discrete number of the clip size
int32 ABaseCharacterClass::GetMaxClip() const
{
	return MaxClip;
}

/// @brief function to get the player's total amount of cards charged
/// @return returns the discrete number of cards the player has spooled
int32 ABaseCharacterClass::GetChargedCards()
{
	return CardsCharged;
}

/// @brief gets the charge until a new card gets spooled
/// @param OutCurrentCharge The current charge progress until the next card
/// @param OutMaxCharge The charge required for the next spooled card
void ABaseCharacterClass::GetCardCharge(float &OutCurrentCharge, float &OutMaxCharge)
{
	OutCurrentCharge = CardCharge;
	OutMaxCharge = ChargeForOneCard;
}

float ABaseCharacterClass::GetDashRecharge()
{
	return DashRecharge;
}

/// @brief increases the number of cards in the clip by 1
void ABaseCharacterClass::IncrementClip()
{
	CurrentClip += 1;
}