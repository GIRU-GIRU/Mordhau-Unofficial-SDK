#pragma once

#include "CoreMinimal.h"
#include "SoundNodeBranch.generated.h"

UCLASS()
class USoundNodeBranch : public USoundNode
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName BoolParameterName;


};