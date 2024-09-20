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

TArray<AActor*> AConcussiveProjectileCard::FindActorsInRange(UClass* ActorClass, float Radius)
{
    TArray<AActor*> OverlappingActors;
    TArray<AActor*> FoundActors;

    // Perform the sphere overlap
    bool bHasOverlaps = UKismetSystemLibrary::SphereOverlapActors(
        this,
        GetActorLocation(),
        Radius,
        { EObjectTypeQuery::ObjectTypeQuery3 }, // ObjectTypeQuery3 is WorldDynamic by default, adjust as needed
        ActorClass,
        TArray<AActor*>(), // Actors to ignore
        OverlappingActors
    );

    if (bHasOverlaps)
    {
        for (AActor* Actor : OverlappingActors)
        {
            if (Actor && Actor->IsA(ActorClass))
            {
                FoundActors.Add(Actor);
            }
        }
    }

    return FoundActors;
}

void AConcussiveProjectileCard::ConcussionSphere()
{
    //DrawDebugSphere(GetWorld(), GetActorLocation(), CardSlowTimeRadius, 32, FColor::Blue, true, 100.0f);
    AffectedEnemies = FindActorsInRange(ABaseAIClass::StaticClass(), CardExplosionRadius);
    for(AActor* Actor : AffectedEnemies)
    {
        ABaseAIClass* Enemy = Cast<ABaseAIClass>(Actor);
        Enemy->SetRagdollMode(true, 2.0f);
        FVector ImpulseDirection = Enemy->GetActorLocation() - GetActorLocation();
        ImpulseDirection.Normalize();
        Enemy->GetMesh()->AddImpulse(ImpulseDirection * CardPushForce);
    }
}