#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleSize.generated.h"

UCLASS()
class UParticleModuleSize : public UParticleModuleSizeBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionVector StartSize;


};