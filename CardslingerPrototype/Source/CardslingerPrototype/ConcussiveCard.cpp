// Fill out your copyright notice in the Description page of Project Settings.


#include "ConcussiveCard.h"
#include "CardDeck.h"
#include "ProjectileCard.h"
#include "Engine/World.h"

/// @brief launches an explosive card (damage values are stored in the projectile card)
void AConcussiveCard::CardEffect(ACardDeck* CardDeck, FVector Direction, FVector Target, AActor* TargetActor)
{
    AProjectileCard* LaunchedCard = CardDeck->FireCard(Direction, ConcussiveProjectileCardClass, Target, TargetActor);
}
