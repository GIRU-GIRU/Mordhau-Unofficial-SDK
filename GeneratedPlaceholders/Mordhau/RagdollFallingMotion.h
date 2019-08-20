#pragma once

#include "CoreMinimal.h"
#include "RagdollFallingMotion.generated.h"

UCLASS()
class URagdollFallingMotion : public UMordhauMotion
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsGettingUp;


};