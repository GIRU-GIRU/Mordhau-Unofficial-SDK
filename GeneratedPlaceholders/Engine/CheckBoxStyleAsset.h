#pragma once

#include "CoreMinimal.h"
#include "CheckBoxStyleAsset.generated.h"

UCLASS()
class UCheckBoxStyleAsset : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FCheckBoxStyle CheckBoxStyle;


};