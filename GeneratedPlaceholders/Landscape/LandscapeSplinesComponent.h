#pragma once

#include "CoreMinimal.h"
#include "LandscapeSplinesComponent.generated.h"

UCLASS()
class ULandscapeSplinesComponent : public UPrimitiveComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class ULandscapeSplineControlPoint*> ControlPoints;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class ULandscapeSplineSegment*> Segments;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMeshComponent*> CookedForeignMeshComponents;


};