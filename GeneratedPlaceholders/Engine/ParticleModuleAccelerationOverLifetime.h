#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleAccelerationOverLifetime.generated.h"

UCLASS()
class UParticleModuleAccelerationOverLifetime : public UParticleModuleAccelerationBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionVector AccelOverLife;


};