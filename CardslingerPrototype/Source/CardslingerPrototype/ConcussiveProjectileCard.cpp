// Fill out your copyright notice in the Description page of Project Settings.


#include "ConcussiveProjectileCard.h"
#include "Kismet/GameplayStatics.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "Engine/DamageEvents.h"

void AConcussiveProjectileCard::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor != this)
    {
        //spawn explosion fx
        UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), CardImpact, Hit.ImpactPoint, GetActorForwardVector().Rotation(), FVector(ParticleScale), true, true, ENCPoolMethod::None, true);
        //create radial damage event and apply damage to all enemy actors within the radius
        UGameplayStatics::ApplyRadialDamage(GetWorld(), CardExplosiveDamage, Hit.ImpactPoint, CardExplosionRadius, 
        UDamageType::StaticClass(), TArray<AActor*>(), PlayerPawn, 
        UGameplayStatics::GetPlayerController(GetWorld(),0), true, ECollisionChannel::ECC_Visibility);
    }
    //destroy the card on impact
    Destroy();
}
