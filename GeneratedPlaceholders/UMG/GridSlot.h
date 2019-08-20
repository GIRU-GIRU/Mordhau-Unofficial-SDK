#pragma once

#include "CoreMinimal.h"
#include "GridSlot.generated.h"

UCLASS()
class UGridSlot : public UPanelSlot
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMargin Padding;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EVerticalAlignment> VerticalAlignment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int Row;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int RowSpan;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int Column;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ColumnSpan;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int Layer;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D Nudge;

	UFUNCTION(BlueprintCallable, Category = "GridSlot")
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	UFUNCTION(BlueprintCallable, Category = "GridSlot")
		void SetRowSpan(int InRowSpan);
	UFUNCTION(BlueprintCallable, Category = "GridSlot")
		void SetRow(int InRow);
	UFUNCTION(BlueprintCallable, Category = "GridSlot")
		void SetPadding(const struct FMargin& InPadding);
	UFUNCTION(BlueprintCallable, Category = "GridSlot")
		void SetLayer(int InLayer);
	UFUNCTION(BlueprintCallable, Category = "GridSlot")
		void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	UFUNCTION(BlueprintCallable, Category = "GridSlot")
		void SetColumnSpan(int InColumnSpan);
	UFUNCTION(BlueprintCallable, Category = "GridSlot")
		void SetColumn(int InColumn);

};