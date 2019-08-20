#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleLight.generated.h"

UCLASS()
class UParticleModuleLight : public UParticleModuleLightBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseInverseSquaredFalloff;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAffectsTranslucency;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bPreviewLightRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SpawnFraction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionVector ColorScaleOverLife;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat BrightnessOverLife;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat RadiusScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat LightExponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLightingChannels LightingChannels;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float VolumetricScatteringIntensity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHighQualityLights;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bShadowCastingLights;


};