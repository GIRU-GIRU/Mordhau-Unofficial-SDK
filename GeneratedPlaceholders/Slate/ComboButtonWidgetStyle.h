#pragma once

#include "CoreMinimal.h"
#include "ComboButtonWidgetStyle.generated.h"

UCLASS()
class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FComboButtonStyle ComboButtonStyle;


};