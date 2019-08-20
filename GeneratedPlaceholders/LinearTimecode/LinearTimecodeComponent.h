#pragma once

#include "CoreMinimal.h"
#include "LinearTimecodeComponent.generated.h"

UCLASS()
class ULinearTimecodeComponent : public USceneComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FDropTimecode DropTimecode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnTimecodeChange;

	UFUNCTION(BlueprintCallable, Category = "LinearTimecodeComponent")
	void STATIC_SetDropTimecodeFrameNumber(const struct FDropTimecode& Timecode, int FrameNumber, struct FDropTimecode* OutTimecode);
	UFUNCTION(BlueprintCallable, Category = "LinearTimecodeComponent")
		void STATIC_GetDropTimeCodeFrameNumber(const struct FDropTimecode& Timecode, int* FrameNumber);
	UFUNCTION(BlueprintCallable, Category = "LinearTimecodeComponent")
		int GetDropFrameNumber();

};