// Fill out your copyright notice in the Description page of Project Settings.


#include "ExplosionProjectileCard.h"

void AExplosionProjectileCard::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor != this)
    {
        DrawDebugSphere(GetWorld(), Hit.ImpactPoint, 300.0f, 16, FColor::Red, true, 10000.0f);
    }

    Destroy();
}