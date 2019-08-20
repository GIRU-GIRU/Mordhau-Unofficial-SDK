#pragma once

#include "CoreMinimal.h"
#include "SoundNodeModulator.generated.h"

UCLASS()
class USoundNodeModulator : public USoundNode
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PitchMin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PitchMax;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float VolumeMin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float VolumeMax;


};