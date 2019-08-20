#pragma once

#include "CoreMinimal.h"
#include "FixedFrameRateCustomTimeStep.generated.h"

UCLASS()
class UFixedFrameRateCustomTimeStep : public UEngineCustomTimeStep
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FFrameRate FixedFrameRate;


};