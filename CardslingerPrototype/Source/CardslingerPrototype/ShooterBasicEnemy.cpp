// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterBasicEnemy.h"

float AShooterBasicEnemy::TakeDamage(float DamageAmount, struct FDamageEvent const &DamageEvent, class AController *EventInstigator, AActor* DamageCauser)
{
    float DamageToApply = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, EventInstigator);
    //reduce health
    Health -= DamageToApply;

    if(IsDead())
    {
		//set health to zero
        Health = 0.0f;
		//get gamemode
        ACardslingerTestGameMode* GameMode = GetWorld()->GetAuthGameMode<ACardslingerTestGameMode>();
        if(GameMode != nullptr)
        {
			//if gamemode exists, report pawn as dead
            GameMode->PawnKilled(this);
        }
		//disable collision on enemy (prevent collision with player)
		GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		//remove ai controller
        DetachFromControllerPendingDestroy();
    }

    return DamageToApply;
}