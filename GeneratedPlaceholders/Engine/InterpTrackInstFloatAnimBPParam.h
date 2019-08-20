#pragma once

#include "CoreMinimal.h"
#include "InterpTrackInstFloatAnimBPParam.generated.h"

UCLASS()
class UInterpTrackInstFloatAnimBPParam : public UInterpTrackInst
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimInstance* AnimScriptInstance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ResetFloat;


};