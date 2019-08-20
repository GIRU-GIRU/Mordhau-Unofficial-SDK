#pragma once

#include "CoreMinimal.h"
#include "QosEvaluator.generated.h"

UCLASS()
class UQosEvaluator : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FQosSearchPass CurrentSearchPass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ControllerId;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bInProgress;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bCancelOperation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FQosRegionInfo> Datacenters;


};