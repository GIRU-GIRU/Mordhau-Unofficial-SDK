#pragma once

#include "CoreMinimal.h"
#include "InterpTrack.generated.h"

UCLASS()
class UInterpTrack : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UInterpTrack*> SubTracks;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* TrackInstClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ETrackActiveCondition> ActiveCondition;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString TrackTitle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOnePerGroup : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDirGroupOnly : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDisableTrack : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsSelected : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsAnimControlTrack : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSubTrackOnly : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bVisible : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsRecording : 1;


};