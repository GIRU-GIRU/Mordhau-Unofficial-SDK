#include "Actor.h"

bool AActor::WasRecentlyRendered(float Tolerance) {
}
	void AActor::UserConstructionScript() {
}
	void AActor::TearOff() {
}
	void AActor::SnapRootComponentTo(class AActor* InParentActor, const struct FName& InSocketName) {
}
	void AActor::SetTickGroup(TEnumAsByte<ETickingGroup> NewTickGroup) {
}
	void AActor::SetTickableWhenPaused(bool bTickableWhenPaused) {
}
	void AActor::SetReplicates(bool bInReplicates) {
}
	void AActor::SetReplicateMovement(bool bInReplicateMovement) {
}
	void AActor::SetOwner(class AActor* NewOwner) {
}
	void AActor::SetNetDormancy(TEnumAsByte<ENetDormancy> NewDormancy) {
}
	void AActor::SetLifeSpan(float InLifespan) {
}
	void AActor::SetActorTickInterval(float TickInterval) {
}
	void AActor::SetActorTickEnabled(bool bEnabled) {
}
	void AActor::SetActorScale3D(const struct FVector& NewScale3D) {
}
	void AActor::SetActorRelativeScale3D(const struct FVector& NewRelativeScale) {
}
	void AActor::SetActorHiddenInGame(bool bNewHidden) {
}
	void AActor::SetActorEnableCollision(bool bNewActorEnableCollision) {
}
	void AActor::RemoveTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent) {
}
	void AActor::RemoveTickPrerequisiteActor(class AActor* PrerequisiteActor) {
}
	void AActor::ReceiveTick(float DeltaSeconds) {
}
	void AActor::ReceiveRadialDamage(float DamageReceived, class UDamageType* DamageType, const struct FVector& Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser) {
}
	void AActor::ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo) {
}
	void AActor::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit) {
}
	void AActor::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason) {
}
	void AActor::ReceiveDestroyed() {
}
	void AActor::ReceiveBeginPlay() {
}
	void AActor::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser) {
}
	void AActor::ReceiveActorOnReleased(const struct FKey& ButtonReleased) {
}
	void AActor::ReceiveActorOnInputTouchLeave(TEnumAsByte<ETouchIndex> FingerIndex) {
}
	void AActor::ReceiveActorOnInputTouchEnter(TEnumAsByte<ETouchIndex> FingerIndex) {
}
	void AActor::ReceiveActorOnInputTouchEnd(TEnumAsByte<ETouchIndex> FingerIndex) {
}
	void AActor::ReceiveActorOnInputTouchBegin(TEnumAsByte<ETouchIndex> FingerIndex) {
}
	void AActor::ReceiveActorOnClicked(const struct FKey& ButtonPressed) {
}
	void AActor::ReceiveActorEndOverlap(class AActor* OtherActor) {
}
	void AActor::ReceiveActorEndCursorOver() {
}
	void AActor::ReceiveActorBeginOverlap(class AActor* OtherActor) {
}
	void AActor::ReceiveActorBeginCursorOver() {
}
	void AActor::PrestreamTextures(float Seconds, bool bEnableStreaming, int CinematicTextureGroups) {
}
	void AActor::OnRep_ReplicateMovement() {
}
	void AActor::OnRep_ReplicatedMovement() {
}
	void AActor::OnRep_Owner() {
}
	void AActor::OnRep_Instigator() {
}
	void AActor::OnRep_AttachmentReplication() {
}
	void AActor::MakeNoise(float Loudness, class APawn* NoiseInstigator, const struct FVector& NoiseLocation, float MaxRange, const struct FName& Tag) {
}
	class UMaterialInstanceDynamic* AActor::MakeMIDForMaterial(class UMaterialInterface* Parent) {
}
	bool AActor::K2_TeleportTo(const struct FVector& DestLocation, const struct FRotator& DestRotation) {
}
	bool AActor::K2_SetActorTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult) {
}
	bool AActor::K2_SetActorRotation(const struct FRotator& NewRotation, bool bTeleportPhysics) {
}
	void AActor::K2_SetActorRelativeTransform(const struct FTransform& NewRelativeTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult) {
}
	void AActor::K2_SetActorRelativeRotation(const struct FRotator& NewRelativeRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult) {
}
	void AActor::K2_SetActorRelativeLocation(const struct FVector& NewRelativeLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult) {
}
	bool AActor::K2_SetActorLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult) {
}
	bool AActor::K2_SetActorLocation(const struct FVector& NewLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult) {
}
	void AActor::K2_OnReset() {
}
	void AActor::K2_OnEndViewTarget(class APlayerController* PC) {
}
	void AActor::K2_OnBecomeViewTarget(class APlayerController* PC) {
}
	class USceneComponent* AActor::K2_GetRootComponent() {
}
	struct FRotator AActor::K2_GetActorRotation() {
}
	struct FVector AActor::K2_GetActorLocation() {
}
	void AActor::K2_DetachFromActor(EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule) {
}
	void AActor::K2_DestroyComponent(class UActorComponent* Component) {
}
	void AActor::K2_DestroyActor() {
}
	void AActor::K2_AttachToComponent(class USceneComponent* Parent, const struct FName& SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies) {
}
	void AActor::K2_AttachToActor(class AActor* ParentActor, const struct FName& SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies) {
}
	void AActor::K2_AttachRootComponentToActor(class AActor* InParentActor, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies) {
}
	void AActor::K2_AttachRootComponentTo(class USceneComponent* InParent, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies) {
}
	void AActor::K2_AddActorWorldTransform(const struct FTransform& DeltaTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult) {
}
	void AActor::K2_AddActorWorldRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult) {
}
	void AActor::K2_AddActorWorldOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult) {
}
	void AActor::K2_AddActorLocalTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult) {
}
	void AActor::K2_AddActorLocalRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult) {
}
	void AActor::K2_AddActorLocalOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult) {
}
	bool AActor::IsOverlappingActor(class AActor* Other) {
}
	bool AActor::IsChildActor() {
}
	bool AActor::IsActorTickEnabled() {
}
	bool AActor::IsActorBeingDestroyed() {
}
	bool AActor::HasAuthority() {
}
	float AActor::GetVerticalDistanceTo(class AActor* OtherActor) {
}
	struct FVector AActor::GetVelocity() {
}
	struct FTransform AActor::GetTransform() {
}
	bool AActor::GetTickableWhenPaused() {
}
	float AActor::GetSquaredDistanceTo(class AActor* OtherActor) {
}
	TEnumAsByte<ENetRole> AActor::GetRemoteRole() {
}
	class UChildActorComponent* AActor::GetParentComponent() {
}
	class AActor* AActor::GetParentActor() {
}
	class AActor* AActor::GetOwner() {
}
	void AActor::GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OverlappingComponents) {
}
	void AActor::GetOverlappingActors(class UClass* ClassFilter, TArray<class AActor*>* OverlappingActors) {
}
	TEnumAsByte<ENetRole> AActor::GetLocalRole() {
}
	float AActor::GetLifeSpan() {
}
	class AController* AActor::GetInstigatorController() {
}
	class APawn* AActor::GetInstigator() {
}
	struct FVector AActor::GetInputVectorAxisValue(const struct FKey& InputAxisKey) {
}
	float AActor::GetInputAxisValue(const struct FName& InputAxisName) {
}
	float AActor::GetInputAxisKeyValue(const struct FKey& InputAxisKey) {
}
	float AActor::GetHorizontalDotProductTo(class AActor* OtherActor) {
}
	float AActor::GetHorizontalDistanceTo(class AActor* OtherActor) {
}
	float AActor::GetGameTimeSinceCreation() {
}
	float AActor::GetDotProductTo(class AActor* OtherActor) {
}
	float AActor::GetDistanceTo(class AActor* OtherActor) {
}
	TArray<class UActorComponent*> AActor::GetComponentsByTag(class UClass* ComponentClass, const struct FName& Tag) {
}
	TArray<class UActorComponent*> AActor::GetComponentsByClass(class UClass* ComponentClass) {
}
	class UActorComponent* AActor::GetComponentByClass(class UClass* ComponentClass) {
}
	struct FName AActor::GetAttachParentSocketName() {
}
	class AActor* AActor::GetAttachParentActor() {
}
	void AActor::GetAttachedActors(TArray<class AActor*>* OutActors) {
}
	void AActor::GetAllChildActors(bool bIncludeDescendants, TArray<class AActor*>* ChildActors) {
}
	struct FVector AActor::GetActorUpVector() {
}
	float AActor::GetActorTimeDilation() {
}
	float AActor::GetActorTickInterval() {
}
	struct FVector AActor::GetActorScale3D() {
}
	struct FVector AActor::GetActorRightVector() {
}
	struct FVector AActor::GetActorRelativeScale3D() {
}
	struct FVector AActor::GetActorForwardVector() {
}
	void AActor::GetActorEyesViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation) {
}
	bool AActor::GetActorEnableCollision() {
}
	void AActor::GetActorBounds(bool bOnlyCollidingComponents, struct FVector* Origin, struct FVector* BoxExtent) {
}
	void AActor::ForceNetUpdate() {
}
	void AActor::FlushNetDormancy() {
}
	void AActor::EnableInput(class APlayerController* PlayerController) {
}
	void AActor::DisableInput(class APlayerController* PlayerController) {
}
	void AActor::DetachRootComponentFromParent(bool bMaintainWorldPosition) {
}
	void AActor::AddTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent) {
}
	void AActor::AddTickPrerequisiteActor(class AActor* PrerequisiteActor) {
}
	class UActorComponent* AActor::AddComponent(const struct FName& TemplateName, bool bManualAttachment, const struct FTransform& RelativeTransform, class UObject* ComponentTemplateContext) {
}
	bool AActor::ActorHasTag(const struct FName& Tag) {
}
