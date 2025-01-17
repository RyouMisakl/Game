// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyBase.h"
#include "GameFramework/PlayerController.h"

// Sets default values
AEnemyBase::AEnemyBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemyBase::BeginPlay()
{
	Super::BeginPlay();
	
	i_StunCount = i_MaxStunCount;

}

// Called every frame
void AEnemyBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemyBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


float AEnemyBase::CheckDistance()
{
  FVector FV_Distance = GetActorLocation() - GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();
  f_Distance = FV_Distance.Size();
  return f_Distance;
}

bool AEnemyBase::CheckIfStun() {
	b_IsStun = true;
	if (i_StunCount <= 0) {
		i_StunCount = i_MaxStunCount;
		return true;
	}
	i_StunCount--;
	return false;
}