#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleVelocity_Seeded.generated.h"

UCLASS()
class UParticleModuleVelocity_Seeded : public UParticleModuleVelocity
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FParticleRandomSeedInfo RandomSeedInfo;


};