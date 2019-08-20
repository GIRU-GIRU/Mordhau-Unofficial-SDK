#pragma once

#include "CoreMinimal.h"
#include "MovieSceneCaptureEnvironment.generated.h"

UCLASS()
class UMovieSceneCaptureEnvironment : public UObject
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "MovieSceneCaptureEnvironment")
	int STATIC_GetCaptureFrameNumber();
	UFUNCTION(BlueprintCallable, Category = "MovieSceneCaptureEnvironment")
		float STATIC_GetCaptureElapsedTime();

};