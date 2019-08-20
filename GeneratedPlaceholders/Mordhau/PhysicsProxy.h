#pragma once

#include "CoreMinimal.h"
#include "PhysicsProxy.generated.h"

UCLASS()
class APhysicsProxy : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AActor> Original;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FTransform Offset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMeshComponent* SkeletalMesh;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float IdleTime;


};