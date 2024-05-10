// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseAIClass.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "Components/InputComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Components/CapsuleComponent.h"
#include "CardslingerTestGameMode.h"
// Sets default values
ABaseAIClass::ABaseAIClass()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseAIClass::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseAIClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseAIClass::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

float ABaseAIClass::TakeDamage(float DamageAmount, struct FDamageEvent const &DamageEvent, class AController *EventInstigator, AActor* DamageCauser)
{
    float DamageToApply = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, EventInstigator);
    Health -= DamageToApply;

    if(IsDead())
    {
        Health = 0.0f;
        ACardslingerTestGameMode* GameMode = GetWorld()->GetAuthGameMode<ACardslingerTestGameMode>();
        if(GameMode != nullptr)
        {
            GameMode->PawnKilled(this);
        }
        DetachFromControllerPendingDestroy();
        GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    }
    return DamageToApply;
}

bool ABaseAIClass::IsDead() const
{
    return Health <= 0;
}

float ABaseAIClass::GetHealthPercent() const
{
    return Health/MaxHealth;
}

