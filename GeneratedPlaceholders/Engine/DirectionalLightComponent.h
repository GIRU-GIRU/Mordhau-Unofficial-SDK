#pragma once

#include "CoreMinimal.h"
#include "DirectionalLightComponent.generated.h"

UCLASS()
class UDirectionalLightComponent : public ULightComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float OcclusionDepthRange;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector LightShaftOverrideDirection;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float WholeSceneDynamicShadowRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DynamicShadowDistanceMovableLight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DynamicShadowDistanceStationaryLight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int DynamicShadowCascades;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CascadeDistributionExponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CascadeTransitionFraction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ShadowDistanceFadeoutFraction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseInsetShadowsForMovableObjects : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int FarShadowCascadeCount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FarShadowDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DistanceFieldShadowDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LightSourceAngle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LightSourceSoftAngle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TraceDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLightmassDirectionalLightSettings LightmassSettings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCastModulatedShadows : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColor ModulatedShadowColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUsedAsAtmosphereSunLight : 1;

	UFUNCTION(BlueprintCallable, Category = "DirectionalLightComponent")
	void SetShadowDistanceFadeoutFraction(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "DirectionalLightComponent")
		void SetOcclusionMaskDarkness(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "DirectionalLightComponent")
		void SetLightShaftOverrideDirection(const struct FVector& NewValue);
	UFUNCTION(BlueprintCallable, Category = "DirectionalLightComponent")
		void SetEnableLightShaftOcclusion(bool bNewValue);
	UFUNCTION(BlueprintCallable, Category = "DirectionalLightComponent")
		void SetDynamicShadowDistanceStationaryLight(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "DirectionalLightComponent")
		void SetDynamicShadowDistanceMovableLight(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "DirectionalLightComponent")
		void SetDynamicShadowCascades(int NewValue);
	UFUNCTION(BlueprintCallable, Category = "DirectionalLightComponent")
		void SetCascadeTransitionFraction(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "DirectionalLightComponent")
		void SetCascadeDistributionExponent(float NewValue);

};