#pragma once

#include "CoreMinimal.h"
#include "SoundNodeMixer.generated.h"

UCLASS()
class USoundNodeMixer : public USoundNode
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<float> InputVolume;


};