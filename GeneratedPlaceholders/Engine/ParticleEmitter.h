#pragma once

#include "CoreMinimal.h"
#include "ParticleEmitter.generated.h"

UCLASS()
class UParticleEmitter : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName EmitterName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SubUVDataOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EEmitterRenderMode> EmitterRenderMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UParticleLODLevel*> LODLevels;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char ConvertedModules : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int PeakActiveParticles;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int InitialAllocationCount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MediumDetailSpawnRateScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float QualityLevelSpawnRateScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EDetailMode> DetailMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t DetailModeBitmask;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsSoloing : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCookedOut : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDisabledLODsKeepEmitterAlive : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDisableWhenInsignficant : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EParticleSignificanceLevel SignificanceLevel;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseLegacySpawningBehavior : 1;


};