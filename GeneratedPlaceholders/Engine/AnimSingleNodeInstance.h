#pragma once

#include "CoreMinimal.h"
#include "AnimSingleNodeInstance.generated.h"

UCLASS()
class UAnimSingleNodeInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptDelegate PostEvaluateAnimEvent;

	UFUNCTION(BlueprintCallable, Category = "AnimSingleNodeInstance")
	void StopAnim();
	UFUNCTION(BlueprintCallable, Category = "AnimSingleNodeInstance")
		void SetReverse(bool bInReverse);
	UFUNCTION(BlueprintCallable, Category = "AnimSingleNodeInstance")
		void SetPreviewCurveOverride(const struct FName& PoseName, float Value, bool bRemoveIfZero);
	UFUNCTION(BlueprintCallable, Category = "AnimSingleNodeInstance")
		void SetPositionWithPreviousTime(float InPosition, float InPreviousTime, bool bFireNotifies);
	UFUNCTION(BlueprintCallable, Category = "AnimSingleNodeInstance")
		void SetPosition(float InPosition, bool bFireNotifies);
	UFUNCTION(BlueprintCallable, Category = "AnimSingleNodeInstance")
		void SetPlayRate(float InPlayRate);
	UFUNCTION(BlueprintCallable, Category = "AnimSingleNodeInstance")
		void SetPlaying(bool bIsPlaying);
	UFUNCTION(BlueprintCallable, Category = "AnimSingleNodeInstance")
		void SetLooping(bool bIsLooping);
	UFUNCTION(BlueprintCallable, Category = "AnimSingleNodeInstance")
		void SetBlendSpaceInput(const struct FVector& InBlendInput);
	UFUNCTION(BlueprintCallable, Category = "AnimSingleNodeInstance")
		void SetAnimationAsset(class UAnimationAsset* NewAsset, bool bIsLooping, float InPlayRate);
	UFUNCTION(BlueprintCallable, Category = "AnimSingleNodeInstance")
		void PlayAnim(bool bIsLooping, float InPlayRate, float InStartPosition);
	UFUNCTION(BlueprintCallable, Category = "AnimSingleNodeInstance")
		float GetLength();
	UFUNCTION(BlueprintCallable, Category = "AnimSingleNodeInstance")
		class UAnimationAsset* GetAnimationAsset();

};