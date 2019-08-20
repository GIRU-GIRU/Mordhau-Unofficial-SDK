#pragma once

#include "CoreMinimal.h"
#include "InterpTrackInstEvent.generated.h"

UCLASS()
class UInterpTrackInstEvent : public UInterpTrackInst
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastUpdatePosition;


};