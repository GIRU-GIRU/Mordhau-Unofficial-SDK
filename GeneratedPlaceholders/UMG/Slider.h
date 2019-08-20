#pragma once

#include "CoreMinimal.h"
#include "Slider.generated.h"

UCLASS()
class USlider : public UWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Value;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptDelegate ValueDelegate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSliderStyle WidgetStyle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EOrientation> Orientation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor SliderBarColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor SliderHandleColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool IndentHandle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool Locked;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StepSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool IsFocusable;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnMouseCaptureBegin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnMouseCaptureEnd;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnControllerCaptureBegin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnControllerCaptureEnd;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnValueChanged;

	UFUNCTION(BlueprintCallable, Category = "Slider")
	void SetValue(float InValue);
	UFUNCTION(BlueprintCallable, Category = "Slider")
		void SetStepSize(float InValue);
	UFUNCTION(BlueprintCallable, Category = "Slider")
		void SetSliderHandleColor(const struct FLinearColor& InValue);
	UFUNCTION(BlueprintCallable, Category = "Slider")
		void SetSliderBarColor(const struct FLinearColor& InValue);
	UFUNCTION(BlueprintCallable, Category = "Slider")
		void SetLocked(bool InValue);
	UFUNCTION(BlueprintCallable, Category = "Slider")
		void SetIndentHandle(bool InValue);
	UFUNCTION(BlueprintCallable, Category = "Slider")
		float GetValue();

};