#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleMeshRotationRate_Seeded.generated.h"

UCLASS()
class UParticleModuleMeshRotationRate_Seeded : public UParticleModuleMeshRotationRate
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FParticleRandomSeedInfo RandomSeedInfo;


};