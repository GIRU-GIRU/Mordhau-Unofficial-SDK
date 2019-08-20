#pragma once

#include "CoreMinimal.h"
#include "EnvQueryTest_Project.generated.h"

UCLASS()
class UEnvQueryTest_Project : public UEnvQueryTest
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FEnvTraceData ProjectionData;


};