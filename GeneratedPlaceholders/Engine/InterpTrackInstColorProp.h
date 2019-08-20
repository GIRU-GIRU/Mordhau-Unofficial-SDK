#pragma once

#include "CoreMinimal.h"
#include "InterpTrackInstColorProp.generated.h"

UCLASS()
class UInterpTrackInstColorProp : public UInterpTrackInstProperty
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColor ResetColor;


};