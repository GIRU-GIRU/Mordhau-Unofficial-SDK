#pragma once

#include "CoreMinimal.h"
#include "AtmosphericFogComponent.generated.h"

UCLASS()
class UAtmosphericFogComponent : public USceneComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DensityMultiplier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DensityOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DistanceScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AltitudeScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DistanceOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float GroundOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StartDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SunDiscScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DefaultBrightness;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColor DefaultLightColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDisableSunDisk : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDisableGroundScattering : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAtmospherePrecomputeParameters PrecomputeParams;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture2D* TransmittanceTexture;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture2D* IrradianceTexture;

	UFUNCTION(BlueprintCallable, Category = "AtmosphericFogComponent")
	void StartPrecompute();
	UFUNCTION(BlueprintCallable, Category = "AtmosphericFogComponent")
		void SetSunMultiplier(float NewSunMultiplier);
	UFUNCTION(BlueprintCallable, Category = "AtmosphericFogComponent")
		void SetStartDistance(float NewStartDistance);
	UFUNCTION(BlueprintCallable, Category = "AtmosphericFogComponent")
		void SetPrecomputeParams(float DensityHeight, int MaxScatteringOrder, int InscatterAltitudeSampleNum);
	UFUNCTION(BlueprintCallable, Category = "AtmosphericFogComponent")
		void SetFogMultiplier(float NewFogMultiplier);
	UFUNCTION(BlueprintCallable, Category = "AtmosphericFogComponent")
		void SetDistanceScale(float NewDistanceScale);
	UFUNCTION(BlueprintCallable, Category = "AtmosphericFogComponent")
		void SetDistanceOffset(float NewDistanceOffset);
	UFUNCTION(BlueprintCallable, Category = "AtmosphericFogComponent")
		void SetDensityOffset(float NewDensityOffset);
	UFUNCTION(BlueprintCallable, Category = "AtmosphericFogComponent")
		void SetDensityMultiplier(float NewDensityMultiplier);
	UFUNCTION(BlueprintCallable, Category = "AtmosphericFogComponent")
		void SetDefaultLightColor(const struct FLinearColor& NewLightColor);
	UFUNCTION(BlueprintCallable, Category = "AtmosphericFogComponent")
		void SetDefaultBrightness(float NewBrightness);
	UFUNCTION(BlueprintCallable, Category = "AtmosphericFogComponent")
		void SetAltitudeScale(float NewAltitudeScale);
	UFUNCTION(BlueprintCallable, Category = "AtmosphericFogComponent")
		void DisableSunDisk(bool NewSunDisk);
	UFUNCTION(BlueprintCallable, Category = "AtmosphericFogComponent")
		void DisableGroundScattering(bool NewGroundScattering);

};