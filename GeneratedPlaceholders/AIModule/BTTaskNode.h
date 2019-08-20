#pragma once

#include "CoreMinimal.h"
#include "BTTaskNode.generated.h"

UCLASS()
class UBTTaskNode : public UBTNode
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UBTService*> Services;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIgnoreRestartSelf : 1;


};