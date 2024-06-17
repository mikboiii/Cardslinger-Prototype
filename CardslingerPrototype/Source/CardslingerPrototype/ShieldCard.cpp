// Fill out your copyright notice in the Description page of Project Settings.


#include "ShieldCard.h"
#include "Kismet/GameplayStatics.h"
#include "BaseCharacterClass.h"

void AShieldCard::CardEffect(class ACardDeck* CardDeck, FVector Direction, FVector Target, AActor* TargetActor)
{
    Super::CardEffect(CardDeck, Direction, Target, TargetActor);
    Cast<ABaseCharacterClass>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0))->AddShield(IsPercentileShield, ShieldRestored);
}