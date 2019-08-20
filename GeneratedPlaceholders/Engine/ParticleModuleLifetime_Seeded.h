#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleLifetime_Seeded.generated.h"

UCLASS()
class UParticleModuleLifetime_Seeded : public UParticleModuleLifetime
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FParticleRandomSeedInfo RandomSeedInfo;


};