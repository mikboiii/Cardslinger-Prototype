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

void ASlowTimeProjectileCard::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    if(FVector::Dist(GetActorLocation(), TargetLocation) == 0 && GetActorEnableCollision()) 
    {
    SlowTimeSphere();
    UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), CardImpact, GetActorLocation(), GetActorForwardVector().Rotation(), FVector(ParticleScale), true, true, ENCPoolMethod::None, true);
    SetActorEnableCollision(false);
    }
}

void ASlowTimeProjectileCard::SlowTimeSphere()
{
    //DrawDebugSphere(GetWorld(), GetActorLocation(), CardSlowTimeRadius, 32, FColor::Blue, true, 100.0f);
    AffectedEnemies = FindActorsInRange(ABaseAIClass::StaticClass(), CardSlowTimeRadius);
    for(AActor* Actor : AffectedEnemies)
    {
        Actor->CustomTimeDilation = CardSlowDilationValue;
        Cast<ABaseAIClass>(Actor)->EnableSlowEffect(true);
    }
    FTimerHandle TimeResetHandle;
    GetWorldTimerManager().SetTimer(TimeResetHandle, this, &ASlowTimeProjectileCard::ResetTimeDilation, CardSlowDuration);
}

void ASlowTimeProjectileCard::ResetTimeDilation()
{
    for(AActor* Actor : AffectedEnemies)
    {
        if(!Actor)
        {
            return;
        }
        Actor->CustomTimeDilation = 1.0f;
        Cast<ABaseAIClass>(Actor)->EnableSlowEffect(false);
    }
    DestroyCard();
}