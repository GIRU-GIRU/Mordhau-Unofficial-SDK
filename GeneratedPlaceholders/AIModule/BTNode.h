#pragma once

#include "CoreMinimal.h"
#include "BTNode.generated.h"

UCLASS()
class UBTNode : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString NodeName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBehaviorTree* TreeAsset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBTCompositeNode* ParentNode;


};