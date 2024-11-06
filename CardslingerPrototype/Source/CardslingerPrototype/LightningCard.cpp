// Fill out your copyright notice in the Description page of Project Settings.


#include "LightningCard.h"
#include "CardDeck.h"
#include "ProjectileCard.h"


void ALightningCard::CardEffect(class ACardDeck* CardDeck, FVector Direction, FVector Target, AActor* TargetActor)
{
    AProjectileCard* LaunchedCard = CardDeck->FireCard(Direction, LightningProjectileCardClass, Target, TargetActor);
}