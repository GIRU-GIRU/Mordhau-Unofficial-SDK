#pragma once

#include "CoreMinimal.h"
#include "PlayFabUtilities.generated.h"

UCLASS()
class UPlayFabUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "PlayFabUtilities")
	void STATIC_setPlayFabSettings(const struct FString& GameTitleId, const struct FString& PlayFabSecretApiKey, const struct FString& PhotonRealtimeAppId, const struct FString& PhotonTurnbasedAppId, const struct FString& PhotonChatAppId);
	UFUNCTION(BlueprintCallable, Category = "PlayFabUtilities")
		struct FString STATIC_getPhotonAppId(bool Realtime, bool Chat, bool Turnbased);
	UFUNCTION(BlueprintCallable, Category = "PlayFabUtilities")
		struct FString STATIC_getErrorText(int code);

};