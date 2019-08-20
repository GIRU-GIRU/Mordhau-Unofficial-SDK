#pragma once

#include "CoreMinimal.h"
#include "InterpTrackInstFloatProp.generated.h"

UCLASS()
class UInterpTrackInstFloatProp : public UInterpTrackInstProperty
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ResetFloat;


};