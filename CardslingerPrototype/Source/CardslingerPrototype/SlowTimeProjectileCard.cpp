// Fill out your copyright notice in the Description page of Project Settings.


#include "SlowTimeProjectileCard.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "BaseAIClass.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "Engine/DamageEvents.h"
#include "Components/SphereComponent.h"

void ASlowTimeProjectileCard::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
    UE_LOG(LogTemp, Display, TEXT("Card impact"));
	if (OtherActor != this)
    {
        SlowTimeSphere();
        //spawn slow fx
        UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), CardImpact, Hit.ImpactPoint, GetActorForwardVector().Rotation(), FVector(ParticleScale), true, true, ENCPoolMethod::None, true);
    }
}

void ASlowTimeProjectileCard::SlowTimeSphere()
{
    DrawDebugSphere(GetWorld(), GetActorLocation(), CardSlowTimeRadius, 32, FColor::Blue, true, 100.0f);
    TArray<AActor*> AffectedEnemies = FindActorsInRange(ABaseAIClass::StaticClass(), CardSlowTimeRadius);
    for(AActor* Actor : AffectedEnemies)
    {
        UE_LOG(LogTemp, Display, TEXT("Affected enemy: %s"), *Actor->GetActorNameOrLabel());
    }   
}

TArray<AActor*> ASlowTimeProjectileCard::FindActorsInRange(UClass* ActorClass, float Radius)
{
    TArray<AActor*> ActorsInSphere;

    FCollisionShape Sphere = FCollisionShape::MakeSphere(Radius);
    TArray<FOverlapResult> OverlapResults;
    bool bHasOverlaps = GetWorld()->OverlapMultiByObjectType(OverlapResults, GetActorLocation(), FQuat::Identity, 
    FCollisionObjectQueryParams(ECollisionChannel::ECC_WorldDynamic), Sphere);

    if(bHasOverlaps)
    {
        for (const FOverlapResult& Result : OverlapResults)
        {
            if (Result.GetActor() && Result.GetActor()->IsA(ActorClass))
            {
                UE_LOG(LogTemp, Display, TEXT("Actor Checked"));
                ActorsInSphere.Add(Result.GetActor());
            }
        }
    }
    return ActorsInSphere;
}