#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleSize_Seeded.generated.h"

UCLASS()
class UParticleModuleSize_Seeded : public UParticleModuleSize
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FParticleRandomSeedInfo RandomSeedInfo;


};