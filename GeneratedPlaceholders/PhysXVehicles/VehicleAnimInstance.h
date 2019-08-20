#pragma once

#include "CoreMinimal.h"
#include "VehicleAnimInstance.generated.h"

UCLASS()
class UVehicleAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UWheeledVehicleMovementComponent* WheeledVehicleMovementComponent;

	UFUNCTION(BlueprintCallable, Category = "VehicleAnimInstance")
	class AWheeledVehicle* GetVehicle();

};