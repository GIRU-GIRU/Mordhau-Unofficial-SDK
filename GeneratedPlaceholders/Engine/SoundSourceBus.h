#pragma once

#include "CoreMinimal.h"
#include "SoundSourceBus.generated.h"

UCLASS()
class USoundSourceBus : public USoundWave
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	ESourceBusChannels SourceBusChannels;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SourceBusDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAutoDeactivateWhenSilent : 1;


};