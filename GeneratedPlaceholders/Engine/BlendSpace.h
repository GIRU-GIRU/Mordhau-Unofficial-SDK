#pragma once

#include "CoreMinimal.h"
#include "BlendSpace.generated.h"

UCLASS()
class UBlendSpace : public UBlendSpaceBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EBlendSpaceAxis> AxisToScaleAnimation;


};