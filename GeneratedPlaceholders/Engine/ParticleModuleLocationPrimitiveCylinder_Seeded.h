#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleLocationPrimitiveCylinder_Seeded.generated.h"

UCLASS()
class UParticleModuleLocationPrimitiveCylinder_Seeded : public UParticleModuleLocationPrimitiveCylinder
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FParticleRandomSeedInfo RandomSeedInfo;


};