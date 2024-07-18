// Fill out your copyright notice in the Description page of Project Settings.


#include "HoverCard.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"

void AHoverCard::CardEffect(class ACardDeck* CardDeck, FVector Direction, FVector Target, AActor* TargetActor)
{
    Super::CardEffect(CardDeck, Direction, Target, TargetActor);
    APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
    Cast<ACharacter>(PlayerPawn)->GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Flying);
    FTimerHandle HoverTimeManager;
    GetWorldTimerManager().SetTimer(HoverTimeManager, this, &AHoverCard::EndHover, FlyTime);
}

void AHoverCard::EndHover()
{
    APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
    Cast<ACharacter>(PlayerPawn)->GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Walking);
}