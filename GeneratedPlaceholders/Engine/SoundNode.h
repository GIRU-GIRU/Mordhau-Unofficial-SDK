#pragma once

#include "CoreMinimal.h"
#include "SoundNode.generated.h"

UCLASS()
class USoundNode : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class USoundNode*> ChildNodes;


};