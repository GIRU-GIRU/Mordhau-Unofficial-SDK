#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleColor_Seeded.generated.h"

UCLASS()
class UParticleModuleColor_Seeded : public UParticleModuleColor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FParticleRandomSeedInfo RandomSeedInfo;


};