#pragma once

#include "CoreMinimal.h"
#include "EditableText.generated.h"

UCLASS()
class UEditableText : public UWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FText Text;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptDelegate TextDelegate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FText HintText;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptDelegate HintTextDelegate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FEditableTextStyle WidgetStyle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USlateWidgetStyleAsset* Style;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USlateBrushAsset* BackgroundImageSelected;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USlateBrushAsset* BackgroundImageComposing;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USlateBrushAsset* CaretImage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSlateFontInfo Font;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSlateColor ColorAndOpacity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool IsReadOnly;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool IsPassword;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinimumDesiredWidth;
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

	UFUNCTION(BlueprintCallable, Category = "EditableText")
	void SetText(const struct FText& InText);
	UFUNCTION(BlueprintCallable, Category = "EditableText")
		void SetIsReadOnly(bool InbIsReadyOnly);
	UFUNCTION(BlueprintCallable, Category = "EditableText")
		void SetIsPassword(bool InbIsPassword);
	UFUNCTION(BlueprintCallable, Category = "EditableText")
		void SetHintText(const struct FText& InHintText);
	UFUNCTION(BlueprintCallable, Category = "EditableText")
		void OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	UFUNCTION(BlueprintCallable, Category = "EditableText")
		void OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text);
	UFUNCTION(BlueprintCallable, Category = "EditableText")
		struct FText GetText();

};