#pragma once

#include "CoreMinimal.h"
#include "LightComponentBase.generated.h"

UCLASS()
class ULightComponentBase : public USceneComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Brightness;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Intensity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColor LightColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAffectsWorld : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char CastShadows : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char CastStaticShadows : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char CastDynamicShadows : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAffectTranslucentLighting : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bTransmission : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCastVolumetricShadow : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float IndirectLightingIntensity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float VolumetricScatteringIntensity;

	UFUNCTION(BlueprintCallable, Category = "LightComponentBase")
	void SetCastVolumetricShadow(bool bNewValue);
	UFUNCTION(BlueprintCallable, Category = "LightComponentBase")
		void SetCastShadows(bool bNewValue);
	UFUNCTION(BlueprintCallable, Category = "LightComponentBase")
		struct FLinearColor GetLightColor();

};