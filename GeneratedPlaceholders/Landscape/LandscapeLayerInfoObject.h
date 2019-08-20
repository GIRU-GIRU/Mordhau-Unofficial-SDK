#pragma once

#include "CoreMinimal.h"
#include "LandscapeLayerInfoObject.generated.h"

UCLASS()
class ULandscapeLayerInfoObject : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName LayerName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPhysicalMaterial* PhysMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Hardness;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor LayerUsageDebugColor;


};