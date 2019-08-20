#pragma once

#include "CoreMinimal.h"
#include "TextLayoutWidget.generated.h"

UCLASS()
class UTextLayoutWidget : public UWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FShapedTextOptions ShapedTextOptions;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ETextJustify> Justification;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	ETextWrappingPolicy WrappingPolicy;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char AutoWrapText : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float WrapTextAt;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMargin Margin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LineHeightPercentage;


};