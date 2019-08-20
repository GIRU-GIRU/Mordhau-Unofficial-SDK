#pragma once

#include "CoreMinimal.h"
#include "PlayFabLocalizationAPI.generated.h"

UCLASS()
class UPlayFabLocalizationAPI : public UOnlineBlueprintCallProxyBase
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

	UFUNCTION(BlueprintCallable, Category = "PlayFabLocalizationAPI")
	void HelperGetLanguageList(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabLocalizationAPI")
		class UPlayFabLocalizationAPI* STATIC_GetLanguageList(const struct FLocalizationGetLanguageListRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabLocalizationAPI")
		void DelegateOnSuccessGetLanguageList__DelegateSignature(const struct FLocalizationGetLanguageListResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabLocalizationAPI")
		void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData);

};