#pragma once

#include "CoreMinimal.h"
#include "SlateBrushAsset.generated.h"

UCLASS()
class USlateBrushAsset : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSlateBrush Brush;


};