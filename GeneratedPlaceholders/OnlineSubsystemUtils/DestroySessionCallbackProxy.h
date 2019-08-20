#pragma once

#include "CoreMinimal.h"
#include "DestroySessionCallbackProxy.generated.h"

UCLASS()
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate onSuccess;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate onFailure;

	UFUNCTION(BlueprintCallable, Category = "DestroySessionCallbackProxy")
	class UDestroySessionCallbackProxy* STATIC_DestroySession(class UObject* WorldContextObject, class APlayerController* PlayerController);

};