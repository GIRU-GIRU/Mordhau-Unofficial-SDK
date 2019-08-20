#pragma once

#include "CoreMinimal.h"
#include "BTService_BlackboardBase.generated.h"

UCLASS()
class UBTService_BlackboardBase : public UBTService
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBlackboardKeySelector BlackboardKey;


};