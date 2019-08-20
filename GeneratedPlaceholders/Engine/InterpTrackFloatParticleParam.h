#pragma once

#include "CoreMinimal.h"
#include "InterpTrackFloatParticleParam.generated.h"

UCLASS()
class UInterpTrackFloatParticleParam : public UInterpTrackFloatBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName ParamName;


};