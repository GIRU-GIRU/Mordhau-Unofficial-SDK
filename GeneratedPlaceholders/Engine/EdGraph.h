#pragma once

#include "CoreMinimal.h"
#include "EdGraph.generated.h"

UCLASS()
class UEdGraph : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* Schema;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UEdGraphNode*> Nodes;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEditable : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAllowDeletion : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAllowRenaming : 1;


};