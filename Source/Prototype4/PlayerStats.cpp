// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerStats.h"

// Sets default values
APlayerStats::APlayerStats()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerStats::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerStats::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerStats::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

