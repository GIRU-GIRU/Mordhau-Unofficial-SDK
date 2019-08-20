#pragma once

#include "CoreMinimal.h"
#include "EyeTrackerFunctionLibrary.generated.h"

UCLASS()
class UEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "EyeTrackerFunctionLibrary")
	void STATIC_SetEyeTrackedPlayer(class APlayerController* PlayerController);
	UFUNCTION(BlueprintCallable, Category = "EyeTrackerFunctionLibrary")
		bool STATIC_IsStereoGazeDataAvailable();
	UFUNCTION(BlueprintCallable, Category = "EyeTrackerFunctionLibrary")
		bool STATIC_IsEyeTrackerConnected();
	UFUNCTION(BlueprintCallable, Category = "EyeTrackerFunctionLibrary")
		bool STATIC_GetStereoGazeData(struct FEyeTrackerStereoGazeData* OutGazeData);
	UFUNCTION(BlueprintCallable, Category = "EyeTrackerFunctionLibrary")
		bool STATIC_GetGazeData(struct FEyeTrackerGazeData* OutGazeData);

};