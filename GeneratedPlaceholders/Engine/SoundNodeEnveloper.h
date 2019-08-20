#pragma once

#include "CoreMinimal.h"
#include "SoundNodeEnveloper.generated.h"

UCLASS()
class USoundNodeEnveloper : public USoundNode
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LoopStart;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LoopEnd;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DurationAfterLoop;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int LoopCount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bLoopIndefinitely : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bLoop : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UDistributionFloatConstantCurve* VolumeInterpCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UDistributionFloatConstantCurve* PitchInterpCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRuntimeFloatCurve VolumeCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRuntimeFloatCurve PitchCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PitchMin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PitchMax;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float VolumeMin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float VolumeMax;


};