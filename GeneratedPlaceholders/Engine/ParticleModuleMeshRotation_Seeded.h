#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleMeshRotation_Seeded.generated.h"

UCLASS()
class UParticleModuleMeshRotation_Seeded : public UParticleModuleMeshRotation
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FParticleRandomSeedInfo RandomSeedInfo;


};