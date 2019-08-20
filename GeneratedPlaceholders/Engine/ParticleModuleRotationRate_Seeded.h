#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleRotationRate_Seeded.generated.h"

UCLASS()
class UParticleModuleRotationRate_Seeded : public UParticleModuleRotationRate
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FParticleRandomSeedInfo RandomSeedInfo;


};