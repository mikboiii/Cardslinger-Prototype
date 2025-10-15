// Fill out your copyright notice in the Description page of Project Settings.


#include "CardDeck.h"
#include "BaseCard.h"
#include "ProjectileCard.h"
#include "Math/UnrealMathUtility.h"
#include "Components/SkeletalMeshComponent.h"
#include "BaseCharacterClass.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Serialization/ObjectAndNameAsStringProxyArchive.h"
#include "Serialization/MemoryWriter.h"
#include "Serialization/MemoryReader.h"
#include "Animation/AnimInstance.h"
#include "Kismet/GameplayStatics.h"
#include "Components/AudioComponent.h"

// Sets default values
ACardDeck::ACardDeck()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CardDeckAudioSource = CreateDefaultSubobject<UAudioComponent>(TEXT("Card Deck Audio Source"));

}

// Called when the game starts or when spawned
void ACardDeck::BeginPlay()
{
	Super::BeginPlay();
	Player = Cast<ABaseCharacterClass>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	SavePath = FPaths::ProjectSavedDir() / TEXT("CardDeck.sav");
	UE_LOG(LogTemp, Display, TEXT("%s"),*SavePath);
	FullDeck = LoadDeck(SavePath);
	DrawPile = FullDeck;
	ShuffleDeck();
	SaveDeck(SavePath);
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
	if(DiscardPile.Num() != 0)
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
}

/// @brief Shuffles the deck's current cards
void ACardDeck::ShuffleDeck()
{
	if(DrawPile.Num() != 0)
	{
		int32 NumberOfCards = DrawPile.Num();
		TArray<TSubclassOf<ABaseCard>> TempDeck;
		for(int32 i = NumberOfCards - 1; i >= 0; --i)
		{
			int32 RandomCardIndex = FMath::RandRange(0,i);
			TempDeck.Emplace(DrawPile[RandomCardIndex]);
			DrawPile.RemoveAt(RandomCardIndex);
		}
		DrawPile = TempDeck;
	}
}

/// @brief Launches a projectile card
/// @param Direction The direction that card will fly in
/// @param CardClass The type of projectile card that will be launched
/// @param Target The FVector location in the world space that the card will fly to
/// @param TargetActor The AActor the card will fly towards
/// @return Returns a pointer to the card that was just launched
AProjectileCard* ACardDeck::FireCard(FVector Direction, TSubclassOf<class AProjectileCard> CardClass, FVector Target, AActor* TargetActor, FName TargetBone)
{
	if(CardClass != nullptr)
	{
		//spawns the projectile card in the world
		AProjectileCard* Projectile = GetWorld()->SpawnActor<AProjectileCard>(CardClass, GetActorLocation(), Direction.Rotation());
		//sets the deck as the owner of the card in the hierarchy
		Projectile->SetOwner(this);
		//if enemy has a bone near the hitscan then:
		if(TargetBone != NAME_None)
		{
			//make that bone the homing target
			Projectile->SetBoneTarget(TargetBone);
		}
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

/// @brief function to get the number of cards remaining in the draw pile
/// @return the number of cards remaining
int32 ACardDeck::DrawCardNum() const
{
	return DrawPile.Num();
}

/// @brief FOR USE ONLY IN THE RELOAD ANIMATION
/// @param CardIndex the index of the card mesh being removed
void ACardDeck::RemoveCardFromDeck(int CardIndex)
{
	CardMeshArray[CardIndex]->DestroyComponent();
	CardMeshArray.RemoveAt(CardIndex);
}

/// @brief Triggers the reload animation
void ACardDeck::ReloadCards()
{
	//loop through all remaining cards
	for(USkeletalMeshComponent* CardMesh : CardMeshArray)
	{
		if(CardMesh)
		{
			//destroy current card
			CardMesh->DestroyComponent();
		}
	}
	//empty array
	CardMeshArray.Empty();
	//create looping timer which add cards one-by-one until stopped
	GetWorldTimerManager().SetTimer(ReloadHandle, this, &ACardDeck::SpawnCard, ReloadDelayPerCard, true);
	
}

/// @brief FOR USE ONLY IN THE RELOAD ANIMATION
void ACardDeck::SpawnCard()
{
	//if clip full then:
	if(Player->GetMaxClip() == CardMeshArray.Num())
	{
		//clear reload timer and do nothing
		GetWorldTimerManager().ClearTimer(ReloadHandle);
		return;
	}
	//get index of current card
	float CardPos = CardMeshArray.Num()-1;
	//scalar to keep distances between cards consistent
	CardPos *= 0.17f;
	//vector position of the card
	FVector Translation = FVector(0,0, CardPos);
	//create transform for spawning the card
	FTransform CardTransform = FTransform(Translation);
	//create new empty mesh component
	USkeletalMeshComponent* NewCard = NewObject<USkeletalMeshComponent>(this);
	//if successfully created then:
	if(NewCard)
	{
		//set position
		NewCard->SetWorldTransform(CardTransform);
		//set parent to card deck root
		NewCard->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
		//init card's variables
		NewCard->RegisterComponent();	
		//set card mesh
		NewCard->SetSkeletalMesh(CardSkeletalMeshTemplate);
		//add card to list of cards
		CardMeshArray.Emplace(NewCard);
		//add animation blueprint to card
		NewCard->SetAnimInstanceClass(CardAnimationBlueprint);
		//+1 to the player's clip number
		Player->IncrementClip();
	}
}

/// @brief Calculates the time required to play the reload animation
/// @return returns the time as a float
float ACardDeck::GetTimeToReload()
{
	return ReloadDelayPerCard * Player->GetMaxClip();
}

/// @brief Saves the deck to a file
/// @param SavePathRef the save file path
void ACardDeck::SaveDeck(const FString& SavePathRef)
{
    //create empty binary data array
    TArray<uint8> BinaryData;
	//create a memory writer
    FMemoryWriter MemoryWriter(BinaryData, true);
	//create new archive
    FObjectAndNameAsStringProxyArchive Archive(MemoryWriter, false);
	//make it known that game is being saved
    Archive.ArIsSaveGame = true;
	//get data from card deck and serialise
    Archive << FullDeck;

    // Write to the file
    if (FFileHelper::SaveArrayToFile(BinaryData, *SavePathRef))
    {
        UE_LOG(LogTemp, Log, TEXT("Save successful!"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to save file."));
    }
}

/// @brief function for manual saving
void ACardDeck::ManualSaveDeck()
{
	SaveDeck(SavePath);
}

/// @brief Loads the deck from file
/// @param SavePathRef the save file path
TArray<TSubclassOf<ABaseCard>> ACardDeck::LoadDeck(const FString& SavePathRef)
{
    //create empty binary data array
    TArray<uint8> BinaryData;
	//create empty array to store loaded cards
	TArray<TSubclassOf<ABaseCard>> LoadedCards;
    if (FFileHelper::LoadFileToArray(BinaryData, *SavePathRef))
    {
        UE_LOG(LogTemp, Log, TEXT("Load successful!"));

        // Create a memory reader
        FMemoryReader MemoryReader(BinaryData, true);
		//create new archive
        FObjectAndNameAsStringProxyArchive Archive(MemoryReader, true);
		//make it known that there is loading going on
        Archive.ArIsSaveGame = true;

        // Deserialize the data into the array
        Archive << LoadedCards;
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to load file."));
    }
	return LoadedCards;
}

/// @brief function to manually load
void ACardDeck::ManualLoadDeck()
{
	FullDeck = LoadDeck(SavePath);
}

/// @brief Adds a card to the player's deck
/// @param CardToAdd The class of card being added
/// @param bAddToDiscard if true, card will be added to the discard pile instead
/// @param bIsTemporaryCard if true, card will be added to the draw pile instead
void ACardDeck::AddCard(TSubclassOf<ABaseCard> CardToAdd, bool bAddToDiscard, bool bIsTemporaryCard)
{
	if(bIsTemporaryCard)
	{
		if(!bAddToDiscard) DrawPile.Emplace(CardToAdd);
		else DiscardPile.Emplace(CardToAdd);
	}
	else
	{
		FullDeck.Emplace(CardToAdd);
		SaveDeck(SavePath);
	}
}

/// @brief Removes a single copy of a card from the player's deck
/// @param CardToRemove The class of card being removed
/// @param bIsPermanent If true, the card will be removed from the saved deck
void ACardDeck::RemoveCard(TSubclassOf<ABaseCard> CardToRemove, bool bIsPermanent)
{
	if(bIsPermanent)
	{
		if(FullDeck.Contains(CardToRemove))
		{
			FullDeck.RemoveSingle(CardToRemove);
			SaveDeck(SavePath);
		}
	}
	else
	{
		if(DrawPile.Contains(CardToRemove))
		{
			DrawPile.Remove(CardToRemove);
		}
	}
}

/// @brief Removes a single card at the given index
/// @param Index the index within the deck which will be removed
/// @param bIsPermanent if true, the card will be removed from the saved deck
void ACardDeck::RemoveCardAtIndex(int32 Index, bool bIsPermanent)
{
	if(bIsPermanent)
	{
		if(FullDeck.IsValidIndex(Index))
		{
			FullDeck.RemoveAt(Index);
			SaveDeck(SavePath);
		}
	}
	else
	{
		if(DrawPile.IsValidIndex(Index))
		{
			DrawPile.RemoveAt(Index);
		}
	}
}

/// @brief Gets save path
/// @return the currrent deck save path
FString ACardDeck::GetSavePath() const
{
	return SavePath;
}