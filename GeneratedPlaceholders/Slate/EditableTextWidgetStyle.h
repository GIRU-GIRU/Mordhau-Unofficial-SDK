#pragma once

#include "CoreMinimal.h"
#include "EditableTextWidgetStyle.generated.h"

UCLASS()
class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FEditableTextStyle EditableTextStyle;


};