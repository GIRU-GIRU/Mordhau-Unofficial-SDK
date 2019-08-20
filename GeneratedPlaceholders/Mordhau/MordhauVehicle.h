#pragma once

#include "CoreMinimal.h"
#include "MordhauVehicle.generated.h"

UCLASS()
class AMordhauVehicle : public AAdvancedCharacter
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bWasEverDriven;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CurrentUnusedTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bTickDriverAnimsAfterOurs;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseVisualPingCompensationOnAttacks;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bWillDieIfUnused;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinTimeToStartUnusedDying;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnusedDyingHealthReduction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float UnusedDyingHealthReductionInterval;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bCanDriverRegenHealth;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bCanDriverRegenStamina;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinimumInteractableVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxDistanceCorrectionForLeaveSpot;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDisableCameraDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseDriverTurnCaps;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bCounteractTurnWithSecondaryTurn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bResetSecondaryTurnWhenNoDriver;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bResetLookUpWhenNoDriver;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SecondaryTurnValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SecondaryTurnLimit;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char ReplicatedSecondaryTurnValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SecondaryTurnValueSmoothingTarget;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SecondaryTurnValueSmoothingFrom;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SecondaryTurnValueSmoothingStartTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AMordhauCharacter* Driver;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FText VehicleName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName AttachSocketName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FTransform AttachSocketOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName DetachSocketName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseDetachRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bLeaveOnDamage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDisarmOnEnter;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName MainAnimationType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinXYDistanceToEnter;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D MinZDistanceToEnter;

	UFUNCTION(BlueprintCallable, Category = "MordhauVehicle")
	void UpdateFPCameraFor(class AMordhauCharacter* Character, float DeltaSeconds, bool bRotationOnly);
	UFUNCTION(BlueprintCallable, Category = "MordhauVehicle")
		void UpdateAnimationFor(class AMordhauCharacter* Character, class UMordhauAnimInstance* AnimInst, float DeltaTime);
	UFUNCTION(BlueprintCallable, Category = "MordhauVehicle")
		void StopDriving();
	UFUNCTION(BlueprintCallable, Category = "MordhauVehicle")
		void StartDriving(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "MordhauVehicle")
		void SetDriver(class AMordhauCharacter* NewDriver);
	UFUNCTION(BlueprintCallable, Category = "MordhauVehicle")
		void ServerSecondaryTurn(float NewTurn);
	UFUNCTION(BlueprintCallable, Category = "MordhauVehicle")
		void SecondaryTurnAtRate(float Value);
	UFUNCTION(BlueprintCallable, Category = "MordhauVehicle")
		void SecondaryTurn(float Value, bool bIsAbsolute);
	UFUNCTION(BlueprintCallable, Category = "MordhauVehicle")
		void RequestUse();
	UFUNCTION(BlueprintCallable, Category = "MordhauVehicle")
		struct FPOV PostProcessCameraPOV(const struct FPOV& InPOV);
	UFUNCTION(BlueprintCallable, Category = "MordhauVehicle")
		float OverrideAttackAngle(class UAttackMotion* Motion);
	UFUNCTION(BlueprintCallable, Category = "MordhauVehicle")
		void OnStoppedDriving(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "MordhauVehicle")
		void OnStartedDriving(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "MordhauVehicle")
		void OnRep_ReplicatedSecondaryTurnValue();
	UFUNCTION(BlueprintCallable, Category = "MordhauVehicle")
		void KnockOffDriver(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "MordhauVehicle")
		struct FVehicleTransitionInfo GetVehicleLeaveInfo(class AMordhauCharacter* Character, const struct FTransform& FromTransform);
	UFUNCTION(BlueprintCallable, Category = "MordhauVehicle")
		struct FVehicleTransitionInfo GetVehicleEnterInfo(class AMordhauCharacter* Character, const struct FTransform& FromTransform);
	UFUNCTION(BlueprintCallable, Category = "MordhauVehicle")
		struct FTransform GetExitTransform();
	UFUNCTION(BlueprintCallable, Category = "MordhauVehicle")
		void DriverLateTick(class AMordhauCharacter* FromDriver, float DeltaTime);
	UFUNCTION(BlueprintCallable, Category = "MordhauVehicle")
		bool CanDrive(class AMordhauCharacter* Character);

};