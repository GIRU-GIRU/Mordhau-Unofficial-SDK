#pragma once

#include "CoreMinimal.h"
#include "AISense_Sight.generated.h"

UCLASS()
class UAISense_Sight : public UAISense
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxTracesPerTick;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MinQueriesPerTimeSliceCheck;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	double MaxTimeSlicePerTick;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HighImportanceQueryDistanceThreshold;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxQueryImportance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SightLimitQueryImportance;


};