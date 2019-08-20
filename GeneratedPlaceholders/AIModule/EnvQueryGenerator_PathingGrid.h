#pragma once

#include "CoreMinimal.h"
#include "EnvQueryGenerator_PathingGrid.generated.h"

UCLASS()
class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAIDataProviderBoolValue PathToItem;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* NavigationFilter;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAIDataProviderFloatValue ScanRangeMultiplier;


};