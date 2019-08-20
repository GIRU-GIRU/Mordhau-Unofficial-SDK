#pragma once

#include "CoreMinimal.h"
#include "BTDecorator.generated.h"

UCLASS()
class UBTDecorator : public UBTAuxiliaryNode
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData00 : 7;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bInverseCondition : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EBTFlowAbortMode> FlowAbortMode;


};