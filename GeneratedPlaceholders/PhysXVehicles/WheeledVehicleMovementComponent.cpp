#include "WheeledVehicleMovementComponent.h"

void UWheeledVehicleMovementComponent::SetUseAutoGears(bool bUseAuto) {
}
	void UWheeledVehicleMovementComponent::SetThrottleInput(float Throttle) {
}
	void UWheeledVehicleMovementComponent::SetTargetGear(int GearNum, bool bImmediate) {
}
	void UWheeledVehicleMovementComponent::SetSteeringInput(float Steering) {
}
	void UWheeledVehicleMovementComponent::SetHandbrakeInput(bool bNewHandbrake) {
}
	void UWheeledVehicleMovementComponent::SetGroupsToIgnoreMask(const struct FNavAvoidanceMask& GroupMask) {
}
	void UWheeledVehicleMovementComponent::SetGroupsToIgnore(int GroupFlags) {
}
	void UWheeledVehicleMovementComponent::SetGroupsToAvoidMask(const struct FNavAvoidanceMask& GroupMask) {
}
	void UWheeledVehicleMovementComponent::SetGroupsToAvoid(int GroupFlags) {
}
	void UWheeledVehicleMovementComponent::SetGearUp(bool bNewGearUp) {
}
	void UWheeledVehicleMovementComponent::SetGearDown(bool bNewGearDown) {
}
	void UWheeledVehicleMovementComponent::SetBrakeInput(float Brake) {
}
	void UWheeledVehicleMovementComponent::SetAvoidanceGroupMask(const struct FNavAvoidanceMask& GroupMask) {
}
	void UWheeledVehicleMovementComponent::SetAvoidanceGroup(int GroupFlags) {
}
	void UWheeledVehicleMovementComponent::SetAvoidanceEnabled(bool bEnable) {
}
	void UWheeledVehicleMovementComponent::ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int CurrentGear) {
}
	bool UWheeledVehicleMovementComponent::GetUseAutoGears() {
}
	int UWheeledVehicleMovementComponent::GetTargetGear() {
}
	float UWheeledVehicleMovementComponent::GetForwardSpeed() {
}
	float UWheeledVehicleMovementComponent::GetEngineRotationSpeed() {
}
	float UWheeledVehicleMovementComponent::GetEngineMaxRotationSpeed() {
}
	int UWheeledVehicleMovementComponent::GetCurrentGear() {
}
