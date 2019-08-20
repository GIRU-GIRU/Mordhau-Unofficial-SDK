#pragma once

#include "CoreMinimal.h"
#include "PhysicsVolume.generated.h"

UCLASS()
class APhysicsVolume : public AVolume
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TerminalVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int Priority;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FluidFriction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bWaterVolume : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bPhysicsOnContact : 1;


};