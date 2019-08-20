#pragma once

#include "CoreMinimal.h"
#include "MultiLineEditableTextBox.generated.h"

UCLASS()
class UMultiLineEditableTextBox : public UTextLayoutWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FText Text;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FText HintText;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptDelegate HintTextDelegate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FEditableTextBoxStyle WidgetStyle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FTextBlockStyle TextStyle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsReadOnly;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool AllowContextMenu;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EVirtualKeyboardDismissAction VirtualKeyboardDismissAction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USlateWidgetStyleAsset* Style;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSlateFontInfo Font;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor ForegroundColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor BackgroundColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor ReadOnlyForegroundColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnTextChanged;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnTextCommitted;

	UFUNCTION(BlueprintCallable, Category = "MultiLineEditableTextBox")
	void SetText(const struct FText& InText);
	UFUNCTION(BlueprintCallable, Category = "MultiLineEditableTextBox")
		void SetIsReadOnly(bool bReadOnly);
	UFUNCTION(BlueprintCallable, Category = "MultiLineEditableTextBox")
		void SetError(const struct FText& InError);
	UFUNCTION(BlueprintCallable, Category = "MultiLineEditableTextBox")
		void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	UFUNCTION(BlueprintCallable, Category = "MultiLineEditableTextBox")
		void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	UFUNCTION(BlueprintCallable, Category = "MultiLineEditableTextBox")
		struct FText GetText();

};