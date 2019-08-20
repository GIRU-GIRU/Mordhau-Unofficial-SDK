#pragma once

#include "CoreMinimal.h"
#include "SoundNodeGroupControl.generated.h"

UCLASS()
class USoundNodeGroupControl : public USoundNode
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<int> GroupSizes;


};