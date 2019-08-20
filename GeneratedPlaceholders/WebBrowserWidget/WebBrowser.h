#pragma once

#include "CoreMinimal.h"
#include "WebBrowser.generated.h"

UCLASS()
class UWebBrowser : public UWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnUrlChanged;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnBeforePopup;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString InitialURL;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bSupportsTransparency;

	UFUNCTION(BlueprintCallable, Category = "WebBrowser")
	void OnUrlChanged__DelegateSignature(const struct FText& Text);
	UFUNCTION(BlueprintCallable, Category = "WebBrowser")
		void OnBeforePopup__DelegateSignature(const struct FString& URL, const struct FString& Frame);
	UFUNCTION(BlueprintCallable, Category = "WebBrowser")
		void LoadURL(const struct FString& NewURL);
	UFUNCTION(BlueprintCallable, Category = "WebBrowser")
		void LoadString(const struct FString& Contents, const struct FString& DummyURL);
	UFUNCTION(BlueprintCallable, Category = "WebBrowser")
		struct FString GetUrl();
	UFUNCTION(BlueprintCallable, Category = "WebBrowser")
		struct FText GetTitleText();
	UFUNCTION(BlueprintCallable, Category = "WebBrowser")
		void ExecuteJavascript(const struct FString& ScriptText);

};