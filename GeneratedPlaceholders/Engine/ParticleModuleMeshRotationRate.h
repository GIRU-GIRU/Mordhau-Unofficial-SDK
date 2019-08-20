#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleMeshRotationRate.generated.h"

UCLASS()
class UParticleModuleMeshRotationRate : public UParticleModuleRotationRateBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionVector StartRotationRate;


};