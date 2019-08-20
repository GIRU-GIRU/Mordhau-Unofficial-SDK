#pragma once

#include "CoreMinimal.h"
#include "EnvQueryGenerator_OnCircle.generated.h"

UCLASS()
class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAIDataProviderFloatValue CircleRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAIDataProviderFloatValue SpaceBetween;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAIDataProviderIntValue NumberOfPoints;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EPointOnCircleSpacingMethod PointOnCircleSpacingMethod;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FEnvDirection ArcDirection;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAIDataProviderFloatValue ArcAngle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AngleRadians;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* CircleCenter;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIgnoreAnyContextActorsWhenGeneratingCircle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAIDataProviderFloatValue CircleCenterZOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FEnvTraceData TraceData;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDefineArc : 1;


};