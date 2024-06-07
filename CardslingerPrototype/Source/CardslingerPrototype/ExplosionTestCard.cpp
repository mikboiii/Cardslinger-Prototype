// Fill out your copyright notice in the Description page of Project Settings.


#include "ExplosionTestCard.h"
#include "CardDeck.h"
#include "ProjectileCard.h"
#include "Engine/World.h"

void AExplosionTestCard::CardEffect(ACardDeck* CardDeck, FVector Direction, TWeakObjectPtr<USceneComponent> Target)
{
    AProjectileCard* LaunchedCard = CardDeck->FireCard(Direction, ExplosionProjectileCardClass, Target);
    LaunchedCard->SetHomingTarget(Target);
    UE_LOG(LogTemp, Display, TEXT("Exploding Card"));
}