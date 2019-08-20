#pragma once

#include "CoreMinimal.h"
#include "Button.generated.h"

UCLASS()
class UButton : public UContentWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USlateWidgetStyleAsset* Style;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FButtonStyle WidgetStyle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor ColorAndOpacity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor BackgroundColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EButtonClickMethod> ClickMethod;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EButtonTouchMethod> TouchMethod;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EButtonPressMethod> PressMethod;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool IsFocusable;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnClicked;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnPressed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnReleased;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnHovered;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnUnhovered;

	UFUNCTION(BlueprintCallable, Category = "Button")
	void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);
	UFUNCTION(BlueprintCallable, Category = "Button")
		void SetStyle(const struct FButtonStyle& InStyle);
	UFUNCTION(BlueprintCallable, Category = "Button")
		void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod);
	UFUNCTION(BlueprintCallable, Category = "Button")
		void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	UFUNCTION(BlueprintCallable, Category = "Button")
		void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);
	UFUNCTION(BlueprintCallable, Category = "Button")
		void SetBackgroundColor(const struct FLinearColor& InBackgroundColor);
	UFUNCTION(BlueprintCallable, Category = "Button")
		bool IsPressed();

};