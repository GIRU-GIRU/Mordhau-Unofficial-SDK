#pragma once

#include "CoreMinimal.h"
#include "WorldComposition.generated.h"

UCLASS()
class UWorldComposition : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class ULevelStreaming*> TilesStreaming;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	double TilesStreamingTimeThreshold;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bLoadAllTilesDuringCinematic;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bRebaseOriginIn3DSpace;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RebaseOriginDistance;


};