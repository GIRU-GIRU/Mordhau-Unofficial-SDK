#pragma once

#include "CoreMinimal.h"
#include "SubUVAnimation.generated.h"

UCLASS()
class USubUVAnimation : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture2D* SubUVTexture;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SubImages_Horizontal;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SubImages_Vertical;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ESubUVBoundingVertexCount> BoundingMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EOpacitySourceMode> OpacitySourceMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AlphaThreshold;


};