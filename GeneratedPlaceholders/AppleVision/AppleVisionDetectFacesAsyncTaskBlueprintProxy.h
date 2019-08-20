#pragma once

#include "CoreMinimal.h"
#include "AppleVisionDetectFacesAsyncTaskBlueprintProxy.generated.h"

UCLASS()
class UAppleVisionDetectFacesAsyncTaskBlueprintProxy : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate onSuccess;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate onFailure;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FFaceDetectionResult FaceDetectionResult;

	UFUNCTION(BlueprintCallable, Category = "AppleVisionDetectFacesAsyncTaskBlueprintProxy")
	class UAppleVisionDetectFacesAsyncTaskBlueprintProxy* STATIC_CreateProxyObjectForDetectFaces(class UTexture* SourceImage);

};