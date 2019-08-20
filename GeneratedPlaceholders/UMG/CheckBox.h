#pragma once

#include "CoreMinimal.h"
#include "CheckBox.generated.h"

UCLASS()
class UCheckBox : public UContentWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	ECheckBoxState CheckedState;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptDelegate CheckedStateDelegate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FCheckBoxStyle WidgetStyle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USlateWidgetStyleAsset* Style;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USlateBrushAsset* UncheckedImage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USlateBrushAsset* UncheckedHoveredImage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USlateBrushAsset* UncheckedPressedImage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USlateBrushAsset* CheckedImage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USlateBrushAsset* CheckedHoveredImage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USlateBrushAsset* CheckedPressedImage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USlateBrushAsset* UndeterminedImage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USlateBrushAsset* UndeterminedHoveredImage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USlateBrushAsset* UndeterminedPressedImage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMargin Padding;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSlateColor BorderBackgroundColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool IsFocusable;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnCheckStateChanged;

	UFUNCTION(BlueprintCallable, Category = "CheckBox")
	void SetIsChecked(bool InIsChecked);
	UFUNCTION(BlueprintCallable, Category = "CheckBox")
		void SetCheckedState(ECheckBoxState InCheckedState);
	UFUNCTION(BlueprintCallable, Category = "CheckBox")
		bool IsPressed();
	UFUNCTION(BlueprintCallable, Category = "CheckBox")
		bool IsChecked();
	UFUNCTION(BlueprintCallable, Category = "CheckBox")
		ECheckBoxState GetCheckedState();

};