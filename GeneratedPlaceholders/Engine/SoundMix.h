#pragma once

#include "CoreMinimal.h"
#include "SoundMix.generated.h"

UCLASS()
class USoundMix : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bApplyEQ : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float EQPriority;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAudioEQEffect EQSettings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FSoundClassAdjuster> SoundClassEffects;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float InitialDelay;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FadeInTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Duration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FadeOutTime;


};