#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleRotationOverLifetime.generated.h"

UCLASS()
class UParticleModuleRotationOverLifetime : public UParticleModuleRotationBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat RotationOverLife;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char Scale : 1;


};