#pragma once

#include "CoreMinimal.h"
#include "SoundNodeWavePlayer.generated.h"

UCLASS()
class USoundNodeWavePlayer : public USoundNodeAssetReferencer
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData00[0x28];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundWave* SoundWave;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData01 : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bLooping : 1;


};