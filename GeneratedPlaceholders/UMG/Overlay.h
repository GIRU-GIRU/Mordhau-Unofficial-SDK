#pragma once

#include "CoreMinimal.h"
#include "Overlay.generated.h"

UCLASS()
class UOverlay : public UPanelWidget
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "Overlay")
	class UOverlaySlot* AddChildToOverlay(class UWidget* Content);

};