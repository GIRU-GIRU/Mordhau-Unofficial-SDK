#pragma once

#include "CoreMinimal.h"
#include "InterpTrackVisibility.generated.h"

UCLASS()
class UInterpTrackVisibility : public UInterpTrack
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FVisibilityTrackKey> VisibilityTrack;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bFireEventsWhenForwards : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bFireEventsWhenBackwards : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bFireEventsWhenJumpingForwards : 1;


};