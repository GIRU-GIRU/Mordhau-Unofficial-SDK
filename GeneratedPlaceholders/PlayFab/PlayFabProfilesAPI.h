#pragma once

#include "CoreMinimal.h"
#include "PlayFabProfilesAPI.generated.h"

UCLASS()
class UPlayFabProfilesAPI : public UOnlineBlueprintCallProxyBase
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

	UFUNCTION(BlueprintCallable, Category = "PlayFabProfilesAPI")
	class UPlayFabProfilesAPI* STATIC_SetProfilePolicy(const struct FProfilesSetEntityProfilePolicyRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabProfilesAPI")
		class UPlayFabProfilesAPI* STATIC_SetProfileLanguage(const struct FProfilesSetProfileLanguageRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabProfilesAPI")
		class UPlayFabProfilesAPI* STATIC_SetGlobalPolicy(const struct FProfilesSetGlobalPolicyRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabProfilesAPI")
		void HelperSetProfilePolicy(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabProfilesAPI")
		void HelperSetProfileLanguage(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabProfilesAPI")
		void HelperSetGlobalPolicy(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabProfilesAPI")
		void HelperGetProfiles(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabProfilesAPI")
		void HelperGetProfile(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabProfilesAPI")
		void HelperGetGlobalPolicy(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabProfilesAPI")
		class UPlayFabProfilesAPI* STATIC_GetProfiles(const struct FProfilesGetEntityProfilesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabProfilesAPI")
		class UPlayFabProfilesAPI* STATIC_GetProfile(const struct FProfilesGetEntityProfileRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabProfilesAPI")
		class UPlayFabProfilesAPI* STATIC_GetGlobalPolicy(const struct FProfilesGetGlobalPolicyRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabProfilesAPI")
		void DelegateOnSuccessSetProfilePolicy__DelegateSignature(const struct FProfilesSetEntityProfilePolicyResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabProfilesAPI")
		void DelegateOnSuccessSetProfileLanguage__DelegateSignature(const struct FProfilesSetProfileLanguageResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabProfilesAPI")
		void DelegateOnSuccessSetGlobalPolicy__DelegateSignature(const struct FProfilesSetGlobalPolicyResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabProfilesAPI")
		void DelegateOnSuccessGetProfiles__DelegateSignature(const struct FProfilesGetEntityProfilesResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabProfilesAPI")
		void DelegateOnSuccessGetProfile__DelegateSignature(const struct FProfilesGetEntityProfileResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabProfilesAPI")
		void DelegateOnSuccessGetGlobalPolicy__DelegateSignature(const struct FProfilesGetGlobalPolicyResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabProfilesAPI")
		void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData);

};