#pragma once

#include "CoreMinimal.h"
#include "BTCompositeNode.generated.h"

UCLASS()
class UBTCompositeNode : public UBTNode
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FBTCompositeChild> Children;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UBTService*> Services;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bApplyDecoratorScope : 1;


};