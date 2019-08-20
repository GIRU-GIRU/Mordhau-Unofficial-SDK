#pragma once

#include "CoreMinimal.h"
#include "ComboBoxString.generated.h"

UCLASS()
class UComboBoxString : public UWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FString> DefaultOptions;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString SelectedOption;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FComboBoxStyle WidgetStyle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FTableRowStyle ItemStyle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMargin ContentPadding;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxListHeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool HasDownArrow;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool EnableGamepadNavigationMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSlateFontInfo Font;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSlateColor ForegroundColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsFocusable;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptDelegate OnGenerateWidgetEvent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnSelectionChanged;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnOpening;

	UFUNCTION(BlueprintCallable, Category = "ComboBoxString")
	void SetSelectedOption(const struct FString& Option);
	UFUNCTION(BlueprintCallable, Category = "ComboBoxString")
		bool RemoveOption(const struct FString& Option);
	UFUNCTION(BlueprintCallable, Category = "ComboBoxString")
		void RefreshOptions();
	UFUNCTION(BlueprintCallable, Category = "ComboBoxString")
		void OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	UFUNCTION(BlueprintCallable, Category = "ComboBoxString")
		void OnOpeningEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable, Category = "ComboBoxString")
		struct FString GetSelectedOption();
	UFUNCTION(BlueprintCallable, Category = "ComboBoxString")
		int GetOptionCount();
	UFUNCTION(BlueprintCallable, Category = "ComboBoxString")
		struct FString GetOptionAtIndex(int Index);
	UFUNCTION(BlueprintCallable, Category = "ComboBoxString")
		int FindOptionIndex(const struct FString& Option);
	UFUNCTION(BlueprintCallable, Category = "ComboBoxString")
		void ClearSelection();
	UFUNCTION(BlueprintCallable, Category = "ComboBoxString")
		void ClearOptions();
	UFUNCTION(BlueprintCallable, Category = "ComboBoxString")
		void AddOption(const struct FString& Option);

};