#pragma once

#include "CoreMinimal.h"
#include "TireConfig.generated.h"

UCLASS()
class UTireConfig : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FrictionScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FTireConfigMaterialFriction> TireFrictionScales;


};