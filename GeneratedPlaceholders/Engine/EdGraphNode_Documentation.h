#pragma once

#include "CoreMinimal.h"
#include "EdGraphNode_Documentation.generated.h"

UCLASS()
class UEdGraphNode_Documentation : public UEdGraphNode
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString Link;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString Excerpt;


};