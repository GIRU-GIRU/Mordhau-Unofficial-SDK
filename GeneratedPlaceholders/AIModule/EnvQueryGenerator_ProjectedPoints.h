#pragma once

#include "CoreMinimal.h"
#include "EnvQueryGenerator_ProjectedPoints.generated.h"

UCLASS()
class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FEnvTraceData ProjectionData;


};