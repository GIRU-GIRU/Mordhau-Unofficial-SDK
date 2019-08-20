#pragma once

#include "CoreMinimal.h"
#include "SoundNodeConcatenator.generated.h"

UCLASS()
class USoundNodeConcatenator : public USoundNode
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<float> InputVolume;


};