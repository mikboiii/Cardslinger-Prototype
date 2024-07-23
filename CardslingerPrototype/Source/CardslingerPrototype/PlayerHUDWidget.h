// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerHUDWidget.generated.h"

/**
 * 
 */
UCLASS()
class CARDSLINGERPROTOTYPE_API UPlayerHUDWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(meta=(BindWidget))
	class UUniformGridPanel* CardPanel;

	virtual void NativeConstruct() override;
	TArray<class UProgressBar*> Cards;

	UPROPERTY(EditAnywhere)
	class UUserWidget* CardTemplate;

public:
	void SetCard(int32 Index, class UUserWidget* NewCard);
	void RemoveCard(int32 Index);

	void FlashDamageVignette();
};
