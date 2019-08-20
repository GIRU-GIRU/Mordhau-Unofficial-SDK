#pragma once

#include "CoreMinimal.h"
#include "MapBuildDataRegistry.generated.h"

UCLASS()
class UMapBuildDataRegistry : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ELightingBuildQuality> LevelLightingQuality;


};