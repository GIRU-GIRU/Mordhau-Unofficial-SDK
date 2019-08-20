#pragma once

#include "CoreMinimal.h"
#include "WheeledVehicle.generated.h"

UCLASS()
class AWheeledVehicle : public APawn
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMeshComponent* Mesh;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UWheeledVehicleMovementComponent* VehicleMovement;


};