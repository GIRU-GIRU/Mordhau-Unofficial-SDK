#pragma once

#include "CoreMinimal.h"
#include "Breakpoint.generated.h"

UCLASS()
class UBreakpoint : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnabled : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UEdGraphNode* Node;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bStepOnce : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bStepOnce_WasPreviouslyDisabled : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bStepOnce_RemoveAfterHit : 1;


};