#pragma once

#include "CoreMinimal.h"
#include "PlayerStart.generated.h"

UCLASS()
class APlayerStart : public ANavigationObjectBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName PlayerStartTag;


};