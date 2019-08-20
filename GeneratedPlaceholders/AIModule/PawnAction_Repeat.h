#pragma once

#include "CoreMinimal.h"
#include "PawnAction_Repeat.generated.h"

UCLASS()
class UPawnAction_Repeat : public UPawnAction
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPawnAction* ActionToRepeat;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPawnAction* RecentActionCopy;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EPawnActionFailHandling> ChildFailureHandlingMode;


};