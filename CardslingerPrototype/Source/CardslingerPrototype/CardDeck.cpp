// Fill out your copyright notice in the Description page of Project Settings.


#include "CardDeck.h"
#include "BaseCard.h"
#include "ProjectileCard.h"
#include "Math/UnrealMathUtility.h"


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
	if(!DrawPile.IsEmpty())
	{
	TSubclassOf<ABaseCard> CardToReturn = DrawPile[0];
	DiscardPile.Emplace(DrawPile[0]);
	DrawPile.RemoveAt(0);
	return GetWorld()->SpawnActor<ABaseCard>(CardToReturn);
	}
	return nullptr;
}

void ACardDeck::ShuffleDiscard()
{
	int32 NumberOfCards = DiscardPile.Num();
	for(int32 i = NumberOfCards - 1; i >= 0; --i)
	{
		int32 RandomCardIndex = FMath::RandRange(0,i);
		DrawPile.Emplace(DiscardPile[RandomCardIndex]);
		DiscardPile.RemoveAt(RandomCardIndex);
	}
	DiscardPile.Empty();
}

void ACardDeck::ShuffleDeck()
{
	
}

AProjectileCard* ACardDeck::FireCard(FVector Direction, TSubclassOf<class AProjectileCard> CardClass, FVector Target, AActor* TargetActor)
{
	if(CardClass != nullptr)
	{
	//GetWorld()->SpawnActor<AProjectileCard>(ProjectileCardClass, GetActorLocation(), Direction.Rotation());
	AProjectileCard* Projectile = GetWorld()->SpawnActor<AProjectileCard>(CardClass, GetActorLocation(), Direction.Rotation());
	Projectile->SetOwner(this);
	Projectile->SetHomingTarget(Target, TargetActor);
	return Projectile;
	}
	return nullptr;
}

bool ACardDeck::IsDeckEmpty() const
{
	return DrawPile.Num() == 0;
}