#pragma once

#include "CoreMinimal.h"
#include "HorizontalBoxSlot.generated.h"

UCLASS()
class UHorizontalBoxSlot : public UPanelSlot
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMargin Padding;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSlateChildSize Size;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EVerticalAlignment> VerticalAlignment;

	UFUNCTION(BlueprintCallable, Category = "HorizontalBoxSlot")
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	UFUNCTION(BlueprintCallable, Category = "HorizontalBoxSlot")
		void SetSize(const struct FSlateChildSize& InSize);
	UFUNCTION(BlueprintCallable, Category = "HorizontalBoxSlot")
		void SetPadding(const struct FMargin& InPadding);
	UFUNCTION(BlueprintCallable, Category = "HorizontalBoxSlot")
		void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);

};