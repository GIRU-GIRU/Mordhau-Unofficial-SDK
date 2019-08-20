#pragma once

#include "CoreMinimal.h"
#include "HorseMovementComponent.generated.h"

UCLASS()
class UHorseMovementComponent : public UPseudoVehicleMovementComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HeadOnCollisionMinSpeedToRear;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector SoftBubbleEllipseRelativeLocation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SoftBubbleEllipseLength;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SoftBubbleEllipseRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SoftBubbleMaxHeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FrontAndRearCapsuleHalfHeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FrontAndRearCapsuleRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector FrontCapsuleRelativeLocation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector RearCapsuleRelativeLocation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AvoidanceTurningAcceleration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EHorseGear Gear;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FHorseGearInfo> GearInfo;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EHorseGear DesiredGear;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SpeedMultiplierOnBump;


};