// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerBase.generated.h"


UCLASS()
class CHALLENGE_API APlayerBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UPawnNoiseEmitterComponent* PawnNoiseEmitterComponent;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCameraComponent* Camera;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USpringArmComponent* SpringArm;
	
protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SprintMultiplier = 1.4;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float AimSpeedMult = 0.8;;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float BaseMovementSpeed = 450.0;

	
	
private:
	
	virtual void MoveForward(float AxisValue);
	virtual void MoveRight(float AxisValue);
	virtual void Turn(float AxisValue);
	virtual void LookUp(float AxisValue);
	virtual void BeginSprint();
	virtual void EndSprint();
	virtual void BeginAim();
	virtual void EndAim();
	
	
	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool bIsAiming;
	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool bIsSprinting;
	
	
	float DefaultFOV = 90.0f;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta = (AllowPrivateAccess = true))
	float AimFOV = 70.0f;
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta = (AllowPrivateAccess = true))
	float SprintFOV = 110.0f;
	
};
