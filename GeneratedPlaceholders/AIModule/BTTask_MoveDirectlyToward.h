#pragma once

#include "CoreMinimal.h"
#include "BTTask_MoveDirectlyToward.generated.h"

UCLASS()
class UBTTask_MoveDirectlyToward : public UBTTask_MoveTo
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDisablePathUpdateOnGoalLocationChange : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bProjectVectorGoalToNavigation : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUpdatedDeprecatedProperties : 1;


};