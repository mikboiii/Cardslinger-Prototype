// Fill out your copyright notice in the Description page of Project Settings.


#include "LightningProjectileCard.h"
#include "Kismet/GameplayStatics.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "Engine/DamageEvents.h"

void ALightningProjectileCard::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
    if (OtherActor != this)
    {        
        //create radial damage event and apply damage to all enemy actors within the radius
        UGameplayStatics::ApplyRadialDamage(GetWorld(), CardExplosiveDamage, Hit.ImpactPoint, CardExplosionRadius,
            UDamageType::StaticClass(), TArray<AActor*>(), PlayerPawn,
            UGameplayStatics::GetPlayerController(GetWorld(), 0), true, ECollisionChannel::ECC_Visibility);
    }
    //destroy the card on impact
    Destroy();
}