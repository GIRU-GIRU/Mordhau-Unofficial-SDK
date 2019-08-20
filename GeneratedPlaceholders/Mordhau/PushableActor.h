#pragma once

#include "CoreMinimal.h"
#include "PushableActor.generated.h"

UCLASS()
class APushableActor : public AMordhauActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<float> NonPullableThresholds;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int Team1Presence;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int Team2Presence;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* Team1PushSpeedByPushers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* Team2PushSpeedByPushers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bStopPushingIfContested;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPrimitiveComponent* PushArea;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ProgressStepToAwardScoreFor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ScoreAwardedPerProgressStep;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NetworkInterpolationSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NetworkInterpolationSpeedConstant;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsNetworkInterpolationConstant;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint16_t ReplicatedProgress;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Progress;

	UFUNCTION(BlueprintCallable, Category = "PushableActor")
	void SetProgress(float NewProgress);
	UFUNCTION(BlueprintCallable, Category = "PushableActor")
		void OnRep_ReplicatedProgress();
	UFUNCTION(BlueprintCallable, Category = "PushableActor")
		void OnProgressUpdated(float OldProgress);

};