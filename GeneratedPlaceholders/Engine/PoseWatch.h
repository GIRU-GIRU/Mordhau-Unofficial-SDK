#pragma once

#include "CoreMinimal.h"
#include "PoseWatch.generated.h"

UCLASS()
class UPoseWatch : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UEdGraphNode* Node;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColor PoseWatchColour;


};