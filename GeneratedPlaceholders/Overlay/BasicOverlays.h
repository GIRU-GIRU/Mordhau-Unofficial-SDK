#pragma once

#include "CoreMinimal.h"
#include "BasicOverlays.generated.h"

UCLASS()
class UBasicOverlays : public UOverlays
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FOverlayItem> Overlays;


};