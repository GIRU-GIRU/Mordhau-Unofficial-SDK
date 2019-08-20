#pragma once

#include "CoreMinimal.h"
#include "MatineeActor.generated.h"

UCLASS()
class AMatineeActor : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UInterpData* MatineeData;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName MatineeControllerName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PlayRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bPlayOnLevelLoad : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bForceStartPos : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ForceStartPosition;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bLooping : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRewindOnPlay : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bNoResetOnRewind : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRewindIfAlreadyPlaying : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDisableRadioFilter : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bClientSideOnly : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSkipUpdateIfNotVisible : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsSkippable : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int PreferredSplitScreenNum;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDisableMovementInput : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDisableLookAtInput : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bHidePlayer : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bHideHud : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FInterpGroupActorInfo> GroupActorInfos;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShouldShowGore : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UInterpGroupInst*> GroupInst;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FCameraCutInfo> CameraCuts;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsPlaying : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bReversePlayback : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bPaused : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bPendingStop : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float InterpPosition;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char ReplicationForceIsPlaying;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnPlay;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnStop;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnPause;

	UFUNCTION(BlueprintCallable, Category = "MatineeActor")
	void Stop();
	UFUNCTION(BlueprintCallable, Category = "MatineeActor")
		void SetPosition(float NewPosition, bool bJump);
	UFUNCTION(BlueprintCallable, Category = "MatineeActor")
		void SetLoopingState(bool bNewLooping);
	UFUNCTION(BlueprintCallable, Category = "MatineeActor")
		void Reverse();
	UFUNCTION(BlueprintCallable, Category = "MatineeActor")
		void Play();
	UFUNCTION(BlueprintCallable, Category = "MatineeActor")
		void Pause();
	UFUNCTION(BlueprintCallable, Category = "MatineeActor")
		void EnableGroupByName(const struct FString& GroupName, bool bEnable);
	UFUNCTION(BlueprintCallable, Category = "MatineeActor")
		void ChangePlaybackDirection();

};