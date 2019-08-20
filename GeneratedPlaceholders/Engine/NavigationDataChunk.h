#pragma once

#include "CoreMinimal.h"
#include "NavigationDataChunk.generated.h"

UCLASS()
class UNavigationDataChunk : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName NavigationDataName;


};