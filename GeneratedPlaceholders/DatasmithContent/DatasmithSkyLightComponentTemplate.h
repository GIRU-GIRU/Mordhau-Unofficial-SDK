#pragma once

#include "CoreMinimal.h"
#include "DatasmithSkyLightComponentTemplate.generated.h"

UCLASS()
class UDatasmithSkyLightComponentTemplate : public UDatasmithObjectTemplate
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ESkyLightSourceType> SourceType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int CubemapResolution;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTextureCube* Cubemap;


};