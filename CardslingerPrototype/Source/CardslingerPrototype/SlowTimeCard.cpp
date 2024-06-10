// Fill out your copyright notice in the Description page of Project Settings.


#include "SlowTimeCard.h"
#include "CardDeck.h"
#include "ProjectileCard.h"
#include "Engine/World.h"

void ASlowTimeCard::CardEffect(class ACardDeck* CardDeck, FVector Direction, FVector Target, AActor* TargetActor)
{
    AProjectileCard* LaunchedCard = CardDeck->FireCard(Direction, SlowTimeProjectileCardClass, Target, TargetActor);
}
