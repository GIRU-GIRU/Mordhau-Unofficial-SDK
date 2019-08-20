#pragma once

#include "CoreMinimal.h"
#include "QosRegionManager.generated.h"

UCLASS()
class UQosRegionManager : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseOldQosServers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NumTestsPerRegion;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PingTimeout;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FQosDatacenterInfo> Datacenters;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FDateTime LastCheckTimestamp;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UQosEvaluator* Evaluator;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EQosCompletionResult QosEvalResult;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FQosRegionInfo> RegionOptions;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString ForceRegionId;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bRegionForcedViaCommandline;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString SelectedRegionId;


};