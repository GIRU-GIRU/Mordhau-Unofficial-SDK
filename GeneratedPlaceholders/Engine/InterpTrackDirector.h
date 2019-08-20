#pragma once

#include "CoreMinimal.h"
#include "InterpTrackDirector.generated.h"

UCLASS()
class UInterpTrackDirector : public UInterpTrack
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FDirectorTrackCut> CutTrack;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSimulateCameraCutsOnClients : 1;


};