#pragma once

#include "CoreMinimal.h"
#include "EnvQueryTest_Overlap.generated.h"

UCLASS()
class UEnvQueryTest_Overlap : public UEnvQueryTest
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FEnvOverlapData OverlapData;


};