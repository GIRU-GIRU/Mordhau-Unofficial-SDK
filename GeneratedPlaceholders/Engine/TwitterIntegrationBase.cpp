#include "TwitterIntegrationBase.h"

bool UTwitterIntegrationBase::TwitterRequest(const struct FString& URL, TArray<struct FString> ParamKeysAndValues, TEnumAsByte<ETwitterRequestMethod> RequestMethod, int AccountIndex) {
}
	bool UTwitterIntegrationBase::ShowTweetUI(const struct FString& InitialMessage, const struct FString& URL, const struct FString& Picture) {
}
	void UTwitterIntegrationBase::Init() {
}
	int UTwitterIntegrationBase::GetNumAccounts() {
}
	struct FString UTwitterIntegrationBase::GetAccountName(int AccountIndex) {
}
	bool UTwitterIntegrationBase::CanShowTweetUI() {
}
	bool UTwitterIntegrationBase::AuthorizeAccounts() {
}
