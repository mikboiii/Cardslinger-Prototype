// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterBasicEnemy.h"

void AShooterBasicEnemy::AimShot(FVector& ShotLoc, FVector& ShotDir)
{
    Super::AimShot(ShotLoc, ShotDir);

    ShotLoc = GetMesh()->GetBoneLocation(TEXT("gun_barrel"), EBoneSpaces::WorldSpace);
}