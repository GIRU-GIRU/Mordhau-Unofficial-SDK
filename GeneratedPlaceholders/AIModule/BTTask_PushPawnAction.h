#pragma once

#include "CoreMinimal.h"
#include "BTTask_PushPawnAction.generated.h"

UCLASS()
class UBTTask_PushPawnAction : public UBTTask_PawnActionBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPawnAction* Action;


};