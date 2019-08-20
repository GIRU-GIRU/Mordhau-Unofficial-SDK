#pragma once

#include "CoreMinimal.h"
#include "PlanarReflectionComponent.generated.h"

UCLASS()
class UPlanarReflectionComponent : public USceneCaptureComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBoxComponent* PreviewBox;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NormalDistortionStrength;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PrefilterRoughness;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PrefilterRoughnessDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ScreenPercentage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ExtraFOV;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DistanceFromPlaneFadeStart;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DistanceFromPlaneFadeEnd;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DistanceFromPlaneFadeoutStart;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DistanceFromPlaneFadeoutEnd;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AngleFromPlaneFadeStart;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AngleFromPlaneFadeEnd;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bRenderSceneTwoSided;


};