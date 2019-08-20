#pragma once

#include "CoreMinimal.h"
#include "DatasmithSpotLightComponentTemplate.generated.h"

UCLASS()
class UDatasmithSpotLightComponentTemplate : public UDatasmithObjectTemplate
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float InnerConeAngle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float OuterConeAngle;


};