#pragma once

#include "CoreMinimal.h"
#include "BehaviorTreeManager.generated.h"

UCLASS()
class UBehaviorTreeManager : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxDebuggerSteps;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FBehaviorTreeTemplateInfo> LoadedTemplates;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UBehaviorTreeComponent*> ActiveComponents;


};