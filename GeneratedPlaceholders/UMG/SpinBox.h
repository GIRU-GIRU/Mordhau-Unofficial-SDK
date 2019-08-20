#pragma once

#include "CoreMinimal.h"
#include "SpinBox.generated.h"

UCLASS()
class USpinBox : public UWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Value;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptDelegate ValueDelegate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSpinBoxStyle WidgetStyle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USlateWidgetStyleAsset* Style;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Delta;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SliderExponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSlateFontInfo Font;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ETextJustify> Justification;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinDesiredWidth;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool ClearKeyboardFocusOnCommit;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool SelectAllTextOnCommit;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSlateColor ForegroundColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnValueChanged;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnValueCommitted;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnBeginSliderMovement;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnEndSliderMovement;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOverride_MinValue : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOverride_MaxValue : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOverride_MinSliderValue : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOverride_MaxSliderValue : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinSliderValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxSliderValue;

	UFUNCTION(BlueprintCallable, Category = "SpinBox")
	void SetValue(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "SpinBox")
		void SetMinValue(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "SpinBox")
		void SetMinSliderValue(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "SpinBox")
		void SetMaxValue(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "SpinBox")
		void SetMaxSliderValue(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "SpinBox")
		void SetForegroundColor(const struct FSlateColor& InForegroundColor);
	UFUNCTION(BlueprintCallable, Category = "SpinBox")
		void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod);
	UFUNCTION(BlueprintCallable, Category = "SpinBox")
		void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
	UFUNCTION(BlueprintCallable, Category = "SpinBox")
		void OnSpinBoxBeginSliderMovement__DelegateSignature();
	UFUNCTION(BlueprintCallable, Category = "SpinBox")
		float GetValue();
	UFUNCTION(BlueprintCallable, Category = "SpinBox")
		float GetMinValue();
	UFUNCTION(BlueprintCallable, Category = "SpinBox")
		float GetMinSliderValue();
	UFUNCTION(BlueprintCallable, Category = "SpinBox")
		float GetMaxValue();
	UFUNCTION(BlueprintCallable, Category = "SpinBox")
		float GetMaxSliderValue();
	UFUNCTION(BlueprintCallable, Category = "SpinBox")
		void ClearMinValue();
	UFUNCTION(BlueprintCallable, Category = "SpinBox")
		void ClearMinSliderValue();
	UFUNCTION(BlueprintCallable, Category = "SpinBox")
		void ClearMaxValue();
	UFUNCTION(BlueprintCallable, Category = "SpinBox")
		void ClearMaxSliderValue();

};