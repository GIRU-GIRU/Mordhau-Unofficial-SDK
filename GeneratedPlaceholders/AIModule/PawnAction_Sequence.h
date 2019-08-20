#pragma once

#include "CoreMinimal.h"
#include "PawnAction_Sequence.generated.h"

UCLASS()
class UPawnAction_Sequence : public UPawnAction
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UPawnAction*> ActionSequence;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EPawnActionFailHandling> ChildFailureHandlingMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPawnAction* RecentActionCopy;


};