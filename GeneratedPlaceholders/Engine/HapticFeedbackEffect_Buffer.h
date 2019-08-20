#pragma once

#include "CoreMinimal.h"
#include "HapticFeedbackEffect_Buffer.generated.h"

UCLASS()
class UHapticFeedbackEffect_Buffer : public UHapticFeedbackEffect_Base
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<unsigned char> Amplitudes;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SampleRate;


};