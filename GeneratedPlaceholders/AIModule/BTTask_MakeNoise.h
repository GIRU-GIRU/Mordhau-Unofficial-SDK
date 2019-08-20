#pragma once

#include "CoreMinimal.h"
#include "BTTask_MakeNoise.generated.h"

UCLASS()
class UBTTask_MakeNoise : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Loudnes;


};