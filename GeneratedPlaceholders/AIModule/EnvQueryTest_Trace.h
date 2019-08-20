#pragma once

#include "CoreMinimal.h"
#include "EnvQueryTest_Trace.generated.h"

UCLASS()
class UEnvQueryTest_Trace : public UEnvQueryTest
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FEnvTraceData TraceData;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAIDataProviderBoolValue TraceFromContext;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAIDataProviderFloatValue ItemHeightOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAIDataProviderFloatValue ContextHeightOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* Context;


};