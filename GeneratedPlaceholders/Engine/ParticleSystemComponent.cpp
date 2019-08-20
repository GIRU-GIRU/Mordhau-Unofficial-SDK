#include "ParticleSystemComponent.h"

void UParticleSystemComponent::SetVectorParameter(const struct FName& ParameterName, const struct FVector& Param) {
}
	void UParticleSystemComponent::SetTrailSourceData(const struct FName& InFirstSocketName, const struct FName& InSecondSocketName, TEnumAsByte<ETrailWidthMode> InWidthMode, float InWidth) {
}
	void UParticleSystemComponent::SetTemplate(class UParticleSystem* NewTemplate) {
}
	void UParticleSystemComponent::SetMaterialParameter(const struct FName& ParameterName, class UMaterialInterface* Param) {
}
	void UParticleSystemComponent::SetFloatParameter(const struct FName& ParameterName, float Param) {
}
	void UParticleSystemComponent::SetEmitterEnable(const struct FName& EmitterName, bool bNewEnableState) {
}
	void UParticleSystemComponent::SetColorParameter(const struct FName& ParameterName, const struct FLinearColor& Param) {
}
	void UParticleSystemComponent::SetBeamTargetTangent(int EmitterIndex, const struct FVector& NewTangentPoint, int TargetIndex) {
}
	void UParticleSystemComponent::SetBeamTargetStrength(int EmitterIndex, float NewTargetStrength, int TargetIndex) {
}
	void UParticleSystemComponent::SetBeamTargetPoint(int EmitterIndex, const struct FVector& NewTargetPoint, int TargetIndex) {
}
	void UParticleSystemComponent::SetBeamSourceTangent(int EmitterIndex, const struct FVector& NewTangentPoint, int SourceIndex) {
}
	void UParticleSystemComponent::SetBeamSourceStrength(int EmitterIndex, float NewSourceStrength, int SourceIndex) {
}
	void UParticleSystemComponent::SetBeamSourcePoint(int EmitterIndex, const struct FVector& NewSourcePoint, int SourceIndex) {
}
	void UParticleSystemComponent::SetBeamEndPoint(int EmitterIndex, const struct FVector& NewEndPoint) {
}
	void UParticleSystemComponent::SetAutoAttachParams(class USceneComponent* Parent, const struct FName& SocketName, TEnumAsByte<EAttachLocation> LocationType) {
}
	void UParticleSystemComponent::SetAutoAttachmentParameters(class USceneComponent* Parent, const struct FName& SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule) {
}
	void UParticleSystemComponent::SetActorParameter(const struct FName& ParameterName, class AActor* Param) {
}
	void UParticleSystemComponent::ReleaseToPool() {
}
	int UParticleSystemComponent::GetNumActiveParticles() {
}
	class UMaterialInterface* UParticleSystemComponent::GetNamedMaterial(const struct FName& InName) {
}
	bool UParticleSystemComponent::GetBeamTargetTangent(int EmitterIndex, int TargetIndex, struct FVector* OutTangentPoint) {
}
	bool UParticleSystemComponent::GetBeamTargetStrength(int EmitterIndex, int TargetIndex, float* OutTargetStrength) {
}
	bool UParticleSystemComponent::GetBeamTargetPoint(int EmitterIndex, int TargetIndex, struct FVector* OutTargetPoint) {
}
	bool UParticleSystemComponent::GetBeamSourceTangent(int EmitterIndex, int SourceIndex, struct FVector* OutTangentPoint) {
}
	bool UParticleSystemComponent::GetBeamSourceStrength(int EmitterIndex, int SourceIndex, float* OutSourceStrength) {
}
	bool UParticleSystemComponent::GetBeamSourcePoint(int EmitterIndex, int SourceIndex, struct FVector* OutSourcePoint) {
}
	bool UParticleSystemComponent::GetBeamEndPoint(int EmitterIndex, struct FVector* OutEndPoint) {
}
	void UParticleSystemComponent::GenerateParticleEvent(const struct FName& InEventName, float InEmitterTime, const struct FVector& InLocation, const struct FVector& InDirection, const struct FVector& InVelocity) {
}
	void UParticleSystemComponent::EndTrails() {
}
	class UMaterialInstanceDynamic* UParticleSystemComponent::CreateNamedDynamicMaterialInstance(const struct FName& InName, class UMaterialInterface* SourceMaterial) {
}
	void UParticleSystemComponent::BeginTrails(const struct FName& InFirstSocketName, const struct FName& InSecondSocketName, TEnumAsByte<ETrailWidthMode> InWidthMode, float InWidth) {
}
