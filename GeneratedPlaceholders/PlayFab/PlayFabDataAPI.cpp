#include "PlayFabDataAPI.h"

class UPlayFabDataAPI* UPlayFabDataAPI::STATIC_SetObjects(const struct FDataSetObjectsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData) {
}
	class UPlayFabDataAPI* UPlayFabDataAPI::STATIC_InitiateFileUploads(const struct FDataInitiateFileUploadsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData) {
}
	void UPlayFabDataAPI::HelperSetObjects(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful) {
}
	void UPlayFabDataAPI::HelperInitiateFileUploads(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful) {
}
	void UPlayFabDataAPI::HelperGetObjects(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful) {
}
	void UPlayFabDataAPI::HelperGetFiles(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful) {
}
	void UPlayFabDataAPI::HelperFinalizeFileUploads(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful) {
}
	void UPlayFabDataAPI::HelperDeleteFiles(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful) {
}
	void UPlayFabDataAPI::HelperAbortFileUploads(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful) {
}
	class UPlayFabDataAPI* UPlayFabDataAPI::STATIC_GetObjects(const struct FDataGetObjectsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData) {
}
	class UPlayFabDataAPI* UPlayFabDataAPI::STATIC_GetFiles(const struct FDataGetFilesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData) {
}
	class UPlayFabDataAPI* UPlayFabDataAPI::STATIC_FinalizeFileUploads(const struct FDataFinalizeFileUploadsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData) {
}
	class UPlayFabDataAPI* UPlayFabDataAPI::STATIC_DeleteFiles(const struct FDataDeleteFilesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData) {
}
	void UPlayFabDataAPI::DelegateOnSuccessSetObjects__DelegateSignature(const struct FDataSetObjectsResponse& Result, class UObject* customData) {
}
	void UPlayFabDataAPI::DelegateOnSuccessInitiateFileUploads__DelegateSignature(const struct FDataInitiateFileUploadsResponse& Result, class UObject* customData) {
}
	void UPlayFabDataAPI::DelegateOnSuccessGetObjects__DelegateSignature(const struct FDataGetObjectsResponse& Result, class UObject* customData) {
}
	void UPlayFabDataAPI::DelegateOnSuccessGetFiles__DelegateSignature(const struct FDataGetFilesResponse& Result, class UObject* customData) {
}
	void UPlayFabDataAPI::DelegateOnSuccessFinalizeFileUploads__DelegateSignature(const struct FDataFinalizeFileUploadsResponse& Result, class UObject* customData) {
}
	void UPlayFabDataAPI::DelegateOnSuccessDeleteFiles__DelegateSignature(const struct FDataDeleteFilesResponse& Result, class UObject* customData) {
}
	void UPlayFabDataAPI::DelegateOnSuccessAbortFileUploads__DelegateSignature(const struct FDataAbortFileUploadsResponse& Result, class UObject* customData) {
}
	void UPlayFabDataAPI::DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData) {
}
	class UPlayFabDataAPI* UPlayFabDataAPI::STATIC_AbortFileUploads(const struct FDataAbortFileUploadsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData) {
}
