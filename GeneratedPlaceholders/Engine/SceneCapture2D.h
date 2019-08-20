#pragma once

#include "CoreMinimal.h"
#include "SceneCapture2D.generated.h"

UCLASS()
class ASceneCapture2D : public ASceneCapture
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USceneCaptureComponent2D* CaptureComponent2D;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UDrawFrustumComponent* DrawFrustum;

	UFUNCTION(BlueprintCallable, Category = "SceneCapture2D")
	void OnInterpToggle(bool bEnable);

};