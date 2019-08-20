#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleAcceleration.generated.h"

UCLASS()
class UParticleModuleAcceleration : public UParticleModuleAccelerationBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionVector Acceleration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bApplyOwnerScale : 1;


};