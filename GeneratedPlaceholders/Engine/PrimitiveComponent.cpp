#include "PrimitiveComponent.h"

void UPrimitiveComponent::WakeRigidBody(const struct FName& BoneName) {
}
	void UPrimitiveComponent::WakeAllRigidBodies() {
}
	void UPrimitiveComponent::SetWalkableSlopeOverride(const struct FWalkableSlopeOverride& NewOverride) {
}
	void UPrimitiveComponent::SetUseCCD(bool InUseCCD, const struct FName& BoneName) {
}
	void UPrimitiveComponent::SetTranslucentSortPriority(int NewTranslucentSortPriority) {
}
	void UPrimitiveComponent::SetSingleSampleShadowFromStationaryLights(bool bNewSingleSampleShadowFromStationaryLights) {
}
	void UPrimitiveComponent::SetSimulatePhysics(bool bSimulate) {
}
	void UPrimitiveComponent::SetRenderInMono(bool bValue) {
}
	void UPrimitiveComponent::SetRenderInMainPass(bool bValue) {
}
	void UPrimitiveComponent::SetRenderCustomDepth(bool bValue) {
}
	void UPrimitiveComponent::SetReceivesDecals(bool bNewReceivesDecals) {
}
	void UPrimitiveComponent::SetPhysMaterialOverride(class UPhysicalMaterial* NewPhysMaterial) {
}
	void UPrimitiveComponent::SetPhysicsMaxAngularVelocityInRadians(float NewMaxAngVel, bool bAddToCurrent, const struct FName& BoneName) {
}
	void UPrimitiveComponent::SetPhysicsMaxAngularVelocityInDegrees(float NewMaxAngVel, bool bAddToCurrent, const struct FName& BoneName) {
}
	void UPrimitiveComponent::SetPhysicsMaxAngularVelocity(float NewMaxAngVel, bool bAddToCurrent, const struct FName& BoneName) {
}
	void UPrimitiveComponent::SetPhysicsLinearVelocity(const struct FVector& NewVel, bool bAddToCurrent, const struct FName& BoneName) {
}
	void UPrimitiveComponent::SetPhysicsAngularVelocityInRadians(const struct FVector& NewAngVel, bool bAddToCurrent, const struct FName& BoneName) {
}
	void UPrimitiveComponent::SetPhysicsAngularVelocityInDegrees(const struct FVector& NewAngVel, bool bAddToCurrent, const struct FName& BoneName) {
}
	void UPrimitiveComponent::SetPhysicsAngularVelocity(const struct FVector& NewAngVel, bool bAddToCurrent, const struct FName& BoneName) {
}
	void UPrimitiveComponent::SetOwnerNoSee(bool bNewOwnerNoSee) {
}
	void UPrimitiveComponent::SetOnlyOwnerSee(bool bNewOnlyOwnerSee) {
}
	void UPrimitiveComponent::SetNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision) {
}
	void UPrimitiveComponent::SetMaterialByName(const struct FName& MaterialSlotName, class UMaterialInterface* Material) {
}
	void UPrimitiveComponent::SetMaterial(int ElementIndex, class UMaterialInterface* Material) {
}
	void UPrimitiveComponent::SetMassScale(const struct FName& BoneName, float InMassScale) {
}
	void UPrimitiveComponent::SetMassOverrideInKg(const struct FName& BoneName, float MassInKg, bool bOverrideMass) {
}
	void UPrimitiveComponent::SetLockedAxis(TEnumAsByte<EDOFMode> LockedAxis) {
}
	void UPrimitiveComponent::SetLinearDamping(float InDamping) {
}
	void UPrimitiveComponent::SetGenerateOverlapEvents(bool bInGenerateOverlapEvents) {
}
	void UPrimitiveComponent::SetEnableGravity(bool bGravityEnabled) {
}
	void UPrimitiveComponent::SetCustomDepthStencilWriteMask(ERendererStencilMask WriteMaskBit) {
}
	void UPrimitiveComponent::SetCustomDepthStencilValue(int Value) {
}
	void UPrimitiveComponent::SetCullDistance(float NewCullDistance) {
}
	void UPrimitiveComponent::SetConstraintMode(TEnumAsByte<EDOFMode> ConstraintMode) {
}
	void UPrimitiveComponent::SetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse) {
}
	void UPrimitiveComponent::SetCollisionResponseToAllChannels(TEnumAsByte<ECollisionResponse> NewResponse) {
}
	void UPrimitiveComponent::SetCollisionProfileName(const struct FName& InCollisionProfileName) {
}
	void UPrimitiveComponent::SetCollisionObjectType(TEnumAsByte<ECollisionChannel> Channel) {
}
	void UPrimitiveComponent::SetCollisionEnabled(TEnumAsByte<ECollisionEnabled> NewType) {
}
	void UPrimitiveComponent::SetCenterOfMass(const struct FVector& CenterOfMassOffset, const struct FName& BoneName) {
}
	void UPrimitiveComponent::SetCastShadow(bool NewCastShadow) {
}
	void UPrimitiveComponent::SetBoundsScale(float NewBoundsScale) {
}
	void UPrimitiveComponent::SetAngularDamping(float InDamping) {
}
	void UPrimitiveComponent::SetAllUseCCD(bool InUseCCD) {
}
	void UPrimitiveComponent::SetAllPhysicsLinearVelocity(const struct FVector& NewVel, bool bAddToCurrent) {
}
	void UPrimitiveComponent::SetAllPhysicsAngularVelocityInRadians(const struct FVector& NewAngVel, bool bAddToCurrent) {
}
	void UPrimitiveComponent::SetAllPhysicsAngularVelocityInDegrees(const struct FVector& NewAngVel, bool bAddToCurrent) {
}
	void UPrimitiveComponent::SetAllPhysicsAngularVelocity(const struct FVector& NewAngVel, bool bAddToCurrent) {
}
	void UPrimitiveComponent::SetAllMassScale(float InMassScale) {
}
	struct FVector UPrimitiveComponent::ScaleByMomentOfInertia(const struct FVector& InputVector, const struct FName& BoneName) {
}
	void UPrimitiveComponent::PutRigidBodyToSleep(const struct FName& BoneName) {
}
	bool UPrimitiveComponent::K2_LineTraceComponent(const struct FVector& TraceStart, const struct FVector& TraceEnd, bool bTraceComplex, bool bShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit) {
}
	bool UPrimitiveComponent::K2_IsQueryCollisionEnabled() {
}
	bool UPrimitiveComponent::K2_IsPhysicsCollisionEnabled() {
}
	bool UPrimitiveComponent::K2_IsCollisionEnabled() {
}
	bool UPrimitiveComponent::IsOverlappingComponent(class UPrimitiveComponent* OtherComp) {
}
	bool UPrimitiveComponent::IsOverlappingActor(class AActor* Other) {
}
	bool UPrimitiveComponent::IsGravityEnabled() {
}
	bool UPrimitiveComponent::IsAnyRigidBodyAwake() {
}
	void UPrimitiveComponent::IgnoreComponentWhenMoving(class UPrimitiveComponent* Component, bool bShouldIgnore) {
}
	void UPrimitiveComponent::IgnoreActorWhenMoving(class AActor* Actor, bool bShouldIgnore) {
}
	struct FWalkableSlopeOverride UPrimitiveComponent::GetWalkableSlopeOverride() {
}
	struct FVector UPrimitiveComponent::GetPhysicsLinearVelocityAtPoint(const struct FVector& Point, const struct FName& BoneName) {
}
	struct FVector UPrimitiveComponent::GetPhysicsLinearVelocity(const struct FName& BoneName) {
}
	struct FVector UPrimitiveComponent::GetPhysicsAngularVelocityInRadians(const struct FName& BoneName) {
}
	struct FVector UPrimitiveComponent::GetPhysicsAngularVelocityInDegrees(const struct FName& BoneName) {
}
	struct FVector UPrimitiveComponent::GetPhysicsAngularVelocity(const struct FName& BoneName) {
}
	void UPrimitiveComponent::GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OutOverlappingComponents) {
}
	void UPrimitiveComponent::GetOverlappingActors(class UClass* ClassFilter, TArray<class AActor*>* OverlappingActors) {
}
	int UPrimitiveComponent::GetNumMaterials() {
}
	class UMaterialInterface* UPrimitiveComponent::GetMaterialFromCollisionFaceIndex(int FaceIndex, int* SectionIndex) {
}
	class UMaterialInterface* UPrimitiveComponent::GetMaterial(int ElementIndex) {
}
	float UPrimitiveComponent::GetMassScale(const struct FName& BoneName) {
}
	float UPrimitiveComponent::GetMass() {
}
	float UPrimitiveComponent::GetLinearDamping() {
}
	struct FVector UPrimitiveComponent::GetInertiaTensor(const struct FName& BoneName) {
}
	bool UPrimitiveComponent::GetGenerateOverlapEvents() {
}
	TEnumAsByte<ECollisionResponse> UPrimitiveComponent::GetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel) {
}
	struct FName UPrimitiveComponent::GetCollisionProfileName() {
}
	TEnumAsByte<ECollisionChannel> UPrimitiveComponent::GetCollisionObjectType() {
}
	TEnumAsByte<ECollisionEnabled> UPrimitiveComponent::GetCollisionEnabled() {
}
	float UPrimitiveComponent::GetClosestPointOnCollision(const struct FVector& Point, const struct FName& BoneName, struct FVector* OutPointOnBody) {
}
	struct FVector UPrimitiveComponent::GetCenterOfMass(const struct FName& BoneName) {
}
	float UPrimitiveComponent::GetAngularDamping() {
}
	class UMaterialInstanceDynamic* UPrimitiveComponent::CreateDynamicMaterialInstance(int ElementIndex, class UMaterialInterface* SourceMaterial, const struct FName& OptionalName) {
}
	class UMaterialInstanceDynamic* UPrimitiveComponent::CreateAndSetMaterialInstanceDynamicFromMaterial(int ElementIndex, class UMaterialInterface* Parent) {
}
	class UMaterialInstanceDynamic* UPrimitiveComponent::CreateAndSetMaterialInstanceDynamic(int ElementIndex) {
}
	TArray<class UPrimitiveComponent*> UPrimitiveComponent::CopyArrayOfMoveIgnoreComponents() {
}
	TArray<class AActor*> UPrimitiveComponent::CopyArrayOfMoveIgnoreActors() {
}
	void UPrimitiveComponent::ClearMoveIgnoreComponents() {
}
	void UPrimitiveComponent::ClearMoveIgnoreActors() {
}
	bool UPrimitiveComponent::CanCharacterStepUp(class APawn* Pawn) {
}
	void UPrimitiveComponent::AddTorqueInRadians(const struct FVector& Torque, const struct FName& BoneName, bool bAccelChange) {
}
	void UPrimitiveComponent::AddTorqueInDegrees(const struct FVector& Torque, const struct FName& BoneName, bool bAccelChange) {
}
	void UPrimitiveComponent::AddTorque(const struct FVector& Torque, const struct FName& BoneName, bool bAccelChange) {
}
	void UPrimitiveComponent::AddRadialImpulse(const struct FVector& Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bVelChange) {
}
	void UPrimitiveComponent::AddRadialForce(const struct FVector& Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bAccelChange) {
}
	void UPrimitiveComponent::AddImpulseAtLocation(const struct FVector& Impulse, const struct FVector& Location, const struct FName& BoneName) {
}
	void UPrimitiveComponent::AddImpulse(const struct FVector& Impulse, const struct FName& BoneName, bool bVelChange) {
}
	void UPrimitiveComponent::AddForceAtLocationLocal(const struct FVector& Force, const struct FVector& Location, const struct FName& BoneName) {
}
	void UPrimitiveComponent::AddForceAtLocation(const struct FVector& Force, const struct FVector& Location, const struct FName& BoneName) {
}
	void UPrimitiveComponent::AddForce(const struct FVector& Force, const struct FName& BoneName, bool bAccelChange) {
}
	void UPrimitiveComponent::AddAngularImpulseInRadians(const struct FVector& Impulse, const struct FName& BoneName, bool bVelChange) {
}
	void UPrimitiveComponent::AddAngularImpulseInDegrees(const struct FVector& Impulse, const struct FName& BoneName, bool bVelChange) {
}
	void UPrimitiveComponent::AddAngularImpulse(const struct FVector& Impulse, const struct FName& BoneName, bool bVelChange) {
}
