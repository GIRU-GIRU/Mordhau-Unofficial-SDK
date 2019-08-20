#pragma once

#include "CoreMinimal.h"
#include "EnvQueryManager.generated.h"

UCLASS()
class UEnvQueryManager : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FEnvQueryInstanceCache> InstanceCache;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UEnvQueryContext*> LocalContexts;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UEnvQueryInstanceBlueprintWrapper*> GCShieldedWrappers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxAllowedTestingTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bTestQueriesUsingBreadth;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int QueryCountWarningThreshold;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	double QueryCountWarningInterval;

	UFUNCTION(BlueprintCallable, Category = "EnvQueryManager")
	class UEnvQueryInstanceBlueprintWrapper* STATIC_RunEQSQuery(class UObject* WorldContextObject, class UEnvQuery* QueryTemplate, class UObject* Querier, TEnumAsByte<EEnvQueryRunMode> RunMode, class UClass* WrapperClass);

};