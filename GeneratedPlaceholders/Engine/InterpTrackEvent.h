#pragma once

#include "CoreMinimal.h"
#include "InterpTrackEvent.generated.h"

UCLASS()
class UInterpTrackEvent : public UInterpTrack
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FEventTrackKey> EventTrack;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bFireEventsWhenForwards : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bFireEventsWhenBackwards : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bFireEventsWhenJumpingForwards : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseCustomEventName : 1;


};