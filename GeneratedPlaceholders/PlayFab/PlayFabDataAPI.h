#pragma once

#include "CoreMinimal.h"
#include "PlayFabDataAPI.generated.h"

UCLASS()
class UPlayFabDataAPI : public UOnlineBlueprintCallProxyBase
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

	UFUNCTION(BlueprintCallable, Category = "PlayFabDataAPI")
	class UPlayFabDataAPI* STATIC_SetObjects(const struct FDataSetObjectsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabDataAPI")
		class UPlayFabDataAPI* STATIC_InitiateFileUploads(const struct FDataInitiateFileUploadsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabDataAPI")
		void HelperSetObjects(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabDataAPI")
		void HelperInitiateFileUploads(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabDataAPI")
		void HelperGetObjects(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabDataAPI")
		void HelperGetFiles(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabDataAPI")
		void HelperFinalizeFileUploads(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabDataAPI")
		void HelperDeleteFiles(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabDataAPI")
		void HelperAbortFileUploads(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	UFUNCTION(BlueprintCallable, Category = "PlayFabDataAPI")
		class UPlayFabDataAPI* STATIC_GetObjects(const struct FDataGetObjectsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabDataAPI")
		class UPlayFabDataAPI* STATIC_GetFiles(const struct FDataGetFilesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabDataAPI")
		class UPlayFabDataAPI* STATIC_FinalizeFileUploads(const struct FDataFinalizeFileUploadsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabDataAPI")
		class UPlayFabDataAPI* STATIC_DeleteFiles(const struct FDataDeleteFilesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabDataAPI")
		void DelegateOnSuccessSetObjects__DelegateSignature(const struct FDataSetObjectsResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabDataAPI")
		void DelegateOnSuccessInitiateFileUploads__DelegateSignature(const struct FDataInitiateFileUploadsResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabDataAPI")
		void DelegateOnSuccessGetObjects__DelegateSignature(const struct FDataGetObjectsResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabDataAPI")
		void DelegateOnSuccessGetFiles__DelegateSignature(const struct FDataGetFilesResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabDataAPI")
		void DelegateOnSuccessFinalizeFileUploads__DelegateSignature(const struct FDataFinalizeFileUploadsResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabDataAPI")
		void DelegateOnSuccessDeleteFiles__DelegateSignature(const struct FDataDeleteFilesResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabDataAPI")
		void DelegateOnSuccessAbortFileUploads__DelegateSignature(const struct FDataAbortFileUploadsResponse& Result, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabDataAPI")
		void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData);
	UFUNCTION(BlueprintCallable, Category = "PlayFabDataAPI")
		class UPlayFabDataAPI* STATIC_AbortFileUploads(const struct FDataAbortFileUploadsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);

};