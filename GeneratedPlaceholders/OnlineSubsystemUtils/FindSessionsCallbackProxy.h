#pragma once

#include "CoreMinimal.h"
#include "FindSessionsCallbackProxy.generated.h"

UCLASS()
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate onSuccess;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate onFailure;

	UFUNCTION(BlueprintCallable, Category = "FindSessionsCallbackProxy")
	struct FString STATIC_GetServerName(const struct FBlueprintSessionResult& Result);
	UFUNCTION(BlueprintCallable, Category = "FindSessionsCallbackProxy")
		int STATIC_GetPingInMs(const struct FBlueprintSessionResult& Result);
	UFUNCTION(BlueprintCallable, Category = "FindSessionsCallbackProxy")
		int STATIC_GetMaxPlayers(const struct FBlueprintSessionResult& Result);
	UFUNCTION(BlueprintCallable, Category = "FindSessionsCallbackProxy")
		int STATIC_GetCurrentPlayers(const struct FBlueprintSessionResult& Result);
	UFUNCTION(BlueprintCallable, Category = "FindSessionsCallbackProxy")
		class UFindSessionsCallbackProxy* STATIC_FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int MaxResults, bool bUseLAN);

};