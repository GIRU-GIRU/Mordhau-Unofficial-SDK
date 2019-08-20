#pragma once

#include "CoreMinimal.h"
#include "InterpTrackColorProp.generated.h"

UCLASS()
class UInterpTrackColorProp : public UInterpTrackVectorBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName PropertyName;


};