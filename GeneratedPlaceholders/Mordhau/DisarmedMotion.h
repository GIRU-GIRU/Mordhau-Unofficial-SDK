#pragma once

#include "CoreMinimal.h"
#include "DisarmedMotion.generated.h"

UCLASS()
class UDisarmedMotion : public UMordhauMotion
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RecoveryTime;


};