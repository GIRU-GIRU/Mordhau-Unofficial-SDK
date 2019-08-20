#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleAccelerationConstant.generated.h"

UCLASS()
class UParticleModuleAccelerationConstant : public UParticleModuleAccelerationBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector Acceleration;


};