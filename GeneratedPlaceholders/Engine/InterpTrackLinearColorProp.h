#pragma once

#include "CoreMinimal.h"
#include "InterpTrackLinearColorProp.generated.h"

UCLASS()
class UInterpTrackLinearColorProp : public UInterpTrackLinearColorBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName PropertyName;


};