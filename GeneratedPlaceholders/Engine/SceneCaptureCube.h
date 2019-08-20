#pragma once

#include "CoreMinimal.h"
#include "SceneCaptureCube.generated.h"

UCLASS()
class ASceneCaptureCube : public ASceneCapture
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USceneCaptureComponentCube* CaptureComponentCube;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UDrawFrustumComponent* DrawFrustum;

	UFUNCTION(BlueprintCallable, Category = "SceneCaptureCube")
	void OnInterpToggle(bool bEnable);

};