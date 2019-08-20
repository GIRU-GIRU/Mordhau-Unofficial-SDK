#pragma once

#include "CoreMinimal.h"
#include "FloatingPawnMovement.generated.h"

UCLASS()
class UFloatingPawnMovement : public UPawnMovementComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Acceleration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Deceleration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TurningBoost;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bPositionCorrected : 1;


};