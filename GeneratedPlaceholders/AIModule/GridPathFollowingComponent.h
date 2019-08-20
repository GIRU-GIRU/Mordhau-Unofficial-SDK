#pragma once

#include "CoreMinimal.h"
#include "GridPathFollowingComponent.generated.h"

UCLASS()
class UGridPathFollowingComponent : public UPathFollowingComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UNavLocalGridManager* GridManager;


};