#pragma once

#include "CoreMinimal.h"
#include "SpinBoxWidgetStyle.generated.h"

UCLASS()
class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSpinBoxStyle SpinBoxStyle;


};