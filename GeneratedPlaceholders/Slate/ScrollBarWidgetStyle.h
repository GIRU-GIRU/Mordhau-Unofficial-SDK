#pragma once

#include "CoreMinimal.h"
#include "ScrollBarWidgetStyle.generated.h"

UCLASS()
class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScrollBarStyle ScrollBarStyle;


};