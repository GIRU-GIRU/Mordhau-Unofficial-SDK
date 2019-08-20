#pragma once

#include "CoreMinimal.h"
#include "Widget.generated.h"

UCLASS()
class UWidget : public UVisual
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPanelSlot* Slot;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptDelegate bIsEnabledDelegate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FText ToolTipText;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptDelegate ToolTipTextDelegate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UWidget* ToolTipWidget;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptDelegate ToolTipWidgetDelegate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptDelegate VisibilityDelegate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FWidgetTransform RenderTransform;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D RenderTransformPivot;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsVariable : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCreatedByConstructionScript : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsEnabled : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOverride_Cursor : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsVolatile : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EMouseCursor> Cursor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EWidgetClipping Clipping;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	ESlateVisibility Visibility;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RenderOpacity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UWidgetNavigation* Navigation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UPropertyBinding*> NativeBindings;

	UFUNCTION(BlueprintCallable, Category = "Widget")
	void SetVisibility(ESlateVisibility InVisibility);
	UFUNCTION(BlueprintCallable, Category = "Widget")
		void SetUserFocus(class APlayerController* PlayerController);
	UFUNCTION(BlueprintCallable, Category = "Widget")
		void SetToolTipText(const struct FText& InToolTipText);
	UFUNCTION(BlueprintCallable, Category = "Widget")
		void SetToolTip(class UWidget* Widget);
	UFUNCTION(BlueprintCallable, Category = "Widget")
		void SetRenderTranslation(const struct FVector2D& Translation);
	UFUNCTION(BlueprintCallable, Category = "Widget")
		void SetRenderTransformPivot(const struct FVector2D& Pivot);
	UFUNCTION(BlueprintCallable, Category = "Widget")
		void SetRenderTransform(const struct FWidgetTransform& InTransform);
	UFUNCTION(BlueprintCallable, Category = "Widget")
		void SetRenderShear(const struct FVector2D& Shear);
	UFUNCTION(BlueprintCallable, Category = "Widget")
		void SetRenderScale(const struct FVector2D& Scale);
	UFUNCTION(BlueprintCallable, Category = "Widget")
		void SetRenderOpacity(float InOpacity);
	UFUNCTION(BlueprintCallable, Category = "Widget")
		void SetRenderAngle(float Angle);
	UFUNCTION(BlueprintCallable, Category = "Widget")
		void SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, const struct FName& WidgetToFocus);
	UFUNCTION(BlueprintCallable, Category = "Widget")
		void SetKeyboardFocus();
	UFUNCTION(BlueprintCallable, Category = "Widget")
		void SetIsEnabled(bool bInIsEnabled);
	UFUNCTION(BlueprintCallable, Category = "Widget")
		void SetCursor(TEnumAsByte<EMouseCursor> InCursor);
	UFUNCTION(BlueprintCallable, Category = "Widget")
		void SetClipping(EWidgetClipping InClipping);
	UFUNCTION(BlueprintCallable, Category = "Widget")
		void SetAllNavigationRules(EUINavigationRule Rule, const struct FName& WidgetToFocus);
	UFUNCTION(BlueprintCallable, Category = "Widget")
		void ResetCursor();
	UFUNCTION(BlueprintCallable, Category = "Widget")
		void RemoveFromParent();
	UFUNCTION(BlueprintCallable, Category = "Widget")
		struct FEventReply OnReply__DelegateSignature();
	UFUNCTION(BlueprintCallable, Category = "Widget")
		struct FEventReply OnPointerEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	UFUNCTION(BlueprintCallable, Category = "Widget")
		bool IsVisible();
	UFUNCTION(BlueprintCallable, Category = "Widget")
		bool IsHovered();
	UFUNCTION(BlueprintCallable, Category = "Widget")
		void InvalidateLayoutAndVolatility();
	UFUNCTION(BlueprintCallable, Category = "Widget")
		bool HasUserFocusedDescendants(class APlayerController* PlayerController);
	UFUNCTION(BlueprintCallable, Category = "Widget")
		bool HasUserFocus(class APlayerController* PlayerController);
	UFUNCTION(BlueprintCallable, Category = "Widget")
		bool HasMouseCaptureByUser(int UserIndex, int PointerIndex);
	UFUNCTION(BlueprintCallable, Category = "Widget")
		bool HasMouseCapture();
	UFUNCTION(BlueprintCallable, Category = "Widget")
		bool HasKeyboardFocus();
	UFUNCTION(BlueprintCallable, Category = "Widget")
		bool HasFocusedDescendants();
	UFUNCTION(BlueprintCallable, Category = "Widget")
		bool HasAnyUserFocus();
	UFUNCTION(BlueprintCallable, Category = "Widget")
		class UWidget* GetWidget__DelegateSignature();
	UFUNCTION(BlueprintCallable, Category = "Widget")
		ESlateVisibility GetVisibility();
	UFUNCTION(BlueprintCallable, Category = "Widget")
		struct FText GetText__DelegateSignature();
	UFUNCTION(BlueprintCallable, Category = "Widget")
		ESlateVisibility GetSlateVisibility__DelegateSignature();
	UFUNCTION(BlueprintCallable, Category = "Widget")
		struct FSlateColor GetSlateColor__DelegateSignature();
	UFUNCTION(BlueprintCallable, Category = "Widget")
		struct FSlateBrush GetSlateBrush__DelegateSignature();
	UFUNCTION(BlueprintCallable, Category = "Widget")
		float GetRenderOpacity();
	UFUNCTION(BlueprintCallable, Category = "Widget")
		class UPanelWidget* GetParent();
	UFUNCTION(BlueprintCallable, Category = "Widget")
		class APlayerController* GetOwningPlayer();
	UFUNCTION(BlueprintCallable, Category = "Widget")
		class ULocalPlayer* GetOwningLocalPlayer();
	UFUNCTION(BlueprintCallable, Category = "Widget")
		TEnumAsByte<EMouseCursor> GetMouseCursor__DelegateSignature();
	UFUNCTION(BlueprintCallable, Category = "Widget")
		struct FLinearColor GetLinearColor__DelegateSignature();
	UFUNCTION(BlueprintCallable, Category = "Widget")
		bool GetIsEnabled();
	UFUNCTION(BlueprintCallable, Category = "Widget")
		int GetInt32__DelegateSignature();
	UFUNCTION(BlueprintCallable, Category = "Widget")
		float GetFloat__DelegateSignature();
	UFUNCTION(BlueprintCallable, Category = "Widget")
		struct FVector2D GetDesiredSize();
	UFUNCTION(BlueprintCallable, Category = "Widget")
		EWidgetClipping GetClipping();
	UFUNCTION(BlueprintCallable, Category = "Widget")
		ECheckBoxState GetCheckBoxState__DelegateSignature();
	UFUNCTION(BlueprintCallable, Category = "Widget")
		struct FGeometry GetCachedGeometry();
	UFUNCTION(BlueprintCallable, Category = "Widget")
		bool GetBool__DelegateSignature();
	UFUNCTION(BlueprintCallable, Category = "Widget")
		class UWidget* GenerateWidgetForString__DelegateSignature(const struct FString& Item);
	UFUNCTION(BlueprintCallable, Category = "Widget")
		class UWidget* GenerateWidgetForObject__DelegateSignature(class UObject* Item);
	UFUNCTION(BlueprintCallable, Category = "Widget")
		void ForceVolatile(bool bForce);
	UFUNCTION(BlueprintCallable, Category = "Widget")
		void ForceLayoutPrepass();

};