#pragma once

#include "CoreMinimal.h"
#include "EditableTextBoxWidgetStyle.generated.h"

UCLASS()
class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FEditableTextBoxStyle EditableTextBoxStyle;


};