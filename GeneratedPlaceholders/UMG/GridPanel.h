#pragma once

#include "CoreMinimal.h"
#include "GridPanel.generated.h"

UCLASS()
class UGridPanel : public UPanelWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<float> ColumnFill;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<float> RowFill;

	UFUNCTION(BlueprintCallable, Category = "GridPanel")
	void SetRowFill(int ColumnIndex, float Coefficient);
	UFUNCTION(BlueprintCallable, Category = "GridPanel")
		void SetColumnFill(int ColumnIndex, float Coefficient);
	UFUNCTION(BlueprintCallable, Category = "GridPanel")
		class UGridSlot* AddChildToGrid(class UWidget* Content);

};