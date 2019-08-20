#pragma once

#include "CoreMinimal.h"
#include "ExponentialHeightFogComponent.generated.h"

UCLASS()
class UExponentialHeightFogComponent : public USceneComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTextureCube* InscatteringColorCubemap;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float InscatteringColorCubemapAngle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor InscatteringTextureTint;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FullyDirectionalInscatteringColorDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NonDirectionalInscatteringColorDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DirectionalInscatteringExponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DirectionalInscatteringStartDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor DirectionalInscatteringColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FogHeightFalloff;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FogMaxOpacity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StartDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FogCutoffDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bEnableVolumetricFog;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float VolumetricFogScatteringDistribution;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColor VolumetricFogAlbedo;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor VolumetricFogEmissive;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float VolumetricFogExtinctionScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float VolumetricFogDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float VolumetricFogStaticLightingScatteringIntensity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bOverrideLightColorsWithFogInscatteringColors;

	UFUNCTION(BlueprintCallable, Category = "ExponentialHeightFogComponent")
	void SetVolumetricFogScatteringDistribution(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "ExponentialHeightFogComponent")
		void SetVolumetricFogExtinctionScale(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "ExponentialHeightFogComponent")
		void SetVolumetricFogEmissive(const struct FLinearColor& NewValue);
	UFUNCTION(BlueprintCallable, Category = "ExponentialHeightFogComponent")
		void SetVolumetricFogDistance(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "ExponentialHeightFogComponent")
		void SetVolumetricFogAlbedo(const struct FColor& NewValue);
	UFUNCTION(BlueprintCallable, Category = "ExponentialHeightFogComponent")
		void SetVolumetricFog(bool bNewValue);
	UFUNCTION(BlueprintCallable, Category = "ExponentialHeightFogComponent")
		void SetStartDistance(float Value);
	UFUNCTION(BlueprintCallable, Category = "ExponentialHeightFogComponent")
		void SetNonDirectionalInscatteringColorDistance(float Value);
	UFUNCTION(BlueprintCallable, Category = "ExponentialHeightFogComponent")
		void SetInscatteringTextureTint(const struct FLinearColor& Value);
	UFUNCTION(BlueprintCallable, Category = "ExponentialHeightFogComponent")
		void SetInscatteringColorCubemapAngle(float Value);
	UFUNCTION(BlueprintCallable, Category = "ExponentialHeightFogComponent")
		void SetInscatteringColorCubemap(class UTextureCube* Value);
	UFUNCTION(BlueprintCallable, Category = "ExponentialHeightFogComponent")
		void SetFullyDirectionalInscatteringColorDistance(float Value);
	UFUNCTION(BlueprintCallable, Category = "ExponentialHeightFogComponent")
		void SetFogMaxOpacity(float Value);
	UFUNCTION(BlueprintCallable, Category = "ExponentialHeightFogComponent")
		void SetFogInscatteringColor(const struct FLinearColor& Value);
	UFUNCTION(BlueprintCallable, Category = "ExponentialHeightFogComponent")
		void SetFogHeightFalloff(float Value);
	UFUNCTION(BlueprintCallable, Category = "ExponentialHeightFogComponent")
		void SetFogDensity(float Value);
	UFUNCTION(BlueprintCallable, Category = "ExponentialHeightFogComponent")
		void SetFogCutoffDistance(float Value);
	UFUNCTION(BlueprintCallable, Category = "ExponentialHeightFogComponent")
		void SetDirectionalInscatteringStartDistance(float Value);
	UFUNCTION(BlueprintCallable, Category = "ExponentialHeightFogComponent")
		void SetDirectionalInscatteringExponent(float Value);
	UFUNCTION(BlueprintCallable, Category = "ExponentialHeightFogComponent")
		void SetDirectionalInscatteringColor(const struct FLinearColor& Value);

};