#pragma once

#include "CoreMinimal.h"
#include "ComboBoxText.generated.h"

UCLASS()
class UComboBoxText : public UWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FText> DefaultOptions;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FText SelectedOption;
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

	UFUNCTION(BlueprintCallable, Category = "ComboBoxText")
	void SetSelectedOption(const struct FText& Option);
	UFUNCTION(BlueprintCallable, Category = "ComboBoxText")
		bool RemoveOption(const struct FText& Option);
	UFUNCTION(BlueprintCallable, Category = "ComboBoxText")
		void RefreshOptions();
	UFUNCTION(BlueprintCallable, Category = "ComboBoxText")
		void OnSelectionChangedEvent__DelegateSignature(const struct FText& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	UFUNCTION(BlueprintCallable, Category = "ComboBoxText")
		void OnOpeningEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable, Category = "ComboBoxText")
		struct FText GetSelectedOption();
	UFUNCTION(BlueprintCallable, Category = "ComboBoxText")
		int GetOptionCount();
	UFUNCTION(BlueprintCallable, Category = "ComboBoxText")
		struct FText GetOptionAtIndex(int Index);
	UFUNCTION(BlueprintCallable, Category = "ComboBoxText")
		int FindOptionIndex(const struct FText& Option);
	UFUNCTION(BlueprintCallable, Category = "ComboBoxText")
		void ClearSelection();
	UFUNCTION(BlueprintCallable, Category = "ComboBoxText")
		void ClearOptions();
	UFUNCTION(BlueprintCallable, Category = "ComboBoxText")
		void AddOption(const struct FText& Option);

};