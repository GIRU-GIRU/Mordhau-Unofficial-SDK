#pragma once

#include "CoreMinimal.h"
#include "ButtonWidgetStyle.generated.h"

UCLASS()
class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FButtonStyle ButtonStyle;


};