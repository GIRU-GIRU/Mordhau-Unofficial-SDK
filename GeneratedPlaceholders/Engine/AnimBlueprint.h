#pragma once

#include "CoreMinimal.h"
#include "AnimBlueprint.generated.h"

UCLASS()
class UAnimBlueprint : public UBlueprint
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeleton* TargetSkeleton;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FAnimGroupInfo> Groups;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseMultiThreadedAnimationUpdate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bWarnAboutBlueprintUsage;


};