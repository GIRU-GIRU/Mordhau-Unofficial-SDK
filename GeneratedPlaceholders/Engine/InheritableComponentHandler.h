#pragma once

#include "CoreMinimal.h"
#include "InheritableComponentHandler.generated.h"

UCLASS()
class UInheritableComponentHandler : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FComponentOverrideRecord> Records;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UActorComponent*> UnnecessaryComponents;


};