#pragma once

#include "CoreMinimal.h"
#include "SceneCaptureComponent2D.generated.h"

UCLASS()
class USceneCaptureComponent2D : public USceneCaptureComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECameraProjectionMode> ProjectionType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FOVAngle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float OrthoWidth;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTextureRenderTarget2D* TextureTarget;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ESceneCaptureSource> CaptureSource;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ESceneCaptureCompositeMode> CompositeMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FPostProcessSettings PostProcessSettings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PostProcessBlendWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseCustomProjectionMatrix;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMatrix CustomProjectionMatrix;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bEnableClipPlane;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector ClipPlaneBase;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector ClipPlaneNormal;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCameraCutThisFrame : 1;

	UFUNCTION(BlueprintCallable, Category = "SceneCaptureComponent2D")
	void CaptureScene();
	UFUNCTION(BlueprintCallable, Category = "SceneCaptureComponent2D")
		void AddOrUpdateBlendable(const TScriptInterface<class UBlendableInterface>& InBlendableObject, float InWeight);

};