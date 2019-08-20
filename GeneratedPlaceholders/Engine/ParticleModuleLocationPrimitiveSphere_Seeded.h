#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleLocationPrimitiveSphere_Seeded.generated.h"

UCLASS()
class UParticleModuleLocationPrimitiveSphere_Seeded : public UParticleModuleLocationPrimitiveSphere
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FParticleRandomSeedInfo RandomSeedInfo;


};