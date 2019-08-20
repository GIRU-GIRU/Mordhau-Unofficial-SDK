#pragma once

#include "CoreMinimal.h"
#include "ReverbEffect.generated.h"

UCLASS()
class UReverbEffect : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Density;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Diffusion;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Gain;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float GainHF;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DecayTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DecayHFRatio;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ReflectionsGain;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ReflectionsDelay;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LateGain;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LateDelay;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AirAbsorptionGainHF;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RoomRolloffFactor;


};