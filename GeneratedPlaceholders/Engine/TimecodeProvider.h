#pragma once

#include "CoreMinimal.h"
#include "TimecodeProvider.generated.h"

UCLASS()
class UTimecodeProvider : public UObject
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "TimecodeProvider")
	struct FTimecode GetTimecode();
	UFUNCTION(BlueprintCallable, Category = "TimecodeProvider")
		ETimecodeProviderSynchronizationState GetSynchronizationState();
	UFUNCTION(BlueprintCallable, Category = "TimecodeProvider")
		struct FFrameRate GetFrameRate();

};