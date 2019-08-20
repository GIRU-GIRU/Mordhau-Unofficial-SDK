#pragma once

#include "CoreMinimal.h"
#include "PlayFabEventsAPI.generated.h"

UCLASS()
class UPlayFabEventsAPI : public UOnlineBlueprintCallProxyBase
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

	UFUNCTION(BlueprintCallable, Category = "PlayFabEventsAPI")
	class UPlayFabEventsAPI* STATIC_WriteEvents(const struct FEventsWriteEventsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabEventsAPI")
		void HelperWriteEvents(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabEventsAPI")
		void DelegateOnSuccessWriteEvents__DelegateSignature(const struct FEventsWriteEventsResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabEventsAPI")
		void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData);

};