// Fill out your copyright notice in the Description page of Project Settings.


#include "ExplosionProjectileCard.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/DamageEvents.h"

void AExplosionProjectileCard::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor != this)
    {
        DrawDebugSphere(GetWorld(), Hit.ImpactPoint, 300.0f, 16, FColor::Red, true, 10000.0f);
        UGameplayStatics::ApplyRadialDamage(GetWorld(), CardExplosiveDamage, Hit.ImpactPoint, 300.0f, 
        UDamageType::StaticClass(), TArray<AActor*>(), UGameplayStatics::GetPlayerPawn(GetWorld(),0), 
        UGameplayStatics::GetPlayerController(GetWorld(),0), true, ECollisionChannel::ECC_Visibility);
    }

    Destroy();
}