#pragma once

#include "CoreMinimal.h"
#include "BTTask_RunEQSQuery.generated.h"

UCLASS()
class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UEnvQuery* QueryTemplate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FEnvNamedValue> QueryParams;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FAIDynamicParam> QueryConfig;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EEnvQueryRunMode> RunMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBlackboardKeySelector EQSQueryBlackboardKey;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseBBKey;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FEQSParametrizedQueryExecutionRequest EQSRequest;


};