#pragma once

#include "CoreMinimal.h"
#include "MordhauUserWidget.generated.h"

UCLASS()
class UMordhauUserWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMordhauWidgetComponent* ParentWidgetComponent;


};