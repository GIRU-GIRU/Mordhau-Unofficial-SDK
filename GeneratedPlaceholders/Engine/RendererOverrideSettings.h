#pragma once

#include "CoreMinimal.h"
#include "RendererOverrideSettings.generated.h"

UCLASS()
class URendererOverrideSettings : public UDeveloperSettings
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSupportAllShaderPermutations : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bForceRecomputeTangents : 1;


};