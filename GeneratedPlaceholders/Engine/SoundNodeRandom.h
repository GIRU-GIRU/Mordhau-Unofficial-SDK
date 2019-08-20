#pragma once

#include "CoreMinimal.h"
#include "SoundNodeRandom.generated.h"

UCLASS()
class USoundNodeRandom : public USoundNode
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<float> Weights;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int PreselectAtLevelLoad;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShouldExcludeFromBranchCulling : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSoundCueExcludedFromBranchCulling : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRandomizeWithoutReplacement : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<bool> HasBeenUsed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NumRandomUsed;


};