#pragma once

#include "CoreMinimal.h"
#include "PhysicsAsset.generated.h"

UCLASS()
class UPhysicsAsset : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<int> BoundsBodies;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class USkeletalBodySetup*> SkeletalBodySetups;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UPhysicsConstraintTemplate*> ConstraintSetup;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseAsyncScene : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bNotForDedicatedServer : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UThumbnailInfo* ThumbnailInfo;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UBodySetup*> BodySetup;


};