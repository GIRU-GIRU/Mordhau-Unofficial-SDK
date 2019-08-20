#pragma once

#include "CoreMinimal.h"
#include "PanelSlot.generated.h"

UCLASS()
class UPanelSlot : public UVisual
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* Parent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UWidget* Content;


};