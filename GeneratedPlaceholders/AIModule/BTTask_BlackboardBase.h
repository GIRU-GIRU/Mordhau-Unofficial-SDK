#pragma once

#include "CoreMinimal.h"
#include "BTTask_BlackboardBase.generated.h"

UCLASS()
class UBTTask_BlackboardBase : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBlackboardKeySelector BlackboardKey;


};