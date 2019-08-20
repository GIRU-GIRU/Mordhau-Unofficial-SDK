#pragma once

#include "CoreMinimal.h"
#include "SimpleConstructionScript.generated.h"

UCLASS()
class USimpleConstructionScript : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class USCS_Node*> RootNodes;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class USCS_Node*> AllNodes;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USCS_Node* DefaultSceneRootNode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USCS_Node* RootNode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class USCS_Node*> ActorComponentNodes;


};