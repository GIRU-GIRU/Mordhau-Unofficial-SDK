#pragma once

#include "CoreMinimal.h"
#include "LandscapeSplineSegment.generated.h"

UCLASS()
class ULandscapeSplineSegment : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLandscapeSplineSegmentConnection Connections[0x2];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FInterpCurveVector SplineInfo;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FLandscapeSplineInterpPoint> Points;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBox Bounds;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class USplineMeshComponent*> LocalMeshComponents;


};