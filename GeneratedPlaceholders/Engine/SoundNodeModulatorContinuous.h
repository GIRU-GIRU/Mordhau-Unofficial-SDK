#pragma once

#include "CoreMinimal.h"
#include "SoundNodeModulatorContinuous.generated.h"

UCLASS()
class USoundNodeModulatorContinuous : public USoundNode
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FModulatorContinuousParams PitchModulationParams;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FModulatorContinuousParams VolumeModulationParams;


};