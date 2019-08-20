#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleSpawn.generated.h"

UCLASS()
class UParticleModuleSpawn : public UParticleModuleSpawnBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat Rate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat RateScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EParticleBurstMethod> ParticleBurstMethod;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FParticleBurst> BurstList;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat BurstScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bApplyGlobalSpawnRateScale : 1;


};