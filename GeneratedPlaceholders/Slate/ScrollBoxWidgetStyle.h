#pragma once

#include "CoreMinimal.h"
#include "ScrollBoxWidgetStyle.generated.h"

UCLASS()
class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScrollBoxStyle ScrollBoxStyle;


};