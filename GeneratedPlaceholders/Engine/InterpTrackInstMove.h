#pragma once

#include "CoreMinimal.h"
#include "InterpTrackInstMove.generated.h"

UCLASS()
class UInterpTrackInstMove : public UInterpTrackInst
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector ResetLocation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator ResetRotation;


};