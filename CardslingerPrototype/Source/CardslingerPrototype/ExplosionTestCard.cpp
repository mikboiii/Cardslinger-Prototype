// Fill out your copyright notice in the Description page of Project Settings.


#include "ExplosionTestCard.h"
#include "CardDeck.h"
#include "Engine/World.h"

void AExplosionTestCard::CardEffect(ACardDeck* CardDeck)
{
    UE_LOG(LogTemp, Display, TEXT("Exploding Card"));
}