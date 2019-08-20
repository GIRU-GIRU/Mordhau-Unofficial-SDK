#pragma once

#include "CoreMinimal.h"
#include "ConnectionCallbackProxy.generated.h"

UCLASS()
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate onSuccess;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate onFailure;

	UFUNCTION(BlueprintCallable, Category = "ConnectionCallbackProxy")
	class UConnectionCallbackProxy* STATIC_ConnectToService(class UObject* WorldContextObject, class APlayerController* PlayerController);

};