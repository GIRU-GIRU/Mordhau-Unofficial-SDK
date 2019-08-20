#pragma once

#include "CoreMinimal.h"
#include "HapticFeedbackEffect_SoundWave.generated.h"

UCLASS()
class UHapticFeedbackEffect_SoundWave : public UHapticFeedbackEffect_Base
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundWave* SoundWave;


};