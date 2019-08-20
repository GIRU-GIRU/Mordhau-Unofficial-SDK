#pragma once

#include "CoreMinimal.h"
#include "UpdateManager.generated.h"

UCLASS()
class UUpdateManager : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HotfixCheckCompleteDelay;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float UpdateCheckCompleteDelay;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HotfixAvailabilityCheckCompleteDelay;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float UpdateCheckAvailabilityCompleteDelay;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int AppSuspendedUpdateCheckTimeSeconds;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bPlatformEnvironmentDetected;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bInitialUpdateFinished;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bCheckHotfixAvailabilityOnly;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EUpdateState CurrentUpdateState;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int WorstNumFilesPendingLoadViewed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EPatchCheckResult LastPatchCheckResult;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EHotfixResult LastHotfixResult;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FDateTime LastUpdateCheck[0x2];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EUpdateCompletionStatus LastCompletionResult[0x2];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UEnum* UpdateStateEnum;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UEnum* UpdateCompletionEnum;


};