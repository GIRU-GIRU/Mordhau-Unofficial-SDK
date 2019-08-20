#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree.generated.h"

UCLASS()
class UBehaviorTree : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBTCompositeNode* RootNode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBlackboardData* BlackboardAsset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UBTDecorator*> RootDecorators;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FBTDecoratorLogic> RootDecoratorOps;


};