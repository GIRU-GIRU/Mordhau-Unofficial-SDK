#pragma once

#include "CoreMinimal.h"
#include "PawnAction_Wait.generated.h"

UCLASS()
class UPawnAction_Wait : public UPawnAction
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TimeToWait;


};