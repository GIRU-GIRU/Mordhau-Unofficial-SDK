#pragma once

#include "CoreMinimal.h"
#include "InterpTrackMoveAxis.generated.h"

UCLASS()
class UInterpTrackMoveAxis : public UInterpTrackFloatBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EInterpMoveAxis> MoveAxis;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FInterpLookupTrack LookupTrack;


};