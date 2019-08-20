#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleMeshRotationRateMultiplyLife.generated.h"

UCLASS()
class UParticleModuleMeshRotationRateMultiplyLife : public UParticleModuleRotationRateBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionVector LifeMultiplier;


};