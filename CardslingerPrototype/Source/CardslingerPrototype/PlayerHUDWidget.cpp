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
    Cards.Init(nullptr, 4);
}

void UPlayerHUDWidget::SetCard(int32 Index, UUserWidget* NewCard)
{
    UUniformGridSlot* CardOnPanel = CardPanel->AddChildToUniformGrid(NewCard, 1, Index);
}

void UPlayerHUDWidget::RemoveCard(int32 Index)
{
    TArray<UWidget*> AllChildren = CardPanel->GetAllChildren();
    for(int32 i = AllChildren.Num() - 1; i >= 0; i--)
    {
        if(AllChildren.IsValidIndex(i))
        {
            UUniformGridSlot* CardOnPanel = Cast<UUniformGridSlot>(CardPanel->GetChildAt(i)->Slot);
            if(CardOnPanel && CardOnPanel->GetColumn() == Index && CardOnPanel->GetRow() == 1)
            {
                //UE_LOG(LogTemp, Display, TEXT("CardPanel index is %d"), i);
                UWidget* CardToRemove = CardPanel->GetChildAt(i);
                CardPanel->RemoveChild(CardToRemove);
            }
        }
    }
}
