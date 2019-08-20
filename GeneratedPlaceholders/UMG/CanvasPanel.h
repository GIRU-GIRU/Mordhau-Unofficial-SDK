#pragma once

#include "CoreMinimal.h"
#include "CanvasPanel.generated.h"

UCLASS()
class UCanvasPanel : public UPanelWidget
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "CanvasPanel")
	class UCanvasPanelSlot* AddChildToCanvas(class UWidget* Content);

};