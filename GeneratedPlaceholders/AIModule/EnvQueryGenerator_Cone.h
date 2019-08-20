#pragma once

#include "CoreMinimal.h"
#include "EnvQueryGenerator_Cone.generated.h"

UCLASS()
class UEnvQueryGenerator_Cone : public UEnvQueryGenerator_ProjectedPoints
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAIDataProviderFloatValue AlignedPointsDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAIDataProviderFloatValue ConeDegrees;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAIDataProviderFloatValue AngleStep;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAIDataProviderFloatValue Range;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* CenterActor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIncludeContextLocation : 1;


};