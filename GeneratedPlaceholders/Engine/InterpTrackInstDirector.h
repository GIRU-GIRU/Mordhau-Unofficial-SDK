#pragma once

#include "CoreMinimal.h"
#include "InterpTrackInstDirector.generated.h"

UCLASS()
class UInterpTrackInstDirector : public UInterpTrackInst
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AActor* OldViewTarget;


};