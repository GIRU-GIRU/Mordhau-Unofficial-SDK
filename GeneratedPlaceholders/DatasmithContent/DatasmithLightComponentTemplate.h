#pragma once

#include "CoreMinimal.h"
#include "DatasmithLightComponentTemplate.generated.h"

UCLASS()
class UDatasmithLightComponentTemplate : public UDatasmithObjectTemplate
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bVisible : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char CastShadows : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseTemperature : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseIESBrightness : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Intensity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Temperature;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float IESBrightnessScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor LightColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* LightFunctionMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTextureLightProfile* IESTexture;


};