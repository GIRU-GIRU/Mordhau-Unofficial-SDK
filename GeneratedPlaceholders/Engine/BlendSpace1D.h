#pragma once

#include "CoreMinimal.h"
#include "BlendSpace1D.generated.h"

UCLASS()
class UBlendSpace1D : public UBlendSpaceBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bScaleAnimation;


};