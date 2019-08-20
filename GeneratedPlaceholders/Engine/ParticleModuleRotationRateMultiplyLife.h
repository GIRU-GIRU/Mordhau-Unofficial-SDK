#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleRotationRateMultiplyLife.generated.h"

UCLASS()
class UParticleModuleRotationRateMultiplyLife : public UParticleModuleRotationRateBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat LifeMultiplier;


};