#pragma once

#include "CoreMinimal.h"
#include "InterpTrackInstSlomo.generated.h"

UCLASS()
class UInterpTrackInstSlomo : public UInterpTrackInst
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float OldTimeDilation;


};