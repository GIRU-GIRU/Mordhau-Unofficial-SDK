#pragma once

#include "CoreMinimal.h"
#include "CameraShake.generated.h"

UCLASS()
class UCameraShake : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSingleInstance : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float OscillationDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float OscillationBlendInTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float OscillationBlendOutTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FROscillator RotOscillation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVOscillator LocOscillation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FFOscillator FOVOscillation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AnimPlayRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AnimScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AnimBlendInTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AnimBlendOutTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RandomAnimSegmentDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCameraAnim* Anim;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRandomAnimSegment : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class APlayerCameraManager* CameraOwner;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ShakeScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float OscillatorTimeRemaining;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCameraAnimInst* AnimInst;

	UFUNCTION(BlueprintCallable, Category = "CameraShake")
	void ReceiveStopShake(bool bImmediately);
	UFUNCTION(BlueprintCallable, Category = "CameraShake")
		void ReceivePlayShake(float Scale);
	UFUNCTION(BlueprintCallable, Category = "CameraShake")
		bool ReceiveIsFinished();
	UFUNCTION(BlueprintCallable, Category = "CameraShake")
		void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, const struct FMinimalViewInfo& POV, struct FMinimalViewInfo* ModifiedPOV);

};