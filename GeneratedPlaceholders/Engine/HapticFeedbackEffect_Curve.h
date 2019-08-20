#pragma once

#include "CoreMinimal.h"
#include "HapticFeedbackEffect_Curve.generated.h"

UCLASS()
class UHapticFeedbackEffect_Curve : public UHapticFeedbackEffect_Base
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FHapticFeedbackDetails_Curve HapticDetails;


};