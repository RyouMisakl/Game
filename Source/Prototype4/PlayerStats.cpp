// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerStats.h"
#include "AnimInstance.generated.h"
#include "Engine/Classes/GameFramework/Character.h"

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

//Plays the animation of the dodge but check the value of the current axis to find out which dodge animation to play 
UAnimMontage* APlayerStats::DodgeFunction(float f_Forward, float f_Right, float& f_Launch, float& f_LaunchSide, UAnimMontage* m_DodgeFrontAnim, UAnimMontage* m_DodgeBackAnim, UAnimMontage* m_DodgeRightAnim, UAnimMontage* m_DodgeLeftAnim) {
	if (b_IsAlive) {
		if (f_Forward > 0 && f_Right != 0.0f && !b_IsDodge) {
			b_IsDodge = true;
			b_CanMove = false;
			b_CanAttack = false;
			f_Launch = 1500.0f;
			return m_DodgeFrontAnim;
		}
		if (f_Forward < 0 && f_Right != 0.0f && !b_IsDodge) {
			b_IsDodge = true;
			b_CanMove = false;
			b_CanAttack = false;
			f_Launch = -1500.0f;
			return m_DodgeBackAnim;
		}
		if(f_Forward != 0 && f_Right > 0.0f && !b_IsDodge) {
			b_IsDodge = true;
			b_CanMove = false;
			b_CanAttack = false;
			f_LaunchSide = 1500.0f;
			return m_DodgeRightAnim;
		}
		if (f_Forward != 0 && f_Right < 0.0f && !b_IsDodge) {
			b_IsDodge = true;
			b_CanMove = false;
			b_CanAttack = false;
			f_LaunchSide = -1500.0f;
			return m_DodgeLeftAnim;
		}
	}
}

