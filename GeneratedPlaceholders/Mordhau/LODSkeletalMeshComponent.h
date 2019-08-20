#pragma once

#include "CoreMinimal.h"
#include "LODSkeletalMeshComponent.generated.h"

UCLASS()
class ULODSkeletalMeshComponent : public USkeletalMeshComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LODDeltaTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastLODDeltaTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasSkippedThisFrame;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int FramesSinceLastLODTick;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int FramesUntilNextLODTick;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxLODDeltaTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bSmoothClothLODTransition;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ClothLODTransitionSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bSkipTransformUpdate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bPreventTicking;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUpdateLODIfPreventTicking;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bForceNextTick;


};