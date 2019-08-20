#pragma once

#include "CoreMinimal.h"
#include "InterpTrackInstVectorProp.generated.h"

UCLASS()
class UInterpTrackInstVectorProp : public UInterpTrackInstProperty
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector ResetVector;


};