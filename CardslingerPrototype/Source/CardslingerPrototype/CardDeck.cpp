// Fill out your copyright notice in the Description page of Project Settings.


#include "CardDeck.h"
#include "BaseCard.h"
#include "ProjectileCard.h"


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
	
}

// Called every frame
void ACardDeck::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ABaseCard* ACardDeck::DrawCard()
{
	return GetWorld()->SpawnActor<ABaseCard>(DrawPile[0]);
}

void ACardDeck::ShuffleDiscard()
{

}

void ACardDeck::ShuffleDeck()
{
	
}

void ACardDeck::FireCard(FVector Direction, TSubclassOf<class AProjectileCard> CardClass)
{
	UE_LOG(LogTemp, Display, TEXT("FireCard Called"));
	if(CardClass != nullptr)
	{
	//GetWorld()->SpawnActor<AProjectileCard>(ProjectileCardClass, GetActorLocation(), Direction.Rotation());
	AProjectileCard* Projectile = GetWorld()->SpawnActor<AProjectileCard>(CardClass, GetActorLocation(), Direction.Rotation());
	UE_LOG(LogTemp, Display, TEXT("Card Spawned"));
	Projectile->SetOwner(this);
	}
}

bool ACardDeck::IsDeckEmpty() const
{
	return DrawPile.Num() == 0;
}
