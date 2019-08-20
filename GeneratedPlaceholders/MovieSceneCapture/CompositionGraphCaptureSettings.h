#pragma once

#include "CoreMinimal.h"
#include "CompositionGraphCaptureSettings.generated.h"

UCLASS()
class UCompositionGraphCaptureSettings : public UMovieSceneCaptureProtocolSettings
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FCompositionGraphCapturePasses IncludeRenderPasses;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bCaptureFramesInHDR;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int HDRCompressionQuality;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EHDRCaptureGamut> CaptureGamut;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftObjectPath PostProcessingMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDisableScreenPercentage;


};