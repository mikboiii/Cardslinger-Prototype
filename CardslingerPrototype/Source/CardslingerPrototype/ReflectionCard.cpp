// Fill out your copyright notice in the Description page of Project Settings.


#include "ReflectionCard.h"
#include "Kismet/GameplayStatics.h"
#include "BaseCharacterClass.h"

void AReflectionCard::CardEffect(class ACardDeck* CardDeck, FVector Direction, FVector Target, AActor* TargetActor)
{
    Super::CardEffect(CardDeck, Direction, Target, TargetActor);
    Cast<ABaseCharacterClass>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0))->SetReflectionMode(true, ReflectionShieldDuration);
}