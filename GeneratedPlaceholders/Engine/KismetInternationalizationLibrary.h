#pragma once

#include "CoreMinimal.h"
#include "KismetInternationalizationLibrary.generated.h"

UCLASS()
class UKismetInternationalizationLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "KismetInternationalizationLibrary")
	bool STATIC_SetCurrentLocale(const struct FString& Culture, bool SaveToConfig);
	UFUNCTION(BlueprintCallable, Category = "KismetInternationalizationLibrary")
		bool STATIC_SetCurrentLanguageAndLocale(const struct FString& Culture, bool SaveToConfig);
	UFUNCTION(BlueprintCallable, Category = "KismetInternationalizationLibrary")
		bool STATIC_SetCurrentLanguage(const struct FString& Culture, bool SaveToConfig);
	UFUNCTION(BlueprintCallable, Category = "KismetInternationalizationLibrary")
		bool STATIC_SetCurrentCulture(const struct FString& Culture, bool SaveToConfig);
	UFUNCTION(BlueprintCallable, Category = "KismetInternationalizationLibrary")
		bool STATIC_SetCurrentAssetGroupCulture(const struct FName& AssetGroup, const struct FString& Culture, bool SaveToConfig);
	UFUNCTION(BlueprintCallable, Category = "KismetInternationalizationLibrary")
		struct FString STATIC_GetCurrentLocale();
	UFUNCTION(BlueprintCallable, Category = "KismetInternationalizationLibrary")
		struct FString STATIC_GetCurrentLanguage();
	UFUNCTION(BlueprintCallable, Category = "KismetInternationalizationLibrary")
		struct FString STATIC_GetCurrentCulture();
	UFUNCTION(BlueprintCallable, Category = "KismetInternationalizationLibrary")
		struct FString STATIC_GetCurrentAssetGroupCulture(const struct FName& AssetGroup);
	UFUNCTION(BlueprintCallable, Category = "KismetInternationalizationLibrary")
		void STATIC_ClearCurrentAssetGroupCulture(const struct FName& AssetGroup, bool SaveToConfig);

};