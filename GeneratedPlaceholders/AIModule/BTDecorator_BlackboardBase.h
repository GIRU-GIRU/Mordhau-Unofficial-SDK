#pragma once

#include "CoreMinimal.h"
#include "BTDecorator_BlackboardBase.generated.h"

UCLASS()
class UBTDecorator_BlackboardBase : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBlackboardKeySelector BlackboardKey;


};