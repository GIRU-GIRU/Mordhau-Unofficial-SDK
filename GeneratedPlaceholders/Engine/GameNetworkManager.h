#pragma once

#include "CoreMinimal.h"
#include "GameNetworkManager.generated.h"

UCLASS()
class AGameNetworkManager : public AInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int AdjustedNetSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastNetSpeedUpdateTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int TotalNetBandwidth;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MinDynamicBandwidth;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxDynamicBandwidth;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsStandbyCheckingEnabled : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bHasStandbyCheatTriggered : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StandbyRxCheatTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StandbyTxCheatTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int BadPingThreshold;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PercentMissingForRxStandby;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PercentMissingForTxStandby;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PercentForBadPing;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float JoinInProgressStandbyWaitTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MoveRepSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MAXPOSITIONERRORSQUARED;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MAXNEARZEROVELOCITYSQUARED;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CLIENTADJUSTUPDATECOST;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MAXCLIENTUPDATEINTERVAL;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxMoveDeltaTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ClientNetSendMoveDeltaTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ClientNetSendMoveDeltaTimeThrottled;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ClientNetSendMoveDeltaTimeStationary;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ClientNetSendMoveThrottleAtNetSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ClientNetSendMoveThrottleOverPlayerCount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool ClientAuthorativePosition;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ClientErrorUpdateRateLimit;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bMovementTimeDiscrepancyDetection;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bMovementTimeDiscrepancyResolution;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MovementTimeDiscrepancyMaxTimeMargin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MovementTimeDiscrepancyMinTimeMargin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MovementTimeDiscrepancyResolutionRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MovementTimeDiscrepancyDriftAllowance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bMovementTimeDiscrepancyForceCorrectionsDuringResolution;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseDistanceBasedRelevancy;


};