// Fill out your copyright notice in the Description page of Project Settings.


#include "HealingCard.h"
#include "Kismet/GameplayStatics.h"
#include "BaseCharacterClass.h"

void AHealingCard::CardEffect(ACardDeck* CardDeck, FVector Direction, TWeakObjectPtr<USceneComponent> Target)
{
	Super::CardEffect(CardDeck, Direction, Target);
    Cast<ABaseCharacterClass>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0))->Heal(true, 0.25f);
}