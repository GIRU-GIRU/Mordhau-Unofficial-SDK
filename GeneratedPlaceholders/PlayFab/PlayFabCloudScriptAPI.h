#pragma once

#include "CoreMinimal.h"
#include "PlayFabCloudScriptAPI.generated.h"

UCLASS()
class UPlayFabCloudScriptAPI : public UOnlineBlueprintCallProxyBase
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

	UFUNCTION(BlueprintCallable, Category = "PlayFabCloudScriptAPI")
	void HelperExecuteEntityCloudScript(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabCloudScriptAPI")
		class UPlayFabCloudScriptAPI* STATIC_ExecuteEntityCloudScript(const struct FCloudScriptExecuteEntityCloudScriptRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabCloudScriptAPI")
		void DelegateOnSuccessExecuteEntityCloudScript__DelegateSignature(const struct FCloudScriptExecuteCloudScriptResult& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabCloudScriptAPI")
		void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData);

};