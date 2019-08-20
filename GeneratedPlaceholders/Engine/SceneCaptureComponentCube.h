#pragma once

#include "CoreMinimal.h"
#include "SceneCaptureComponentCube.generated.h"

UCLASS()
class USceneCaptureComponentCube : public USceneCaptureComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTextureRenderTargetCube* TextureTarget;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTextureRenderTargetCube* TextureTargetLeft;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTextureRenderTargetCube* TextureTargetRight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTextureRenderTarget2D* TextureTargetODS;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float IPD;

	UFUNCTION(BlueprintCallable, Category = "SceneCaptureComponentCube")
	void CaptureScene();

};