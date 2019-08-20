#pragma once

#include "CoreMinimal.h"
#include "HorizontalBox.generated.h"

UCLASS()
class UHorizontalBox : public UPanelWidget
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "HorizontalBox")
	class UHorizontalBoxSlot* AddChildToHorizontalBox(class UWidget* Content);

};