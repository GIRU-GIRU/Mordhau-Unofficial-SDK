#pragma once

#include "CoreMinimal.h"
#include "CameraAnim.generated.h"

UCLASS()
class UCameraAnim : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UInterpGroup* CameraInterpGroup;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AnimLength;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBox BoundingBox;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRelativeToInitialTransform : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRelativeToInitialFOV : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BaseFOV;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FPostProcessSettings BasePostProcessSettings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BasePostProcessBlendWeight;


};