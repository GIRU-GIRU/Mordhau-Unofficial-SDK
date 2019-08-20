#pragma once

#include "CoreMinimal.h"
#include "TimeManagementBlueprintLibrary.generated.h"

UCLASS()
class UTimeManagementBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "TimeManagementBlueprintLibrary")
	struct FFrameTime STATIC_Multiply_SecondsFrameRate(float TimeInSeconds, const struct FFrameRate& FrameRate);
	UFUNCTION(BlueprintCallable, Category = "TimeManagementBlueprintLibrary")
		struct FTimecode STATIC_GetTimecode();
	UFUNCTION(BlueprintCallable, Category = "TimeManagementBlueprintLibrary")
		struct FString STATIC_Conv_TimecodeToString(const struct FTimecode& InTimecode, bool bForceSignDisplay);
	UFUNCTION(BlueprintCallable, Category = "TimeManagementBlueprintLibrary")
		float STATIC_Conv_QualifiedFrameTimeToSeconds(const struct FQualifiedFrameTime& InFrameTime);
	UFUNCTION(BlueprintCallable, Category = "TimeManagementBlueprintLibrary")
		float STATIC_Conv_FrameRateToSeconds(const struct FFrameRate& InFrameRate);

};