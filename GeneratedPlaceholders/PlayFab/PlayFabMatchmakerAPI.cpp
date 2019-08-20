#include "PlayFabMatchmakerAPI.h"

class UPlayFabMatchmakerAPI* UPlayFabMatchmakerAPI::STATIC_UserInfo(const struct FMatchmakerUserInfoRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData) {
}
	class UPlayFabMatchmakerAPI* UPlayFabMatchmakerAPI::STATIC_StartGame(const struct FMatchmakerStartGameRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData) {
}
	class UPlayFabMatchmakerAPI* UPlayFabMatchmakerAPI::STATIC_PlayerLeft(const struct FMatchmakerPlayerLeftRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData) {
}
	class UPlayFabMatchmakerAPI* UPlayFabMatchmakerAPI::STATIC_PlayerJoined(const struct FMatchmakerPlayerJoinedRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData) {
}
	void UPlayFabMatchmakerAPI::HelperUserInfo(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful) {
}
	void UPlayFabMatchmakerAPI::HelperStartGame(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful) {
}
	void UPlayFabMatchmakerAPI::HelperPlayerLeft(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful) {
}
	void UPlayFabMatchmakerAPI::HelperPlayerJoined(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful) {
}
	void UPlayFabMatchmakerAPI::HelperAuthUser(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful) {
}
	void UPlayFabMatchmakerAPI::DelegateOnSuccessUserInfo__DelegateSignature(const struct FMatchmakerUserInfoResponse& Result, class UObject* customData) {
}
	void UPlayFabMatchmakerAPI::DelegateOnSuccessStartGame__DelegateSignature(const struct FMatchmakerStartGameResponse& Result, class UObject* customData) {
}
	void UPlayFabMatchmakerAPI::DelegateOnSuccessPlayerLeft__DelegateSignature(const struct FMatchmakerPlayerLeftResponse& Result, class UObject* customData) {
}
	void UPlayFabMatchmakerAPI::DelegateOnSuccessPlayerJoined__DelegateSignature(const struct FMatchmakerPlayerJoinedResponse& Result, class UObject* customData) {
}
	void UPlayFabMatchmakerAPI::DelegateOnSuccessAuthUser__DelegateSignature(const struct FMatchmakerAuthUserResponse& Result, class UObject* customData) {
}
	void UPlayFabMatchmakerAPI::DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData) {
}
	class UPlayFabMatchmakerAPI* UPlayFabMatchmakerAPI::STATIC_AuthUser(const struct FMatchmakerAuthUserRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData) {
}
