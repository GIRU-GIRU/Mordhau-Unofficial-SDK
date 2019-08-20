#pragma once

#include "CoreMinimal.h"
#include "WidgetSwitcher.generated.h"

UCLASS()
class UWidgetSwitcher : public UPanelWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ActiveWidgetIndex;

	UFUNCTION(BlueprintCallable, Category = "WidgetSwitcher")
	void SetActiveWidgetIndex(int Index);
	UFUNCTION(BlueprintCallable, Category = "WidgetSwitcher")
		void SetActiveWidget(class UWidget* Widget);
	UFUNCTION(BlueprintCallable, Category = "WidgetSwitcher")
		class UWidget* GetWidgetAtIndex(int Index);
	UFUNCTION(BlueprintCallable, Category = "WidgetSwitcher")
		int GetNumWidgets();
	UFUNCTION(BlueprintCallable, Category = "WidgetSwitcher")
		int GetActiveWidgetIndex();
	UFUNCTION(BlueprintCallable, Category = "WidgetSwitcher")
		class UWidget* GetActiveWidget();

};