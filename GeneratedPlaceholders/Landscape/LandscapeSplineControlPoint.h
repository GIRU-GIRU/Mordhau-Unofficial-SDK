#pragma once

#include "CoreMinimal.h"
#include "LandscapeSplineControlPoint.generated.h"

UCLASS()
class ULandscapeSplineControlPoint : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector Location;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator Rotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Width;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SideFalloff;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float EndFalloff;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FLandscapeSplineConnection> ConnectedSegments;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FLandscapeSplineInterpPoint> Points;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBox Bounds;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UControlPointMeshComponent* LocalMeshComponent;


};