#pragma once

#include "CoreMinimal.h"
#include "InterpFilter.generated.h"

UCLASS()
class UInterpFilter : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString Caption;


};