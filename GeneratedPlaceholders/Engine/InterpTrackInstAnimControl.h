#pragma once

#include "CoreMinimal.h"
#include "InterpTrackInstAnimControl.generated.h"

UCLASS()
class UInterpTrackInstAnimControl : public UInterpTrackInst
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastUpdatePosition;


};