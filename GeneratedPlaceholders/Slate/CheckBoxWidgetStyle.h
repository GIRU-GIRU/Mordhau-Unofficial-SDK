#pragma once

#include "CoreMinimal.h"
#include "CheckBoxWidgetStyle.generated.h"

UCLASS()
class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FCheckBoxStyle CheckBoxStyle;


};