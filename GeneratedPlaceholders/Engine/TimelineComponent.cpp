#include "TimelineComponent.h"

void UTimelineComponent::Stop() {
}
	void UTimelineComponent::SetVectorCurve(class UCurveVector* NewVectorCurve, const struct FName& VectorTrackName) {
}
	void UTimelineComponent::SetTimelineLengthMode(TEnumAsByte<ETimelineLengthMode> NewLengthMode) {
}
	void UTimelineComponent::SetTimelineLength(float NewLength) {
}
	void UTimelineComponent::SetPlayRate(float NewRate) {
}
	void UTimelineComponent::SetPlaybackPosition(float NewPosition, bool bFireEvents, bool bFireUpdate) {
}
	void UTimelineComponent::SetNewTime(float NewTime) {
}
	void UTimelineComponent::SetLooping(bool bNewLooping) {
}
	void UTimelineComponent::SetLinearColorCurve(class UCurveLinearColor* NewLinearColorCurve, const struct FName& LinearColorTrackName) {
}
	void UTimelineComponent::SetIgnoreTimeDilation(bool bNewIgnoreTimeDilation) {
}
	void UTimelineComponent::SetFloatCurve(class UCurveFloat* NewFloatCurve, const struct FName& FloatTrackName) {
}
	void UTimelineComponent::ReverseFromEnd() {
}
	void UTimelineComponent::Reverse() {
}
	void UTimelineComponent::PlayFromStart() {
}
	void UTimelineComponent::Play() {
}
	void UTimelineComponent::OnRep_Timeline() {
}
	bool UTimelineComponent::IsReversing() {
}
	bool UTimelineComponent::IsPlaying() {
}
	bool UTimelineComponent::IsLooping() {
}
	float UTimelineComponent::GetTimelineLength() {
}
	float UTimelineComponent::GetPlayRate() {
}
	float UTimelineComponent::GetPlaybackPosition() {
}
	bool UTimelineComponent::GetIgnoreTimeDilation() {
}
