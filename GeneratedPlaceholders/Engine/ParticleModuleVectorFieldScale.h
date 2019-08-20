#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleVectorFieldScale.generated.h"

UCLASS()
class UParticleModuleVectorFieldScale : public UParticleModuleVectorFieldBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UDistributionFloat* VectorFieldScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat VectorFieldScaleRaw;


};