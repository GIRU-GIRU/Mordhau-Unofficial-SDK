#pragma once

#include "CoreMinimal.h"
#include "AISenseConfig_Hearing.generated.h"

UCLASS()
class UAISenseConfig_Hearing : public UAISenseConfig
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* Implementation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HearingRange;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LoSHearingRange;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseLoSHearing : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAISenseAffiliationFilter DetectionByAffiliation;


};