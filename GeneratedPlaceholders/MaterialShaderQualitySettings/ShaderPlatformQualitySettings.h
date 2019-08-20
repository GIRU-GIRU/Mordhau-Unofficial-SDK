#pragma once

#include "CoreMinimal.h"
#include "ShaderPlatformQualitySettings.generated.h"

UCLASS()
class UShaderPlatformQualitySettings : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMaterialQualityOverrides QualityOverrides[0x3];


};