#pragma once

#include "CoreMinimal.h"
#include "EnvQueryGenerator_SimpleGrid.generated.h"

UCLASS()
class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAIDataProviderFloatValue GridSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAIDataProviderFloatValue SpaceBetween;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* GenerateAround;


};