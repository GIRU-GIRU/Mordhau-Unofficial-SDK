#pragma once

#include "CoreMinimal.h"
#include "PlayMontageCallbackProxy.generated.h"

UCLASS()
class UPlayMontageCallbackProxy : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnCompleted;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnBlendOut;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnInterrupted;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnNotifyBegin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnNotifyEnd;

	UFUNCTION(BlueprintCallable, Category = "PlayMontageCallbackProxy")
	void OnNotifyEndReceived(const struct FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
	UFUNCTION(BlueprintCallable, Category = "PlayMontageCallbackProxy")
		void OnNotifyBeginReceived(const struct FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
	UFUNCTION(BlueprintCallable, Category = "PlayMontageCallbackProxy")
		void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	UFUNCTION(BlueprintCallable, Category = "PlayMontageCallbackProxy")
		void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
	UFUNCTION(BlueprintCallable, Category = "PlayMontageCallbackProxy")
		class UPlayMontageCallbackProxy* STATIC_CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, const struct FName& StartingSection);

};