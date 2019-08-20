#pragma once

#include "CoreMinimal.h"
#include "PanelWidget.generated.h"

UCLASS()
class UPanelWidget : public UWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UPanelSlot*> Slots;

	UFUNCTION(BlueprintCallable, Category = "PanelWidget")
	bool RemoveChildAt(int Index);
	UFUNCTION(BlueprintCallable, Category = "PanelWidget")
		bool RemoveChild(class UWidget* Content);
	UFUNCTION(BlueprintCallable, Category = "PanelWidget")
		bool HasChild(class UWidget* Content);
	UFUNCTION(BlueprintCallable, Category = "PanelWidget")
		bool HasAnyChildren();
	UFUNCTION(BlueprintCallable, Category = "PanelWidget")
		int GetChildrenCount();
	UFUNCTION(BlueprintCallable, Category = "PanelWidget")
		int GetChildIndex(class UWidget* Content);
	UFUNCTION(BlueprintCallable, Category = "PanelWidget")
		class UWidget* GetChildAt(int Index);
	UFUNCTION(BlueprintCallable, Category = "PanelWidget")
		void ClearChildren();
	UFUNCTION(BlueprintCallable, Category = "PanelWidget")
		class UPanelSlot* AddChild(class UWidget* Content);

};