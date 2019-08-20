#pragma once

#include "CoreMinimal.h"
#include "TwitterIntegrationBase.generated.h"

UCLASS()
class UTwitterIntegrationBase : public UPlatformInterfaceBase
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "TwitterIntegrationBase")
	bool TwitterRequest(const struct FString& URL, TArray<struct FString> ParamKeysAndValues, TEnumAsByte<ETwitterRequestMethod> RequestMethod, int AccountIndex);
	UFUNCTION(BlueprintCallable, Category = "TwitterIntegrationBase")
		bool ShowTweetUI(const struct FString& InitialMessage, const struct FString& URL, const struct FString& Picture);
	UFUNCTION(BlueprintCallable, Category = "TwitterIntegrationBase")
		void Init();
	UFUNCTION(BlueprintCallable, Category = "TwitterIntegrationBase")
		int GetNumAccounts();
	UFUNCTION(BlueprintCallable, Category = "TwitterIntegrationBase")
		struct FString GetAccountName(int AccountIndex);
	UFUNCTION(BlueprintCallable, Category = "TwitterIntegrationBase")
		bool CanShowTweetUI();
	UFUNCTION(BlueprintCallable, Category = "TwitterIntegrationBase")
		bool AuthorizeAccounts();

};