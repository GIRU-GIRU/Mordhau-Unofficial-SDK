#pragma once

#include "CoreMinimal.h"
#include "InterpTrackFloatProp.generated.h"

UCLASS()
class UInterpTrackFloatProp : public UInterpTrackFloatBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName PropertyName;


};