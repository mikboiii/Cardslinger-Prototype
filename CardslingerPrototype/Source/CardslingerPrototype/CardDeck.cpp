// Fill out your copyright notice in the Description page of Project Settings.


#include "CardDeck.h"
#include "BaseCard.h"
#include "ProjectileCard.h"
#include "Math/UnrealMathUtility.h"
#include "Components/SkeletalMeshComponent.h"
#include "BaseCharacterClass.h"
#include "Animation/AnimInstance.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ACardDeck::ACardDeck()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACardDeck::BeginPlay()
{
	Super::BeginPlay();
	Player = Cast<ABaseCharacterClass>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
}

// Called every frame
void ACardDeck::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

/// @brief Draws the top card from the draw pile
/// @return returns the card that was drawn
ABaseCard* ACardDeck::DrawCard()
{
	if(!DrawPile.IsEmpty())
	{
	//selects the type of card being drawn
	TSubclassOf<ABaseCard> CardToReturn = DrawPile[0];
	//place the card in the discard pile after drawing
	DiscardPile.Emplace(DrawPile[0]);
	//remove from the top of the draw stack
	DrawPile.RemoveAt(0);
	//returns the card
	return GetWorld()->SpawnActor<ABaseCard>(CardToReturn);
	}
	//returns nullptr if the draw pile is empty
	return nullptr;
}

/// @brief Shuffles the discard pile and places it back in the draw pile
void ACardDeck::ShuffleDiscard()
{
	int32 NumberOfCards = DiscardPile.Num();
	for(int32 i = NumberOfCards - 1; i >= 0; --i)
	{
		int32 RandomCardIndex = FMath::RandRange(0,i);
		DrawPile.Emplace(DiscardPile[RandomCardIndex]);
		DiscardPile.RemoveAt(RandomCardIndex);
	}
	//remove all cards from the discard pile
	DiscardPile.Empty();
}

/// @brief Shuffles the deck's current cards
void ACardDeck::ShuffleDeck()
{

}

/// @brief Launches a projectile card
/// @param Direction The direction that card will fly in
/// @param CardClass The type of projectile card that will be launched
/// @param Target The FVector location in the world space that the card will fly to
/// @param TargetActor The AActor the card will fly towards
/// @return Returns a pointer to the card that was just launched
AProjectileCard* ACardDeck::FireCard(FVector Direction, TSubclassOf<class AProjectileCard> CardClass, FVector Target, AActor* TargetActor)
{
	if(CardClass != nullptr)
	{
	//spawns the projectile card in the world
	AProjectileCard* Projectile = GetWorld()->SpawnActor<AProjectileCard>(CardClass, GetActorLocation(), Direction.Rotation());
	//sets the deck as the owner of the card in the hierarchy
	Projectile->SetOwner(this);
	//sets the card's homing target
	Projectile->SetHomingTarget(Target, TargetActor);
	//returns the card actor
	return Projectile;
	}
	//returns nullptr if the card class is invalid
	return nullptr;
}

/// @brief blueprint pure function to check if the deck is empty
/// @return returns bool of if the deck is empty
bool ACardDeck::IsDeckEmpty() const
{
	return DrawPile.Num() == 0;
}

int32 ACardDeck::DrawCardNum() const
{
	return DrawPile.Num();
}

void ACardDeck::RemoveCardFromDeck(int CardIndex)
{
	CardMeshArray[CardIndex]->DestroyComponent();
	CardMeshArray.RemoveAt(CardIndex);
}

void ACardDeck::ReloadCards()
{
	for(USkeletalMeshComponent* CardMesh : CardMeshArray)
	{
		if(CardMesh)
		{
			CardMesh->DestroyComponent();
		}
	}
	CardMeshArray.Empty();
	GetWorldTimerManager().SetTimer(ReloadHandle, this, &ACardDeck::SpawnCard, ReloadDelayPerCard, true);
	
}

void ACardDeck::SpawnCard()
{
	if(Player->GetMaxClip() == CardMeshArray.Num())
	{
		GetWorldTimerManager().ClearTimer(ReloadHandle);
		return;
	}
	float CardPos = CardMeshArray.Num()-1;
	CardPos *= 0.17f;
	FVector Translation = FVector(0,0, CardPos);
	FTransform CardTransform = FTransform(Translation);
	USkeletalMeshComponent* NewCard = NewObject<USkeletalMeshComponent>(this);
	if(NewCard)
	{
	NewCard->SetWorldTransform(CardTransform);
	NewCard->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
	NewCard->RegisterComponent();	
	NewCard->SetSkeletalMesh(CardSkeletalMeshTemplate);
	CardMeshArray.Emplace(NewCard);
	NewCard->SetAnimInstanceClass(CardAnimationBlueprint);
	Player->IncrementClip();
	}
}