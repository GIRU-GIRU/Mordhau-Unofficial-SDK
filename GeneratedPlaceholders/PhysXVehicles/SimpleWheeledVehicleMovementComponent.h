#pragma once

#include "CoreMinimal.h"
#include "SimpleWheeledVehicleMovementComponent.generated.h"

UCLASS()
class USimpleWheeledVehicleMovementComponent : public UWheeledVehicleMovementComponent
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "SimpleWheeledVehicleMovementComponent")
	void SetSteerAngle(float SteerAngle, int WheelIndex);
	UFUNCTION(BlueprintCallable, Category = "SimpleWheeledVehicleMovementComponent")
		void SetDriveTorque(float DriveTorque, int WheelIndex);
	UFUNCTION(BlueprintCallable, Category = "SimpleWheeledVehicleMovementComponent")
		void SetBrakeTorque(float BrakeTorque, int WheelIndex);

};