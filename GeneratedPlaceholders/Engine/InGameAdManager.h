#pragma once

#include "CoreMinimal.h"
#include "InGameAdManager.generated.h"

UCLASS()
class UInGameAdManager : public UPlatformInterfaceBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShouldPauseWhileAdOpen : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FScriptDelegate> ClickedBannerDelegates;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FScriptDelegate> ClosedAdDelegates;


};