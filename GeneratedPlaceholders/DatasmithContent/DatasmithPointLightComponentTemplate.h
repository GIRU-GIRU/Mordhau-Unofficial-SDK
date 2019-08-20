#pragma once

#include "CoreMinimal.h"
#include "DatasmithPointLightComponentTemplate.generated.h"

UCLASS()
class UDatasmithPointLightComponentTemplate : public UDatasmithObjectTemplate
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	ELightUnits IntensityUnits;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SourceRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SourceLength;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AttenuationRadius;


};