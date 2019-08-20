#include "PlayFabEventsAPI.h"

class UPlayFabEventsAPI* UPlayFabEventsAPI::STATIC_WriteEvents(const struct FEventsWriteEventsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData) {
}
	void UPlayFabEventsAPI::HelperWriteEvents(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful) {
}
	void UPlayFabEventsAPI::DelegateOnSuccessWriteEvents__DelegateSignature(const struct FEventsWriteEventsResponse& Result, class UObject* customData) {
}
	void UPlayFabEventsAPI::DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData) {
}
