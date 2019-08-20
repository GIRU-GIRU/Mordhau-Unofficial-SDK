#pragma once

#include "CoreMinimal.h"
#include "StreamingSettings.generated.h"

UCLASS()
class UStreamingSettings : public UDeveloperSettings
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char AsyncLoadingThreadEnabled : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char WarnIfTimeLimitExceeded : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TimeLimitExceededMultiplier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TimeLimitExceededMinTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MinBulkDataSizeForAsyncLoading;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UseBackgroundLevelStreaming : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char AsyncLoadingUseFullTimeLimit : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AsyncLoadingTimeLimit;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PriorityAsyncLoadingExtraTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LevelStreamingActorsUpdateTimeLimit;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PriorityLevelStreamingActorsUpdateExtraTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int LevelStreamingComponentsRegistrationGranularity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LevelStreamingUnregisterComponentsTimeLimit;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int LevelStreamingComponentsUnregistrationGranularity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char EventDrivenLoaderEnabled : 1;


};