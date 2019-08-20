#include "WebBrowser.h"

void UWebBrowser::OnUrlChanged__DelegateSignature(const struct FText& Text) {
}
	void UWebBrowser::OnBeforePopup__DelegateSignature(const struct FString& URL, const struct FString& Frame) {
}
	void UWebBrowser::LoadURL(const struct FString& NewURL) {
}
	void UWebBrowser::LoadString(const struct FString& Contents, const struct FString& DummyURL) {
}
	struct FString UWebBrowser::GetUrl() {
}
	struct FText UWebBrowser::GetTitleText() {
}
	void UWebBrowser::ExecuteJavascript(const struct FString& ScriptText) {
}
