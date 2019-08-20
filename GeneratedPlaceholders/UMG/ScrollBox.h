#pragma once

#include "CoreMinimal.h"
#include "ScrollBox.generated.h"

UCLASS()
class UScrollBox : public UPanelWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScrollBoxStyle WidgetStyle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScrollBarStyle WidgetBarStyle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USlateWidgetStyleAsset* Style;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USlateWidgetStyleAsset* BarStyle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EOrientation> Orientation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	ESlateVisibility ScrollBarVisibility;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EConsumeMouseWheel ConsumeMouseWheel;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D ScrollbarThickness;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool AlwaysShowScrollbar;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool AllowOverscroll;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EDescendantScrollDestination NavigationDestination;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NavigationScrollPadding;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAllowRightClickDragScrolling;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnUserScrolled;

	UFUNCTION(BlueprintCallable, Category = "ScrollBox")
	void SetScrollOffset(float NewScrollOffset);
	UFUNCTION(BlueprintCallable, Category = "ScrollBox")
		void SetScrollBarVisibility(ESlateVisibility NewScrollBarVisibility);
	UFUNCTION(BlueprintCallable, Category = "ScrollBox")
		void SetScrollbarThickness(const struct FVector2D& NewScrollbarThickness);
	UFUNCTION(BlueprintCallable, Category = "ScrollBox")
		void SetOrientation(TEnumAsByte<EOrientation> NewOrientation);
	UFUNCTION(BlueprintCallable, Category = "ScrollBox")
		void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);
	UFUNCTION(BlueprintCallable, Category = "ScrollBox")
		void SetAllowOverscroll(bool NewAllowOverscroll);
	UFUNCTION(BlueprintCallable, Category = "ScrollBox")
		void ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination);
	UFUNCTION(BlueprintCallable, Category = "ScrollBox")
		void ScrollToStart();
	UFUNCTION(BlueprintCallable, Category = "ScrollBox")
		void ScrollToEnd();
	UFUNCTION(BlueprintCallable, Category = "ScrollBox")
		float GetViewOffsetFraction();
	UFUNCTION(BlueprintCallable, Category = "ScrollBox")
		float GetScrollOffset();

};