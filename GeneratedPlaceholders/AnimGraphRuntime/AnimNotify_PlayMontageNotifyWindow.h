#pragma once

#include "CoreMinimal.h"
#include "AnimNotify_PlayMontageNotifyWindow.generated.h"

UCLASS()
class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName NotifyName;


};