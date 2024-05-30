// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerHUDWidget.h"
#include "Components/UniformGridPanel.h"
#include "Components/ProgressBar.h"
#include "Components/UniformGridSlot.h"
#include "Styling/SlateTypes.h"
#include "Blueprint/UserWidget.h"

void UPlayerHUDWidget::NativeConstruct()
{
    Super::NativeConstruct();
    UE_LOG(LogTemp, Display, TEXT("UI Constructed"));
    Cards.Init(nullptr, 4);
}

void UPlayerHUDWidget::SetCard(int32 Index, UUserWidget* NewCard)
{
    UE_LOG(LogTemp, Display, TEXT("New card set in UI"));
    UUniformGridSlot* CardOnPanel = Cast<UUniformGridSlot>(CardPanel->AddChild(NewCard));
    CardOnPanel->SetColumn(Index);
    CardOnPanel->SetRow(0);
}