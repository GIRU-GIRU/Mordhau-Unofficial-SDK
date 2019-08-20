#pragma once

#include "CoreMinimal.h"
#include "InterpTrackInstVisibility.generated.h"

UCLASS()
class UInterpTrackInstVisibility : public UInterpTrackInst
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EVisibilityTrackAction> Action;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastUpdatePosition;


};