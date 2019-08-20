#pragma once

#include "CoreMinimal.h"
#include "AnimNotifyState.generated.h"

UCLASS()
class UAnimNotifyState : public UObject
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "AnimNotifyState")
	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime);
	UFUNCTION(BlueprintCallable, Category = "AnimNotifyState")
		bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
	UFUNCTION(BlueprintCallable, Category = "AnimNotifyState")
		bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
	UFUNCTION(BlueprintCallable, Category = "AnimNotifyState")
		struct FString GetNotifyName();

};