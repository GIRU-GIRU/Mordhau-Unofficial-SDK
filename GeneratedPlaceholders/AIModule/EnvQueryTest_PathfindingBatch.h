#pragma once

#include "CoreMinimal.h"
#include "EnvQueryTest_PathfindingBatch.generated.h"

UCLASS()
class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAIDataProviderFloatValue ScanRangeMultiplier;


};