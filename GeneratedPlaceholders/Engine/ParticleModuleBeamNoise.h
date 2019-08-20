#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleBeamNoise.generated.h"

UCLASS()
class UParticleModuleBeamNoise : public UParticleModuleBeamBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bLowFreq_Enabled : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int Frequency;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int Frequency_LowRange;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionVector NoiseRange;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat NoiseRangeScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bNRScaleEmitterTime : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionVector NoiseSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSmooth : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NoiseLockRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bNoiseLock : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOscillate : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NoiseLockTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NoiseTension;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseNoiseTangents : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat NoiseTangentStrength;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NoiseTessellation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bTargetNoise : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FrequencyDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bApplyNoiseScale : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat NoiseScale;


};