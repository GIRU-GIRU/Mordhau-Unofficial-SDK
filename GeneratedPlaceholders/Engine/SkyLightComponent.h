#pragma once

#include "CoreMinimal.h"
#include "SkyLightComponent.generated.h"

UCLASS()
class USkyLightComponent : public ULightComponentBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ESkyLightSourceType> SourceType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTextureCube* Cubemap;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SourceCubemapAngle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int CubemapResolution;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SkyDistanceThreshold;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bCaptureEmissiveOnly;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bLowerHemisphereIsBlack;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor LowerHemisphereColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float OcclusionMaxDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Contrast;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float OcclusionExponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinOcclusion;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColor OcclusionTint;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EOcclusionCombineMode> OcclusionCombineMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTextureCube* BlendDestinationCubemap;

	UFUNCTION(BlueprintCallable, Category = "SkyLightComponent")
	void SetVolumetricScatteringIntensity(float NewIntensity);
	UFUNCTION(BlueprintCallable, Category = "SkyLightComponent")
		void SetOcclusionTint(const struct FColor& InTint);
	UFUNCTION(BlueprintCallable, Category = "SkyLightComponent")
		void SetOcclusionExponent(float InOcclusionExponent);
	UFUNCTION(BlueprintCallable, Category = "SkyLightComponent")
		void SetOcclusionContrast(float InOcclusionContrast);
	UFUNCTION(BlueprintCallable, Category = "SkyLightComponent")
		void SetMinOcclusion(float InMinOcclusion);
	UFUNCTION(BlueprintCallable, Category = "SkyLightComponent")
		void SetLowerHemisphereColor(const struct FLinearColor& InLowerHemisphereColor);
	UFUNCTION(BlueprintCallable, Category = "SkyLightComponent")
		void SetLightColor(const struct FLinearColor& NewLightColor);
	UFUNCTION(BlueprintCallable, Category = "SkyLightComponent")
		void SetIntensity(float NewIntensity);
	UFUNCTION(BlueprintCallable, Category = "SkyLightComponent")
		void SetIndirectLightingIntensity(float NewIntensity);
	UFUNCTION(BlueprintCallable, Category = "SkyLightComponent")
		void SetCubemapBlend(class UTextureCube* SourceCubemap, class UTextureCube* DestinationCubemap, float InBlendFraction);
	UFUNCTION(BlueprintCallable, Category = "SkyLightComponent")
		void SetCubemap(class UTextureCube* NewCubemap);
	UFUNCTION(BlueprintCallable, Category = "SkyLightComponent")
		void RecaptureSky();

};