#pragma once

#include "CoreMinimal.h"
#include "UniformGridPanel.generated.h"

UCLASS()
class UUniformGridPanel : public UPanelWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMargin SlotPadding;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinDesiredSlotWidth;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinDesiredSlotHeight;

	UFUNCTION(BlueprintCallable, Category = "UniformGridPanel")
	void SetSlotPadding(const struct FMargin& InSlotPadding);
	UFUNCTION(BlueprintCallable, Category = "UniformGridPanel")
		void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);
	UFUNCTION(BlueprintCallable, Category = "UniformGridPanel")
		void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);
	UFUNCTION(BlueprintCallable, Category = "UniformGridPanel")
		class UUniformGridSlot* AddChildToUniformGrid(class UWidget* Content);

};