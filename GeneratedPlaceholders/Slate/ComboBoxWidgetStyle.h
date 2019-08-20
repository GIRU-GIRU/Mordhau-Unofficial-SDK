#pragma once

#include "CoreMinimal.h"
#include "ComboBoxWidgetStyle.generated.h"

UCLASS()
class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FComboBoxStyle ComboBoxStyle;


};