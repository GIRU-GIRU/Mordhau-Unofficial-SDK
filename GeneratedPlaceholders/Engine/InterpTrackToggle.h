#pragma once

#include "CoreMinimal.h"
#include "InterpTrackToggle.generated.h"

UCLASS()
class UInterpTrackToggle : public UInterpTrack
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FToggleTrackKey> ToggleTrack;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bActivateSystemEachUpdate : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bActivateWithJustAttachedFlag : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bFireEventsWhenForwards : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bFireEventsWhenBackwards : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bFireEventsWhenJumpingForwards : 1;


};