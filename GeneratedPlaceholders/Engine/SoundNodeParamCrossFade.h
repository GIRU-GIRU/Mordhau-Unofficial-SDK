#pragma once

#include "CoreMinimal.h"
#include "SoundNodeParamCrossFade.generated.h"

UCLASS()
class USoundNodeParamCrossFade : public USoundNodeDistanceCrossFade
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName ParamName;


};