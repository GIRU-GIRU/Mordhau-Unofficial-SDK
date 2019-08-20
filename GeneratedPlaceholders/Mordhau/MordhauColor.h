#pragma once

#include "CoreMinimal.h"
#include "MordhauColor.generated.h"

UCLASS()
class UMordhauColor : public UMordhauInventoryItem
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor Color;


};