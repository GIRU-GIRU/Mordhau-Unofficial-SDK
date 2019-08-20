#pragma once

#include "CoreMinimal.h"
#include "WidgetTree.generated.h"

UCLASS()
class UWidgetTree : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UWidget* RootWidget;


};