#pragma once

#include "CoreMinimal.h"
#include "BTTask_PlayAnimation.generated.h"

UCLASS()
class UBTTask_PlayAnimation : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimationAsset* AnimationToPlay;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bLooping : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bNonBlocking : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBehaviorTreeComponent* MyOwnerComp;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMeshComponent* CachedSkelMesh;


};