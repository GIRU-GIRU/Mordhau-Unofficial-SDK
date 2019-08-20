#pragma once

#include "CoreMinimal.h"
#include "PlayFabAuthenticationAPI.generated.h"

UCLASS()
class UPlayFabAuthenticationAPI : public UOnlineBlueprintCallProxyBase
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

	UFUNCTION(BlueprintCallable, Category = "PlayFabAuthenticationAPI")
	void HelperGetEntityToken(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAuthenticationAPI")
		class UPlayFabAuthenticationAPI* STATIC_GetEntityToken(const struct FAuthenticationGetEntityTokenRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAuthenticationAPI")
		void DelegateOnSuccessGetEntityToken__DelegateSignature(const struct FAuthenticationGetEntityTokenResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabAuthenticationAPI")
		void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData);

};