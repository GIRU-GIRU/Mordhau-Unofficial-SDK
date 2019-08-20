#pragma once

#include "CoreMinimal.h"
#include "GeometryCacheCodecBase.generated.h"

UCLASS()
class UGeometryCacheCodecBase : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<int> TopologyRanges;


};