#pragma once

#include "CoreMinimal.h"
#include "UniformGridSlot.generated.h"

UCLASS()
class UUniformGridSlot : public UPanelSlot
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EVerticalAlignment> VerticalAlignment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int Row;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int Column;

	UFUNCTION(BlueprintCallable, Category = "UniformGridSlot")
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	UFUNCTION(BlueprintCallable, Category = "UniformGridSlot")
		void SetRow(int InRow);
	UFUNCTION(BlueprintCallable, Category = "UniformGridSlot")
		void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	UFUNCTION(BlueprintCallable, Category = "UniformGridSlot")
		void SetColumn(int InColumn);

};