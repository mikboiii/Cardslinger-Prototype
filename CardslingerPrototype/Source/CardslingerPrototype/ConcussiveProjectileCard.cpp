// Fill out your copyright notice in the Description page of Project Settings.


#include "ConcussiveProjectileCard.h"
#include "Kismet/GameplayStatics.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "BaseAIClass.h"
#include "Engine/DamageEvents.h"
#include "Components/SkeletalMeshComponent.h"

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
        ConcussionSphere();
    }
    //destroy the card on impact
    Destroy();
}

void AConcussiveProjectileCard::ConcussionSphere()
{
    //DrawDebugSphere(GetWorld(), GetActorLocation(), CardSlowTimeRadius, 32, FColor::Blue, true, 100.0f);
    //find enemies in range
    AffectedEnemies = FindActorsInRange(ABaseAIClass::StaticClass(), CardExplosionRadius);
    for(AActor* Actor : AffectedEnemies)
    {
        //cast to baseaiclass to get access to enemy methods
        ABaseAIClass* Enemy = Cast<ABaseAIClass>(Actor);
        //set ragdoll mode on with target time
        Enemy->SetRagdollMode(true, RagdollTime);
        //calculate direction of force from card
        FVector ImpulseDirection = Enemy->GetActorLocation() - GetActorLocation();
        //DrawDebugLine(GetWorld(), GetActorLocation(), Enemy->GetActorLocation(), FColor::Red, false, 1000.0f);
        //normalise vector to perform accurate force application
        ImpulseDirection.Normalize();
        //apply force to target pelvis to get most centred movement
        Enemy->GetMesh()->AddImpulse(ImpulseDirection * CardPushForce, FName(TEXT("pelvis")), true);
    }
}