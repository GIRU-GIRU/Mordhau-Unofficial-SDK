#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleLocationWorldOffset_Seeded.generated.h"

UCLASS()
class UParticleModuleLocationWorldOffset_Seeded : public UParticleModuleLocationWorldOffset
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FParticleRandomSeedInfo RandomSeedInfo;


};