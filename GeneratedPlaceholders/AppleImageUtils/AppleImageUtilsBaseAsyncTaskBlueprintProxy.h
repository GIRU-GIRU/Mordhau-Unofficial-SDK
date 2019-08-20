#pragma once

#include "CoreMinimal.h"
#include "AppleImageUtilsBaseAsyncTaskBlueprintProxy.generated.h"

UCLASS()
class UAppleImageUtilsBaseAsyncTaskBlueprintProxy : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate onSuccess;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate onFailure;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAppleImageUtilsImageConversionResult ConversionResult;

	UFUNCTION(BlueprintCallable, Category = "AppleImageUtilsBaseAsyncTaskBlueprintProxy")
	class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* STATIC_CreateProxyObjectForConvertToTIFF(class UTexture* SourceImage, bool bWantColor, bool bUseGpu);
	UFUNCTION(BlueprintCallable, Category = "AppleImageUtilsBaseAsyncTaskBlueprintProxy")
		class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* STATIC_CreateProxyObjectForConvertToPNG(class UTexture* SourceImage, bool bWantColor, bool bUseGpu);
	UFUNCTION(BlueprintCallable, Category = "AppleImageUtilsBaseAsyncTaskBlueprintProxy")
		class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* STATIC_CreateProxyObjectForConvertToJPEG(class UTexture* SourceImage, int Quality, bool bWantColor, bool bUseGpu);
	UFUNCTION(BlueprintCallable, Category = "AppleImageUtilsBaseAsyncTaskBlueprintProxy")
		class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* STATIC_CreateProxyObjectForConvertToHEIF(class UTexture* SourceImage, int Quality, bool bWantColor, bool bUseGpu);

};