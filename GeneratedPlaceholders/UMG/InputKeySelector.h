#pragma once

#include "CoreMinimal.h"
#include "InputKeySelector.generated.h"

UCLASS()
class UInputKeySelector : public UWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FButtonStyle WidgetStyle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FTextBlockStyle TextStyle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FInputChord SelectedKey;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSlateFontInfo Font;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMargin Margin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor ColorAndOpacity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FText KeySelectionText;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FText NoKeySpecifiedText;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAllowModifierKeys;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAllowGamepadKeys;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FKey> EscapeKeys;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnKeySelected;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnIsSelectingKeyChanged;

	UFUNCTION(BlueprintCallable, Category = "InputKeySelector")
	void SetTextBlockVisibility(ESlateVisibility InVisibility);
	UFUNCTION(BlueprintCallable, Category = "InputKeySelector")
		void SetSelectedKey(const struct FInputChord& InSelectedKey);
	UFUNCTION(BlueprintCallable, Category = "InputKeySelector")
		void SetNoKeySpecifiedText(const struct FText& InNoKeySpecifiedText);
	UFUNCTION(BlueprintCallable, Category = "InputKeySelector")
		void SetKeySelectionText(const struct FText& InKeySelectionText);
	UFUNCTION(BlueprintCallable, Category = "InputKeySelector")
		void SetEscapeKeys(TArray<struct FKey> InKeys);
	UFUNCTION(BlueprintCallable, Category = "InputKeySelector")
		void SetAllowModifierKeys(bool bInAllowModifierKeys);
	UFUNCTION(BlueprintCallable, Category = "InputKeySelector")
		void SetAllowGamepadKeys(bool bInAllowGamepadKeys);
	UFUNCTION(BlueprintCallable, Category = "InputKeySelector")
		void OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
	UFUNCTION(BlueprintCallable, Category = "InputKeySelector")
		void OnIsSelectingKeyChanged__DelegateSignature();
	UFUNCTION(BlueprintCallable, Category = "InputKeySelector")
		bool GetIsSelectingKey();

};