#pragma once

#include "CoreMinimal.h"
#include "PlayFabMatchmakerAPI.generated.h"

UCLASS()
class UPlayFabMatchmakerAPI : public UOnlineBlueprintCallProxyBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnPlayFabResponse;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPlayFabAuthenticationContext* CallAuthenticationContext;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPlayFabJsonObject* RequestJsonObj;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPlayFabJsonObject* ResponseJsonObj;

	UFUNCTION(BlueprintCallable, Category = "PlayFabMatchmakerAPI")
	class UPlayFabMatchmakerAPI* STATIC_UserInfo(const struct FMatchmakerUserInfoRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMatchmakerAPI")
		class UPlayFabMatchmakerAPI* STATIC_StartGame(const struct FMatchmakerStartGameRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMatchmakerAPI")
		class UPlayFabMatchmakerAPI* STATIC_PlayerLeft(const struct FMatchmakerPlayerLeftRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMatchmakerAPI")
		class UPlayFabMatchmakerAPI* STATIC_PlayerJoined(const struct FMatchmakerPlayerJoinedRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMatchmakerAPI")
		void HelperUserInfo(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMatchmakerAPI")
		void HelperStartGame(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMatchmakerAPI")
		void HelperPlayerLeft(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMatchmakerAPI")
		void HelperPlayerJoined(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMatchmakerAPI")
		void HelperAuthUser(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMatchmakerAPI")
		void DelegateOnSuccessUserInfo__DelegateSignature(const struct FMatchmakerUserInfoResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMatchmakerAPI")
		void DelegateOnSuccessStartGame__DelegateSignature(const struct FMatchmakerStartGameResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMatchmakerAPI")
		void DelegateOnSuccessPlayerLeft__DelegateSignature(const struct FMatchmakerPlayerLeftResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMatchmakerAPI")
		void DelegateOnSuccessPlayerJoined__DelegateSignature(const struct FMatchmakerPlayerJoinedResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMatchmakerAPI")
		void DelegateOnSuccessAuthUser__DelegateSignature(const struct FMatchmakerAuthUserResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMatchmakerAPI")
		void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabMatchmakerAPI")
		class UPlayFabMatchmakerAPI* STATIC_AuthUser(const struct FMatchmakerAuthUserRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);

};