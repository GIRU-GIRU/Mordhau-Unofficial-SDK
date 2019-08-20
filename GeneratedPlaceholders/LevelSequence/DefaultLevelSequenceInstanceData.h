#pragma once

#include "CoreMinimal.h"
#include "DefaultLevelSequenceInstanceData.generated.h"

UCLASS()
class UDefaultLevelSequenceInstanceData : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AActor* TransformOriginActor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FTransform TransformOrigin;


};