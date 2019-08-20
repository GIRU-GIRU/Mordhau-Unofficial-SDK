#pragma once

#include "CoreMinimal.h"
#include "GeometryCache.generated.h"

UCLASS()
class UGeometryCache : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMaterialInterface*> Materials;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UGeometryCacheTrack*> Tracks;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int StartFrame;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int EndFrame;


};