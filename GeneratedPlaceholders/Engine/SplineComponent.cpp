#include "SplineComponent.h"

void USplineComponent::UpdateSpline() {
}
	void USplineComponent::SetWorldLocationAtSplinePoint(int PointIndex, const struct FVector& InLocation) {
}
	void USplineComponent::SetUpVectorAtSplinePoint(int PointIndex, const struct FVector& InUpVector, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline) {
}
	void USplineComponent::SetUnselectedSplineSegmentColor(const struct FLinearColor& SegmentColor) {
}
	void USplineComponent::SetTangentsAtSplinePoint(int PointIndex, const struct FVector& InArriveTangent, const struct FVector& InLeaveTangent, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline) {
}
	void USplineComponent::SetTangentAtSplinePoint(int PointIndex, const struct FVector& InTangent, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline) {
}
	void USplineComponent::SetSplineWorldPoints(TArray<struct FVector> Points) {
}
	void USplineComponent::SetSplinePointType(int PointIndex, TEnumAsByte<ESplinePointType> Type, bool bUpdateSpline) {
}
	void USplineComponent::SetSplinePoints(TArray<struct FVector> Points, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline) {
}
	void USplineComponent::SetSplineLocalPoints(TArray<struct FVector> Points) {
}
	void USplineComponent::SetSelectedSplineSegmentColor(const struct FLinearColor& SegmentColor) {
}
	void USplineComponent::SetLocationAtSplinePoint(int PointIndex, const struct FVector& InLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline) {
}
	void USplineComponent::SetDrawDebug(bool bShow) {
}
	void USplineComponent::SetDefaultUpVector(const struct FVector& UpVector, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) {
}
	void USplineComponent::SetClosedLoopAtPosition(bool bInClosedLoop, float Key, bool bUpdateSpline) {
}
	void USplineComponent::SetClosedLoop(bool bInClosedLoop, bool bUpdateSpline) {
}
	void USplineComponent::RemoveSplinePoint(int Index, bool bUpdateSpline) {
}
	bool USplineComponent::IsClosedLoop() {
}
	struct FVector USplineComponent::GetWorldTangentAtDistanceAlongSpline(float Distance) {
}
	struct FRotator USplineComponent::GetWorldRotationAtTime(float Time, bool bUseConstantVelocity) {
}
	struct FRotator USplineComponent::GetWorldRotationAtDistanceAlongSpline(float Distance) {
}
	struct FVector USplineComponent::GetWorldLocationAtTime(float Time, bool bUseConstantVelocity) {
}
	struct FVector USplineComponent::GetWorldLocationAtSplinePoint(int PointIndex) {
}
	struct FVector USplineComponent::GetWorldLocationAtDistanceAlongSpline(float Distance) {
}
	struct FVector USplineComponent::GetWorldDirectionAtTime(float Time, bool bUseConstantVelocity) {
}
	struct FVector USplineComponent::GetWorldDirectionAtDistanceAlongSpline(float Distance) {
}
	struct FVector USplineComponent::GetUpVectorAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity) {
}
	struct FVector USplineComponent::GetUpVectorAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) {
}
	struct FVector USplineComponent::GetUpVectorAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) {
}
	struct FTransform USplineComponent::GetTransformAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity, bool bUseScale) {
}
	struct FTransform USplineComponent::GetTransformAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseScale) {
}
	struct FTransform USplineComponent::GetTransformAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseScale) {
}
	struct FVector USplineComponent::GetTangentAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity) {
}
	struct FVector USplineComponent::GetTangentAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) {
}
	struct FVector USplineComponent::GetTangentAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) {
}
	TEnumAsByte<ESplinePointType> USplineComponent::GetSplinePointType(int PointIndex) {
}
	float USplineComponent::GetSplineLength() {
}
	struct FVector USplineComponent::GetScaleAtTime(float Time, bool bUseConstantVelocity) {
}
	struct FVector USplineComponent::GetScaleAtSplinePoint(int PointIndex) {
}
	struct FVector USplineComponent::GetScaleAtDistanceAlongSpline(float Distance) {
}
	struct FRotator USplineComponent::GetRotationAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity) {
}
	struct FRotator USplineComponent::GetRotationAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) {
}
	struct FRotator USplineComponent::GetRotationAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) {
}
	float USplineComponent::GetRollAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity) {
}
	float USplineComponent::GetRollAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) {
}
	float USplineComponent::GetRollAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) {
}
	struct FVector USplineComponent::GetRightVectorAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity) {
}
	struct FVector USplineComponent::GetRightVectorAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) {
}
	struct FVector USplineComponent::GetRightVectorAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) {
}
	int USplineComponent::GetNumberOfSplinePoints() {
}
	struct FVector USplineComponent::GetLocationAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity) {
}
	struct FVector USplineComponent::GetLocationAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) {
}
	struct FVector USplineComponent::GetLocationAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) {
}
	void USplineComponent::GetLocationAndTangentAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, struct FVector* Location, struct FVector* Tangent) {
}
	void USplineComponent::GetLocalLocationAndTangentAtSplinePoint(int PointIndex, struct FVector* LocalLocation, struct FVector* LocalTangent) {
}
	struct FVector USplineComponent::GetLeaveTangentAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) {
}
	float USplineComponent::GetInputKeyAtDistanceAlongSpline(float Distance) {
}
	float USplineComponent::GetDistanceAlongSplineAtSplinePoint(int PointIndex) {
}
	struct FVector USplineComponent::GetDirectionAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity) {
}
	struct FVector USplineComponent::GetDirectionAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) {
}
	struct FVector USplineComponent::GetDirectionAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) {
}
	struct FVector USplineComponent::GetDefaultUpVector(TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) {
}
	struct FVector USplineComponent::GetArriveTangentAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) {
}
	struct FVector USplineComponent::FindUpVectorClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) {
}
	struct FTransform USplineComponent::FindTransformClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseScale) {
}
	struct FVector USplineComponent::FindTangentClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) {
}
	struct FVector USplineComponent::FindScaleClosestToWorldLocation(const struct FVector& WorldLocation) {
}
	struct FRotator USplineComponent::FindRotationClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) {
}
	float USplineComponent::FindRollClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) {
}
	struct FVector USplineComponent::FindRightVectorClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) {
}
	struct FVector USplineComponent::FindLocationClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) {
}
	float USplineComponent::FindInputKeyClosestToWorldLocation(const struct FVector& WorldLocation) {
}
	struct FVector USplineComponent::FindDirectionClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) {
}
	void USplineComponent::ClearSplinePoints(bool bUpdateSpline) {
}
	void USplineComponent::AddSplineWorldPoint(const struct FVector& Position) {
}
	void USplineComponent::AddSplinePointAtIndex(const struct FVector& Position, int Index, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline) {
}
	void USplineComponent::AddSplinePoint(const struct FVector& Position, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline) {
}
	void USplineComponent::AddSplineLocalPoint(const struct FVector& Position) {
}
	void USplineComponent::AddPoints(TArray<struct FSplinePoint> Points, bool bUpdateSpline) {
}
	void USplineComponent::AddPoint(const struct FSplinePoint& Point, bool bUpdateSpline) {
}
