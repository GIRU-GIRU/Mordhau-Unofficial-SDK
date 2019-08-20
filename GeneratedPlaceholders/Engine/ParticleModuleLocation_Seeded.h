#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleLocation_Seeded.generated.h"

UCLASS()
class UParticleModuleLocation_Seeded : public UParticleModuleLocation
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FParticleRandomSeedInfo RandomSeedInfo;


};