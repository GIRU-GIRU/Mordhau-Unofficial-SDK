#pragma once

#include "CoreMinimal.h"
#include "AISenseConfig_Sight.generated.h"

UCLASS()
class UAISenseConfig_Sight : public UAISenseConfig
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* Implementation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SightRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LoseSightRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PeripheralVisionAngleDegrees;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAISenseAffiliationFilter DetectionByAffiliation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AutoSuccessRangeFromLastSeenLocation;


};