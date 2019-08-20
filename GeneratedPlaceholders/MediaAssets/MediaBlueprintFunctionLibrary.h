#pragma once

#include "CoreMinimal.h"
#include "MediaBlueprintFunctionLibrary.generated.h"

UCLASS()
class UMediaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "MediaBlueprintFunctionLibrary")
	void STATIC_EnumerateWebcamCaptureDevices(int Filter, TArray<struct FMediaCaptureDevice>* OutDevices);
	UFUNCTION(BlueprintCallable, Category = "MediaBlueprintFunctionLibrary")
		void STATIC_EnumerateVideoCaptureDevices(int Filter, TArray<struct FMediaCaptureDevice>* OutDevices);
	UFUNCTION(BlueprintCallable, Category = "MediaBlueprintFunctionLibrary")
		void STATIC_EnumerateAudioCaptureDevices(int Filter, TArray<struct FMediaCaptureDevice>* OutDevices);

};