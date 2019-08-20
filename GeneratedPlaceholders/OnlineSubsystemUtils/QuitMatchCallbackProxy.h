#pragma once

#include "CoreMinimal.h"
#include "QuitMatchCallbackProxy.generated.h"

UCLASS()
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate onSuccess;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate onFailure;

	UFUNCTION(BlueprintCallable, Category = "QuitMatchCallbackProxy")
	class UQuitMatchCallbackProxy* STATIC_QuitMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, TEnumAsByte<EMPMatchOutcome> Outcome, int TurnTimeoutInSeconds);

};