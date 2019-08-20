#pragma once

#include "CoreMinimal.h"
#include "InterpTrackInstLinearColorProp.generated.h"

UCLASS()
class UInterpTrackInstLinearColorProp : public UInterpTrackInstProperty
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor ResetColor;


};