#pragma once

#include "CoreMinimal.h"
#include "TextBlockWidgetStyle.generated.h"

UCLASS()
class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FTextBlockStyle TextBlockStyle;


};