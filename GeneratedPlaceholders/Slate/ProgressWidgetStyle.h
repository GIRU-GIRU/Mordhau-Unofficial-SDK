#pragma once

#include "CoreMinimal.h"
#include "ProgressWidgetStyle.generated.h"

UCLASS()
class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FProgressBarStyle ProgressBarStyle;


};