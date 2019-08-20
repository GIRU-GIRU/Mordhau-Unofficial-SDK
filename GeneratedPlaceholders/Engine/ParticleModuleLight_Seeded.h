#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleLight_Seeded.generated.h"

UCLASS()
class UParticleModuleLight_Seeded : public UParticleModuleLight
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FParticleRandomSeedInfo RandomSeedInfo;


};