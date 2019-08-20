#pragma once

#include "CoreMinimal.h"
#include "WheeledVehicleMovementComponent4W.generated.h"

UCLASS()
class UWheeledVehicleMovementComponent4W : public UWheeledVehicleMovementComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVehicleEngineData EngineSetup;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVehicleDifferential4WData DifferentialSetup;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVehicleTransmissionData TransmissionSetup;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRuntimeFloatCurve SteeringCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AckermannAccuracy;


};