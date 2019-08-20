#pragma once

#include "CoreMinimal.h"
#include "GameNetworkManagerSettings.generated.h"

UCLASS()
class UGameNetworkManagerSettings : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MinDynamicBandwidth;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxDynamicBandwidth;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int TotalNetBandwidth;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int BadPingThreshold;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsStandbyCheckingEnabled : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StandbyRxCheatTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StandbyTxCheatTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PercentMissingForRxStandby;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PercentMissingForTxStandby;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PercentForBadPing;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float JoinInProgressStandbyWaitTime;


};