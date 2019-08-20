#pragma once

#include "CoreMinimal.h"
#include "EditableTextBox.generated.h"

UCLASS()
class UEditableTextBox : public UWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FText Text;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptDelegate TextDelegate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FEditableTextBoxStyle WidgetStyle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USlateWidgetStyleAsset* Style;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FText HintText;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptDelegate HintTextDelegate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSlateFontInfo Font;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor ForegroundColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor BackgroundColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor ReadOnlyForegroundColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool IsReadOnly;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool IsPassword;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinimumDesiredWidth;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMargin Padding;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool IsCaretMovedWhenGainFocus;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool SelectAllTextWhenFocused;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool RevertTextOnEscape;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool ClearKeyboardFocusOnCommit;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool SelectAllTextOnCommit;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool AllowContextMenu;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EVirtualKeyboardType> KeyboardType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EVirtualKeyboardDismissAction VirtualKeyboardDismissAction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ETextJustify> Justification;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FShapedTextOptions ShapedTextOptions;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnTextChanged;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnTextCommitted;

	UFUNCTION(BlueprintCallable, Category = "EditableTextBox")
	void SetText(const struct FText& InText);
	UFUNCTION(BlueprintCallable, Category = "EditableTextBox")
		void SetIsReadOnly(bool bReadOnly);
	UFUNCTION(BlueprintCallable, Category = "EditableTextBox")
		void SetIsPassword(bool bIsPassword);
	UFUNCTION(BlueprintCallable, Category = "EditableTextBox")
		void SetHintText(const struct FText& InText);
	UFUNCTION(BlueprintCallable, Category = "EditableTextBox")
		void SetError(const struct FText& InError);
	UFUNCTION(BlueprintCallable, Category = "EditableTextBox")
		void OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	UFUNCTION(BlueprintCallable, Category = "EditableTextBox")
		void OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	UFUNCTION(BlueprintCallable, Category = "EditableTextBox")
		bool HasError();
	UFUNCTION(BlueprintCallable, Category = "EditableTextBox")
		struct FText GetText();
	UFUNCTION(BlueprintCallable, Category = "EditableTextBox")
		void ClearError();

};