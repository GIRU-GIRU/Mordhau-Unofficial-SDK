#pragma once

#include "CoreMinimal.h"
#include "AudioCaptureComponent.generated.h"

UCLASS()
class UAudioCaptureComponent : public USynthComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int JitterLatencyFrames;


};