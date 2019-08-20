#include "PlayFabProfilesAPI.h"

class UPlayFabProfilesAPI* UPlayFabProfilesAPI::STATIC_SetProfilePolicy(const struct FProfilesSetEntityProfilePolicyRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData) {
}
	class UPlayFabProfilesAPI* UPlayFabProfilesAPI::STATIC_SetProfileLanguage(const struct FProfilesSetProfileLanguageRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData) {
}
	class UPlayFabProfilesAPI* UPlayFabProfilesAPI::STATIC_SetGlobalPolicy(const struct FProfilesSetGlobalPolicyRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData) {
}
	void UPlayFabProfilesAPI::HelperSetProfilePolicy(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful) {
}
	void UPlayFabProfilesAPI::HelperSetProfileLanguage(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful) {
}
	void UPlayFabProfilesAPI::HelperSetGlobalPolicy(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful) {
}
	void UPlayFabProfilesAPI::HelperGetProfiles(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful) {
}
	void UPlayFabProfilesAPI::HelperGetProfile(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful) {
}
	void UPlayFabProfilesAPI::HelperGetGlobalPolicy(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful) {
}
	class UPlayFabProfilesAPI* UPlayFabProfilesAPI::STATIC_GetProfiles(const struct FProfilesGetEntityProfilesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData) {
}
	class UPlayFabProfilesAPI* UPlayFabProfilesAPI::STATIC_GetProfile(const struct FProfilesGetEntityProfileRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData) {
}
	class UPlayFabProfilesAPI* UPlayFabProfilesAPI::STATIC_GetGlobalPolicy(const struct FProfilesGetGlobalPolicyRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData) {
}
	void UPlayFabProfilesAPI::DelegateOnSuccessSetProfilePolicy__DelegateSignature(const struct FProfilesSetEntityProfilePolicyResponse& Result, class UObject* customData) {
}
	void UPlayFabProfilesAPI::DelegateOnSuccessSetProfileLanguage__DelegateSignature(const struct FProfilesSetProfileLanguageResponse& Result, class UObject* customData) {
}
	void UPlayFabProfilesAPI::DelegateOnSuccessSetGlobalPolicy__DelegateSignature(const struct FProfilesSetGlobalPolicyResponse& Result, class UObject* customData) {
}
	void UPlayFabProfilesAPI::DelegateOnSuccessGetProfiles__DelegateSignature(const struct FProfilesGetEntityProfilesResponse& Result, class UObject* customData) {
}
	void UPlayFabProfilesAPI::DelegateOnSuccessGetProfile__DelegateSignature(const struct FProfilesGetEntityProfileResponse& Result, class UObject* customData) {
}
	void UPlayFabProfilesAPI::DelegateOnSuccessGetGlobalPolicy__DelegateSignature(const struct FProfilesGetGlobalPolicyResponse& Result, class UObject* customData) {
}
	void UPlayFabProfilesAPI::DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData) {
}
