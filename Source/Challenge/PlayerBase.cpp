// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerBase.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "Components/PawnNoiseEmitterComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"


// Sets default values
APlayerBase::APlayerBase()
{
	// 1. Create the Spring Arm first (it's the parent)
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);

	// 2. Create the Camera and attach it to the Spring Arm
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
    
	// 3. Optional: Initialize your Noise Emitter
	PawnNoiseEmitterComponent = CreateDefaultSubobject<UPawnNoiseEmitterComponent>(TEXT("NoiseEmitter"));
}

// Called when the game starts or when spawned
void APlayerBase::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void APlayerBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	float TargetFOV = DefaultFOV;

	if (bIsAiming) 
	{
		TargetFOV = AimFOV;
	}
	else if (bIsSprinting)
	{
		TargetFOV = SprintFOV;
	}

	// 2. Get the current FOV from the camera
	float CurrentFOV = Camera->FieldOfView;

	// 3. Calculate the new smoothed FOV
	float NewFOV = FMath::FInterpTo(CurrentFOV, TargetFOV, DeltaTime, 5);

	// 4. Apply it back to the camera
	Camera->SetFieldOfView(NewFOV);
}

// Called to bind functionality to input
void APlayerBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveForward", this, &APlayerBase::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayerBase::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &APlayerBase::Turn);
	PlayerInputComponent->BindAxis("LookUp", this, &APlayerBase::LookUp);
	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &APlayerBase::BeginSprint);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &APlayerBase::EndSprint);
	PlayerInputComponent->BindAction("Aim", IE_Pressed, this, &APlayerBase::BeginAim);
	PlayerInputComponent->BindAction("Aim", IE_Released, this, &APlayerBase::EndAim);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &APlayerBase::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &APlayerBase::StopJumping);
}

void APlayerBase::MoveForward(float AxisValue)
{
	if (GetCharacterMovement()->MovementMode == EMovementMode::MOVE_Swimming)
	{
		AddMovementInput(Camera->GetForwardVector(), AxisValue);
	}
	else {
		AddMovementInput(GetActorForwardVector(), AxisValue);
	}
}

void APlayerBase::MoveRight(float AxisValue)
{
	if (GetCharacterMovement()->MovementMode == EMovementMode::MOVE_Swimming)
	{
		AddMovementInput(Camera->GetRightVector(), AxisValue);
	}
	else
	{
		AddMovementInput(GetActorRightVector(), AxisValue);
	}
}
void APlayerBase::Turn(float AxisValue)
{
	AddControllerYawInput(AxisValue);
}

void APlayerBase::LookUp(float AxisValue)
{
	AddControllerPitchInput(AxisValue);
}

void APlayerBase::BeginSprint()
{
	bIsSprinting = true;
	GetCharacterMovement()->MaxWalkSpeed *= SprintMultiplier;
}

void APlayerBase::EndSprint()
{
	bIsSprinting = false;
	GetCharacterMovement()->MaxWalkSpeed = BaseMovementSpeed;
}

void APlayerBase::BeginAim()
{
	bIsAiming = true;
	GetCharacterMovement()->MaxWalkSpeed *= AimSpeedMult;
}

void APlayerBase::EndAim()
{
	bIsAiming = false;
	GetCharacterMovement()->MaxWalkSpeed = BaseMovementSpeed;
}
