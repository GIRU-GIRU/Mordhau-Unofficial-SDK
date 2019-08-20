#pragma once

#include "CoreMinimal.h"
#include "PseudoVehicleMovementComponent.generated.h"

UCLASS()
class UPseudoVehicleMovementComponent : public UAdvancedCharacterMovement
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UPrimitiveComponent*> SecondaryStepCapableComponents;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TurningVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* TurningBrakeAccelerationByVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* TurningFactorByVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* TurningAccelerationByVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TurningFactorScaleAirborne;


};