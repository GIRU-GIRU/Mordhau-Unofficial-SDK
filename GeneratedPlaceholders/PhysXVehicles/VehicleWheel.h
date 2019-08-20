#pragma once

#include "CoreMinimal.h"
#include "VehicleWheel.generated.h"

UCLASS()
class UVehicleWheel : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UStaticMesh* CollisionMesh;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDontCreateShape;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAutoAdjustCollisionSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector Offset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ShapeRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ShapeWidth;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Mass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DampingRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SteerAngle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAffectedByHandbrake;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTireType* TireType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTireConfig* TireConfig;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LatStiffMaxLoad;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LatStiffValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LongStiffValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SuspensionForceOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SuspensionMaxRaise;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SuspensionMaxDrop;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SuspensionNaturalFrequency;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SuspensionDampingRatio;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EWheelSweepType> SweepType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxBrakeTorque;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxHandBrakeTorque;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UWheeledVehicleMovementComponent* VehicleSim;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int WheelIndex;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DebugLongSlip;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DebugLatSlip;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DebugNormalizedTireLoad;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DebugWheelTorque;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DebugLongForce;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DebugLatForce;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector Location;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector OldLocation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector Velocity;

	UFUNCTION(BlueprintCallable, Category = "VehicleWheel")
	bool IsInAir();
	UFUNCTION(BlueprintCallable, Category = "VehicleWheel")
		float GetSuspensionOffset();
	UFUNCTION(BlueprintCallable, Category = "VehicleWheel")
		float GetSteerAngle();
	UFUNCTION(BlueprintCallable, Category = "VehicleWheel")
		float GetRotationAngle();

};