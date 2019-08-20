#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleParameterDynamic_Seeded.generated.h"

UCLASS()
class UParticleModuleParameterDynamic_Seeded : public UParticleModuleParameterDynamic
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FParticleRandomSeedInfo RandomSeedInfo;


};