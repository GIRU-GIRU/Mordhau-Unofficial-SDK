#pragma once

#include "CoreMinimal.h"
#include "WheeledVehicleMovementComponent.generated.h"

UCLASS()
class UWheeledVehicleMovementComponent : public UPawnMovementComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDeprecatedSpringOffsetMode : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FWheelSetup> WheelSetups;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Mass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DragCoefficient;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ChassisWidth;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ChassisHeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bReverseAsBrake;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DragArea;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float EstimatedMaxEngineSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxEngineRPM;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DebugDragMagnitude;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector InertiaTensorScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinNormalizedTireLoad;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinNormalizedTireLoadFiltered;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxNormalizedTireLoad;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxNormalizedTireLoadFiltered;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ThresholdLongitudinalSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int LowForwardSpeedSubStepCount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int HighForwardSpeedSubStepCount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UVehicleWheel*> Wheels;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseRVOAvoidance : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RVOAvoidanceRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RVOAvoidanceHeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AvoidanceConsiderationRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RVOSteeringStep;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RVOThrottleStep;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int AvoidanceUID;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FNavAvoidanceMask AvoidanceGroup;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FNavAvoidanceMask GroupsToAvoid;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FNavAvoidanceMask GroupsToIgnore;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AvoidanceWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector PendingLaunchVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FReplicatedVehicleState ReplicatedState;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RawSteeringInput;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RawThrottleInput;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RawBrakeInput;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRawHandbrakeInput : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRawGearUpInput : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRawGearDownInput : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SteeringInput;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ThrottleInput;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BrakeInput;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HandbrakeInput;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float IdleBrakeInput;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StopThreshold;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float WrongDirectionThreshold;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVehicleInputRate ThrottleInputRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVehicleInputRate BrakeInputRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVehicleInputRate HandbrakeInputRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVehicleInputRate SteeringInputRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bWasAvoidanceUpdated : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AController* OverrideController;

	UFUNCTION(BlueprintCallable, Category = "WheeledVehicleMovementComponent")
	void SetUseAutoGears(bool bUseAuto);
	UFUNCTION(BlueprintCallable, Category = "WheeledVehicleMovementComponent")
		void SetThrottleInput(float Throttle);
	UFUNCTION(BlueprintCallable, Category = "WheeledVehicleMovementComponent")
		void SetTargetGear(int GearNum, bool bImmediate);
	UFUNCTION(BlueprintCallable, Category = "WheeledVehicleMovementComponent")
		void SetSteeringInput(float Steering);
	UFUNCTION(BlueprintCallable, Category = "WheeledVehicleMovementComponent")
		void SetHandbrakeInput(bool bNewHandbrake);
	UFUNCTION(BlueprintCallable, Category = "WheeledVehicleMovementComponent")
		void SetGroupsToIgnoreMask(const struct FNavAvoidanceMask& GroupMask);
	UFUNCTION(BlueprintCallable, Category = "WheeledVehicleMovementComponent")
		void SetGroupsToIgnore(int GroupFlags);
	UFUNCTION(BlueprintCallable, Category = "WheeledVehicleMovementComponent")
		void SetGroupsToAvoidMask(const struct FNavAvoidanceMask& GroupMask);
	UFUNCTION(BlueprintCallable, Category = "WheeledVehicleMovementComponent")
		void SetGroupsToAvoid(int GroupFlags);
	UFUNCTION(BlueprintCallable, Category = "WheeledVehicleMovementComponent")
		void SetGearUp(bool bNewGearUp);
	UFUNCTION(BlueprintCallable, Category = "WheeledVehicleMovementComponent")
		void SetGearDown(bool bNewGearDown);
	UFUNCTION(BlueprintCallable, Category = "WheeledVehicleMovementComponent")
		void SetBrakeInput(float Brake);
	UFUNCTION(BlueprintCallable, Category = "WheeledVehicleMovementComponent")
		void SetAvoidanceGroupMask(const struct FNavAvoidanceMask& GroupMask);
	UFUNCTION(BlueprintCallable, Category = "WheeledVehicleMovementComponent")
		void SetAvoidanceGroup(int GroupFlags);
	UFUNCTION(BlueprintCallable, Category = "WheeledVehicleMovementComponent")
		void SetAvoidanceEnabled(bool bEnable);
	UFUNCTION(BlueprintCallable, Category = "WheeledVehicleMovementComponent")
		void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int CurrentGear);
	UFUNCTION(BlueprintCallable, Category = "WheeledVehicleMovementComponent")
		bool GetUseAutoGears();
	UFUNCTION(BlueprintCallable, Category = "WheeledVehicleMovementComponent")
		int GetTargetGear();
	UFUNCTION(BlueprintCallable, Category = "WheeledVehicleMovementComponent")
		float GetForwardSpeed();
	UFUNCTION(BlueprintCallable, Category = "WheeledVehicleMovementComponent")
		float GetEngineRotationSpeed();
	UFUNCTION(BlueprintCallable, Category = "WheeledVehicleMovementComponent")
		float GetEngineMaxRotationSpeed();
	UFUNCTION(BlueprintCallable, Category = "WheeledVehicleMovementComponent")
		int GetCurrentGear();

};