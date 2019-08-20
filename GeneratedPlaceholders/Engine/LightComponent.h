#pragma once

#include "CoreMinimal.h"
#include "LightComponent.generated.h"

UCLASS()
class ULightComponent : public ULightComponentBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Temperature;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxDrawDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxDistanceFadeRange;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseTemperature : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ShadowMapChannel;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinRoughness;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SpecularScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ShadowResolutionScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ShadowBias;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ShadowSharpen;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ContactShadowLength;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char ContactShadowLengthInWS : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char InverseSquaredFalloff : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char CastTranslucentShadows : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCastShadowsFromCinematicObjectsOnly : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAffectDynamicIndirectLighting : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bForceCachedShadowsForMovablePrimitives : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLightingChannels LightingChannels;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* LightFunctionMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector LightFunctionScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTextureLightProfile* IESTexture;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseIESBrightness : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float IESBrightnessScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LightFunctionFadeDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DisabledBrightness;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnableLightShaftBloom : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BloomScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BloomThreshold;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColor BloomTint;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseRayTracedDistanceFieldShadows;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RayStartOffsetDepthScale;

	UFUNCTION(BlueprintCallable, Category = "LightComponent")
	void SetVolumetricScatteringIntensity(float NewIntensity);
	UFUNCTION(BlueprintCallable, Category = "LightComponent")
		void SetTransmission(bool bNewValue);
	UFUNCTION(BlueprintCallable, Category = "LightComponent")
		void SetTemperature(float NewTemperature);
	UFUNCTION(BlueprintCallable, Category = "LightComponent")
		void SetShadowBias(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "LightComponent")
		void SetLightFunctionScale(const struct FVector& NewLightFunctionScale);
	UFUNCTION(BlueprintCallable, Category = "LightComponent")
		void SetLightFunctionMaterial(class UMaterialInterface* NewLightFunctionMaterial);
	UFUNCTION(BlueprintCallable, Category = "LightComponent")
		void SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance);
	UFUNCTION(BlueprintCallable, Category = "LightComponent")
		void SetLightFunctionDisabledBrightness(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "LightComponent")
		void SetLightColor(const struct FLinearColor& NewLightColor, bool bSRGB);
	UFUNCTION(BlueprintCallable, Category = "LightComponent")
		void SetIntensity(float NewIntensity);
	UFUNCTION(BlueprintCallable, Category = "LightComponent")
		void SetIndirectLightingIntensity(float NewIntensity);
	UFUNCTION(BlueprintCallable, Category = "LightComponent")
		void SetIESTexture(class UTextureLightProfile* NewValue);
	UFUNCTION(BlueprintCallable, Category = "LightComponent")
		void SetForceCachedShadowsForMovablePrimitives(bool bNewValue);
	UFUNCTION(BlueprintCallable, Category = "LightComponent")
		void SetEnableLightShaftBloom(bool bNewValue);
	UFUNCTION(BlueprintCallable, Category = "LightComponent")
		void SetBloomTint(const struct FColor& NewValue);
	UFUNCTION(BlueprintCallable, Category = "LightComponent")
		void SetBloomThreshold(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "LightComponent")
		void SetBloomScale(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "LightComponent")
		void SetAffectTranslucentLighting(bool bNewValue);
	UFUNCTION(BlueprintCallable, Category = "LightComponent")
		void SetAffectDynamicIndirectLighting(bool bNewValue);

};