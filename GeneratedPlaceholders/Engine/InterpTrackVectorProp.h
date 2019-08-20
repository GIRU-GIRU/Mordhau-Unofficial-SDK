#pragma once

#include "CoreMinimal.h"
#include "InterpTrackVectorProp.generated.h"

UCLASS()
class UInterpTrackVectorProp : public UInterpTrackVectorBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName PropertyName;


};