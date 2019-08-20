#pragma once

#include "CoreMinimal.h"
#include "SoundEffectSourcePresetChain.generated.h"

UCLASS()
class USoundEffectSourcePresetChain : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FSourceEffectChainEntry> Chain;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bPlayEffectChainTails : 1;


};