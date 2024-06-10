// Fill out your copyright notice in the Description page of Project Settings.


#include "HealingCard.h"
#include "Kismet/GameplayStatics.h"
#include "BaseCharacterClass.h"

/// @brief finds the player pawn and applies healing to them
void AHealingCard::CardEffect(ACardDeck* CardDeck, FVector Direction, FVector Target, AActor* TargetActor)
{
	Super::CardEffect(CardDeck, Direction, Target, TargetActor);
    Cast<ABaseCharacterClass>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0))->Heal(true, 0.25f);
}