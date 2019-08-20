#pragma once

#include "CoreMinimal.h"
#include "BTTask_RotateToFaceBBEntry.generated.h"

UCLASS()
class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Precision;


};