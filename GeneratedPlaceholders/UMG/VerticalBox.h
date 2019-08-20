#pragma once

#include "CoreMinimal.h"
#include "VerticalBox.generated.h"

UCLASS()
class UVerticalBox : public UPanelWidget
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "VerticalBox")
	class UVerticalBoxSlot* AddChildToVerticalBox(class UWidget* Content);

};