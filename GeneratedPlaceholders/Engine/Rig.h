#pragma once

#include "CoreMinimal.h"
#include "Rig.generated.h"

UCLASS()
class URig : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FTransformBase> TransformBases;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FNode> Nodes;


};