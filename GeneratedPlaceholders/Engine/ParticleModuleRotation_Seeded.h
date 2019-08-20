#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleRotation_Seeded.generated.h"

UCLASS()
class UParticleModuleRotation_Seeded : public UParticleModuleRotation
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FParticleRandomSeedInfo RandomSeedInfo;


};