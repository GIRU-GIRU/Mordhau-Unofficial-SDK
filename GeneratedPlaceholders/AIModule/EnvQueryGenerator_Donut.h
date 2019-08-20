#pragma once

#include "CoreMinimal.h"
#include "EnvQueryGenerator_Donut.generated.h"

UCLASS()
class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAIDataProviderFloatValue InnerRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAIDataProviderFloatValue OuterRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAIDataProviderIntValue NumberOfRings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAIDataProviderIntValue PointsPerRing;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FEnvDirection ArcDirection;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAIDataProviderFloatValue ArcAngle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseSpiralPattern;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* Center;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDefineArc : 1;


};