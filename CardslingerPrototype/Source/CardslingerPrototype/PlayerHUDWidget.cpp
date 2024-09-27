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
    //create 4 empty slots
    Cards.Init(nullptr, 4);
}

/// @brief Applies card image to the specified slot
/// @param Index the card slot
/// @param NewCard the ui widget of the card
void UPlayerHUDWidget::SetCard(int32 Index, UUserWidget* NewCard)
{
    //Adds card to the ui grid
    UUniformGridSlot* CardOnPanel = CardPanel->AddChildToUniformGrid(NewCard, 1, Index);
}

/// @brief Removes a card from the specified slot
/// @param Index the card slot being cleared
void UPlayerHUDWidget::RemoveCard(int32 Index)
{
    //get array of all card on the ui
    TArray<UWidget*> AllChildren = CardPanel->GetAllChildren();
    //loop through them
    for(int32 i = AllChildren.Num() - 1; i >= 0; i--)
    {
        //if the slot exists then:
        if(AllChildren.IsValidIndex(i))
        {
            //get slot and cast to uniform grid slot
            UUniformGridSlot* CardOnPanel = Cast<UUniformGridSlot>(CardPanel->GetChildAt(i)->Slot);
            //get position of slot and compare with selection. Check if card exists in slot
            if(CardOnPanel && CardOnPanel->GetColumn() == Index && CardOnPanel->GetRow() == 1)
            {
                //UE_LOG(LogTemp, Display, TEXT("CardPanel index is %d"), i);

                //get card widget in slot
                UWidget* CardToRemove = CardPanel->GetChildAt(i);
                //remove widget from grid slot
                CardPanel->RemoveChild(CardToRemove);
            }
        }
    }
}
