#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleMeshRotationRateOverLife.generated.h"

UCLASS()
class UParticleModuleMeshRotationRateOverLife : public UParticleModuleRotationRateBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionVector RotRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bScaleRotRate : 1;


};