#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleRotationRate.generated.h"

UCLASS()
class UParticleModuleRotationRate : public UParticleModuleRotationRateBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat StartRotationRate;


};