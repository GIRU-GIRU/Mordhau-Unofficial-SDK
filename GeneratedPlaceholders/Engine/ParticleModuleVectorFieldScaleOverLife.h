#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleVectorFieldScaleOverLife.generated.h"

UCLASS()
class UParticleModuleVectorFieldScaleOverLife : public UParticleModuleVectorFieldBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UDistributionFloat* VectorFieldScaleOverLife;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat VectorFieldScaleOverLifeRaw;


};