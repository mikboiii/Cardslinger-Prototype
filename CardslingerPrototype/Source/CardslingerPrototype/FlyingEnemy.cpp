// Fill out your copyright notice in the Description page of Project Settings.


#include "FlyingEnemy.h"
#include "FlyingAIController.h"

AFlyingEnemy::AFlyingEnemy()
{
	tempBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Debug body"));
	tempBody->SetupAttachment(GetMesh());
}

void AFlyingEnemy::BeginPlay()
{
	Super::BeginPlay();
	ThisController = Cast<AFlyingAIController>(GetController());
}

void AFlyingEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

float AFlyingEnemy::TakeDamage(float DamageAmount, struct FDamageEvent const &DamageEvent, class AController *EventInstigator, AActor* DamageCauser)
{
	//call unreal damage code
    float DamageToApply = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, EventInstigator);
    if(IsDead())
    {
		tempBody->SetSimulatePhysics(true);
    }
    return DamageToApply;
}

void AFlyingEnemy::Shoot()
{
	FHitResult Hit;
	FVector ShotDirection;
	AController* OwnerController = GetController();
	//error catch
	if(OwnerController == nullptr) return;
	//only fire if the shot impacts something or if the enemies have predictive aiming (often aimed into empty space to track moving targets)
	if(HitTrace(Hit, ShotDirection) || bIsPredictiveAiming)
	{

	//i honestly forgot what this code was for but i'm scared to get rid of it:
	//UGameplayStatics::PlaySoundAtLocation(GetWorld(), ImpactSound, Hit.Location);
	//FPointDamageEvent DamageEvent(Damage, Hit, ShotDirection, nullptr);
	//AActor* HitActor = Hit.GetActor();
	//if(HitActor == nullptr) return;
	//HitActor->TakeDamage(Damage, DamageEvent, OwnerController, this);
	//ShotDirection *= -1;

	//get shot spawn location in world space
	ShootLocation = GetActorLocation() + (GetActorForwardVector() * 100.0f);
	//determine the upper and lower bound for aim variance
	float LowerBound = 1 - AccuracyModifier;
	float UpperBound = 1 + AccuracyModifier;
	//create aim offset to mimic innacuracy
	FVector RandomAimOffset = FVector(FMath::RandRange(LowerBound,UpperBound), 
	FMath::RandRange(LowerBound,UpperBound), 
	FMath::RandRange(LowerBound,UpperBound));
	//apply aim variance
	ShotDirection *= RandomAimOffset;
	//spawn bullet and apply transform
	AEnemyProjectile* Projectile = GetWorld()->SpawnActor<AEnemyProjectile>(Bullet, ShootLocation, ShotDirection.Rotation());
	//apply velocity to the bullet
	Projectile->SetBulletSpeed(BulletSpeed);
	//if slow shader is active, enable slow effect for bullet
	//if(GetComponentByClass<UPostProcessComponent>()->bEnabled) Projectile->EnableSlowEffect(true, GetActorTimeDilation());
	//set owner of bullet to this enemy
	Projectile->SetOwnerClass(this);
	//add bullet to list of active bullets
	ActiveBullets.Emplace(Projectile);
	//spawn muzzle flash
	}
}

void AFlyingEnemy::ShootMultiple()
{
	if(bCanShoot)
	{
		//create temp fire cooldown to calculate accurate delay between firing the last shot and the first shot of the next volley
		float TempFireCooldown = FireCooldown;
		for(int32 i = 0; i <= NumberOfShots; i++)
		{
			FTimerHandle StaggerFireHandle;
			//delay each bullet by an incremental timer
			GetWorldTimerManager().SetTimer(StaggerFireHandle, this, &AFlyingEnemy::Shoot, TimePerShot * i);
		}
		TempFireCooldown += TimePerShot * NumberOfShots;
		//set new fire cooldown to reflect actual time between volleys
		//ThisController->GetBlackboardComponent()->SetValueAsFloat(TEXT("FireCooldown"), TempFireCooldown);
		FTimerHandle ReloadHandle;
		bCanShoot = false;
		GetWorldTimerManager().SetTimer(ReloadHandle, this, &AFlyingEnemy::ResetShooting, TempFireCooldown);
	}
}

void AFlyingEnemy::ResetShooting()
{
	bCanShoot = true;
}