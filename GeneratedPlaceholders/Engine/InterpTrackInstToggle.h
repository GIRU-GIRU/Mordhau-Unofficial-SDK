#pragma once

#include "CoreMinimal.h"
#include "InterpTrackInstToggle.generated.h"

UCLASS()
class UInterpTrackInstToggle : public UInterpTrackInst
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ETrackToggleAction> Action;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastUpdatePosition;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSavedActiveState : 1;


};