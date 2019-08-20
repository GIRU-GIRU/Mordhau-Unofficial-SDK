#pragma once

#include "CoreMinimal.h"
#include "SlateWidgetStyleAsset.generated.h"

UCLASS()
class USlateWidgetStyleAsset : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USlateWidgetStyleContainerBase* CustomStyle;


};