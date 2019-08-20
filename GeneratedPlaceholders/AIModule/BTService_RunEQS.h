#pragma once

#include "CoreMinimal.h"
#include "BTService_RunEQS.generated.h"

UCLASS()
class UBTService_RunEQS : public UBTService_BlackboardBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FEQSParametrizedQueryExecutionRequest EQSRequest;


};