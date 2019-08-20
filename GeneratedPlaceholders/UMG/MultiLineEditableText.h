#pragma once

#include "CoreMinimal.h"
#include "MultiLineEditableText.generated.h"

UCLASS()
class UMultiLineEditableText : public UTextLayoutWidget
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
	struct FTextBlockStyle WidgetStyle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsReadOnly;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSlateFontInfo Font;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool SelectAllTextWhenFocused;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool ClearTextSelectionOnFocusLoss;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool RevertTextOnEscape;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool ClearKeyboardFocusOnCommit;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool AllowContextMenu;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EVirtualKeyboardDismissAction VirtualKeyboardDismissAction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnTextChanged;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnTextCommitted;

	UFUNCTION(BlueprintCallable, Category = "MultiLineEditableText")
	void SetText(const struct FText& InText);
	UFUNCTION(BlueprintCallable, Category = "MultiLineEditableText")
		void SetIsReadOnly(bool bReadOnly);
	UFUNCTION(BlueprintCallable, Category = "MultiLineEditableText")
		void OnMultiLineEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	UFUNCTION(BlueprintCallable, Category = "MultiLineEditableText")
		void OnMultiLineEditableTextChangedEvent__DelegateSignature(const struct FText& Text);
	UFUNCTION(BlueprintCallable, Category = "MultiLineEditableText")
		struct FText GetText();

};