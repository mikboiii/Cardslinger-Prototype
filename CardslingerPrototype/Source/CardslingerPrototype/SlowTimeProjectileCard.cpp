// Fill out your copyright notice in the Description page of Project Settings.


#include "SlowTimeProjectileCard.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "BaseAIClass.h"
#include "NiagaraFunctionLibrary.h"
#include "TimerManager.h"
#include "NiagaraComponent.h"
#include "Engine/DamageEvents.h"
#include "Components/SphereComponent.h"

void ASlowTimeProjectileCard::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor != this)
    {
        SlowTimeSphere();
        //spawn slow fx
        UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), CardImpact, Hit.ImpactPoint, GetActorForwardVector().Rotation(), FVector(ParticleScale), true, true, ENCPoolMethod::None, true);
        SetActorEnableCollision(false);
    }
}

void ASlowTimeProjectileCard::SlowTimeSphere()
{
    DrawDebugSphere(GetWorld(), GetActorLocation(), CardSlowTimeRadius, 32, FColor::Blue, true, 100.0f);
    AffectedEnemies = FindActorsInRange(ABaseAIClass::StaticClass(), CardSlowTimeRadius);
    for(AActor* Actor : AffectedEnemies)
    {
        Actor->CustomTimeDilation = CardSlowDilationValue;
        Cast<ABaseAIClass>(Actor)->EnableSlowEffect(true);
    }
    FTimerHandle TimeResetHandle;
    GetWorldTimerManager().SetTimer(TimeResetHandle, this, &ASlowTimeProjectileCard::ResetTimeDilation, CardSlowDuration);
}

TArray<AActor*> ASlowTimeProjectileCard::FindActorsInRange(UClass* ActorClass, float Radius)
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

void ASlowTimeProjectileCard::ResetTimeDilation()
{
    for(AActor* Actor : AffectedEnemies)
    {
        Actor->CustomTimeDilation = 1.0f;
        Cast<ABaseAIClass>(Actor)->EnableSlowEffect(false);
    }
    DestroyCard();
}