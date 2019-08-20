#pragma once

#include "CoreMinimal.h"
#include "WrapBoxSlot.generated.h"

UCLASS()
class UWrapBoxSlot : public UPanelSlot
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMargin Padding;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bFillEmptySpace;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FillSpanWhenLessThan;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EVerticalAlignment> VerticalAlignment;

	UFUNCTION(BlueprintCallable, Category = "WrapBoxSlot")
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	UFUNCTION(BlueprintCallable, Category = "WrapBoxSlot")
		void SetPadding(const struct FMargin& InPadding);
	UFUNCTION(BlueprintCallable, Category = "WrapBoxSlot")
		void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	UFUNCTION(BlueprintCallable, Category = "WrapBoxSlot")
		void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);
	UFUNCTION(BlueprintCallable, Category = "WrapBoxSlot")
		void SetFillEmptySpace(bool InbFillEmptySpace);

};