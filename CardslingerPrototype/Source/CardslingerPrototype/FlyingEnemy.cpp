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
	ThisController->GetBlackboardComponent()->SetValueAsFloat(TEXT("SpeedMod"), FlyingSpeedMod);
}

void AFlyingEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	RunTime += DeltaTime;
	float HeightMod = FMath::Sin(RunTime) * 5.0f;
	ThisController->GetBlackboardComponent()->SetValueAsFloat(TEXT("SineVar"), HeightMod);
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

bool AFlyingEnemy::HitTrace(FHitResult& Hit, FVector& ShotDirection)
{
	FVector ViewLocation;
	FRotator ViewRotation;
	//AController* OwnerController = GetOwnerController();
	//if(OwnerController == nullptr) return false;
	//GetController()->GetPlayerViewPoint(ViewLocation, ViewRotation);

	ViewLocation = GetActorLocation();
	ViewRotation  = GetActorRotation();

	FVector PlayerLocation = PlayerActor->GetActorLocation();
	FVector PlayerVelocty = PlayerActor->GetVelocity();
	//calculate distance from enemy to player
	float Distance = FVector::Dist(ViewLocation, PlayerLocation);
	//calculate estimated time taken (in seconds) for bullet to travel the required distance
	float BulletTravelTime = Distance / BulletSpeed;

	//calculate the position of where the bullet needs to be based on where the player will be and how fast the bullet travels
	FVector PredictedLocation = PlayerLocation + (PlayerVelocty * BulletTravelTime);

	//aim shot at where the player is going to be based on movement (can be messy with short bursts of very fast movement)
	if(bIsPredictiveAiming) ShotDirection = (PredictedLocation - ViewLocation).GetSafeNormal();
	//otherwise shoot directly forward
	else ShotDirection = PlayerLocation - ViewLocation;
	//calculate end of linetrace to determine shot viability
	FVector End = ViewLocation + ShotDirection * MaxRange;
	//create parameter list for ignored actors (prevent wacky bullet collision)
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);
	Params.AddIgnoredActor(GetOwner());
	
	//DrawDebugLine(GetWorld(), ViewLocation, End, FColor::Red, true, 100.0f);

	//shoot line trace
	return GetWorld()->LineTraceSingleByChannel(Hit, ViewLocation, End, ECollisionChannel::ECC_GameTraceChannel1, Params);
}