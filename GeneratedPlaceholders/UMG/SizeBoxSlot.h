#pragma once

#include "CoreMinimal.h"
#include "SizeBoxSlot.generated.h"

UCLASS()
class USizeBoxSlot : public UPanelSlot
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMargin Padding;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EVerticalAlignment> VerticalAlignment;

	UFUNCTION(BlueprintCallable, Category = "SizeBoxSlot")
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	UFUNCTION(BlueprintCallable, Category = "SizeBoxSlot")
		void SetPadding(const struct FMargin& InPadding);
	UFUNCTION(BlueprintCallable, Category = "SizeBoxSlot")
		void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);

};