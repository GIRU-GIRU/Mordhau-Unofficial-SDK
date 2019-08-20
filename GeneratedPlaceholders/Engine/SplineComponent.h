#pragma once

#include "CoreMinimal.h"
#include "SplineComponent.generated.h"

UCLASS()
class USplineComponent : public UPrimitiveComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSplineCurves SplineCurves;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FInterpCurveVector SplineInfo;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FInterpCurveQuat SplineRotInfo;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FInterpCurveVector SplineScaleInfo;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FInterpCurveFloat SplineReparamTable;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAllowSplineEditingPerInstance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ReparamStepsPerSegment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Duration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bStationaryEndpoints;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bSplineHasBeenEdited;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bModifiedByConstructionScript;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bInputSplinePointsToConstructionScript;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDrawDebug;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bClosedLoop;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bLoopPositionOverride;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LoopPosition;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector DefaultUpVector;

	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
	void UpdateSpline();
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		void SetWorldLocationAtSplinePoint(int PointIndex, const struct FVector& InLocation);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		void SetUpVectorAtSplinePoint(int PointIndex, const struct FVector& InUpVector, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		void SetUnselectedSplineSegmentColor(const struct FLinearColor& SegmentColor);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		void SetTangentsAtSplinePoint(int PointIndex, const struct FVector& InArriveTangent, const struct FVector& InLeaveTangent, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		void SetTangentAtSplinePoint(int PointIndex, const struct FVector& InTangent, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		void SetSplineWorldPoints(TArray<struct FVector> Points);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		void SetSplinePointType(int PointIndex, TEnumAsByte<ESplinePointType> Type, bool bUpdateSpline);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		void SetSplinePoints(TArray<struct FVector> Points, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		void SetSplineLocalPoints(TArray<struct FVector> Points);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		void SetSelectedSplineSegmentColor(const struct FLinearColor& SegmentColor);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		void SetLocationAtSplinePoint(int PointIndex, const struct FVector& InLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		void SetDrawDebug(bool bShow);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		void SetDefaultUpVector(const struct FVector& UpVector, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		void SetClosedLoopAtPosition(bool bInClosedLoop, float Key, bool bUpdateSpline);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		void SetClosedLoop(bool bInClosedLoop, bool bUpdateSpline);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		void RemoveSplinePoint(int Index, bool bUpdateSpline);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		bool IsClosedLoop();
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FVector GetWorldTangentAtDistanceAlongSpline(float Distance);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FRotator GetWorldRotationAtTime(float Time, bool bUseConstantVelocity);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FRotator GetWorldRotationAtDistanceAlongSpline(float Distance);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FVector GetWorldLocationAtTime(float Time, bool bUseConstantVelocity);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FVector GetWorldLocationAtSplinePoint(int PointIndex);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FVector GetWorldLocationAtDistanceAlongSpline(float Distance);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FVector GetWorldDirectionAtTime(float Time, bool bUseConstantVelocity);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FVector GetWorldDirectionAtDistanceAlongSpline(float Distance);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FVector GetUpVectorAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FVector GetUpVectorAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FVector GetUpVectorAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FTransform GetTransformAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity, bool bUseScale);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FTransform GetTransformAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseScale);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FTransform GetTransformAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseScale);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FVector GetTangentAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FVector GetTangentAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FVector GetTangentAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		TEnumAsByte<ESplinePointType> GetSplinePointType(int PointIndex);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		float GetSplineLength();
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FVector GetScaleAtTime(float Time, bool bUseConstantVelocity);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FVector GetScaleAtSplinePoint(int PointIndex);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FVector GetScaleAtDistanceAlongSpline(float Distance);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FRotator GetRotationAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FRotator GetRotationAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FRotator GetRotationAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		float GetRollAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		float GetRollAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		float GetRollAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FVector GetRightVectorAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FVector GetRightVectorAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FVector GetRightVectorAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		int GetNumberOfSplinePoints();
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FVector GetLocationAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FVector GetLocationAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FVector GetLocationAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		void GetLocationAndTangentAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, struct FVector* Location, struct FVector* Tangent);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		void GetLocalLocationAndTangentAtSplinePoint(int PointIndex, struct FVector* LocalLocation, struct FVector* LocalTangent);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FVector GetLeaveTangentAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		float GetInputKeyAtDistanceAlongSpline(float Distance);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		float GetDistanceAlongSplineAtSplinePoint(int PointIndex);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FVector GetDirectionAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FVector GetDirectionAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FVector GetDirectionAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FVector GetDefaultUpVector(TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FVector GetArriveTangentAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FVector FindUpVectorClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FTransform FindTransformClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseScale);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FVector FindTangentClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FVector FindScaleClosestToWorldLocation(const struct FVector& WorldLocation);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FRotator FindRotationClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		float FindRollClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FVector FindRightVectorClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FVector FindLocationClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		float FindInputKeyClosestToWorldLocation(const struct FVector& WorldLocation);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		struct FVector FindDirectionClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		void ClearSplinePoints(bool bUpdateSpline);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		void AddSplineWorldPoint(const struct FVector& Position);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		void AddSplinePointAtIndex(const struct FVector& Position, int Index, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		void AddSplinePoint(const struct FVector& Position, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		void AddSplineLocalPoint(const struct FVector& Position);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		void AddPoints(TArray<struct FSplinePoint> Points, bool bUpdateSpline);
	UFUNCTION(BlueprintCallable, Category = "SplineComponent")
		void AddPoint(const struct FSplinePoint& Point, bool bUpdateSpline);

};