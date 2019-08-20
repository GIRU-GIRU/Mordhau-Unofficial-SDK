#pragma once

#include "CoreMinimal.h"
#include "InAppPurchaseCallbackProxy.generated.h"

UCLASS()
class UInAppPurchaseCallbackProxy : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate onSuccess;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate onFailure;

	UFUNCTION(BlueprintCallable, Category = "InAppPurchaseCallbackProxy")
	class UInAppPurchaseCallbackProxy* STATIC_CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, const struct FInAppPurchaseProductRequest& ProductRequest);

};