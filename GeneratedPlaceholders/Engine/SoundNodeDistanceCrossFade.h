#pragma once

#include "CoreMinimal.h"
#include "SoundNodeDistanceCrossFade.generated.h"

UCLASS()
class USoundNodeDistanceCrossFade : public USoundNode
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FDistanceDatum> CrossFadeInput;


};