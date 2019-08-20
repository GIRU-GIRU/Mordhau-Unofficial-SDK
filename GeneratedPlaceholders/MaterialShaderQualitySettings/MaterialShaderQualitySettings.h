#pragma once

#include "CoreMinimal.h"
#include "MaterialShaderQualitySettings.generated.h"

UCLASS()
class UMaterialShaderQualitySettings : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TMap<struct FName, class UShaderPlatformQualitySettings*> ForwardSettingMap;


};