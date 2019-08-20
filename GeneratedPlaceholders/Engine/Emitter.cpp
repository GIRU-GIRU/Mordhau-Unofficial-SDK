#include "Emitter.h"

void AEmitter::ToggleActive() {
}
	void AEmitter::SetVectorParameter(const struct FName& ParameterName, const struct FVector& Param) {
}
	void AEmitter::SetTemplate(class UParticleSystem* NewTemplate) {
}
	void AEmitter::SetMaterialParameter(const struct FName& ParameterName, class UMaterialInterface* Param) {
}
	void AEmitter::SetFloatParameter(const struct FName& ParameterName, float Param) {
}
	void AEmitter::SetColorParameter(const struct FName& ParameterName, const struct FLinearColor& Param) {
}
	void AEmitter::SetActorParameter(const struct FName& ParameterName, class AActor* Param) {
}
	void AEmitter::OnRep_bCurrentlyActive() {
}
	void AEmitter::OnParticleSystemFinished(class UParticleSystemComponent* FinishedComponent) {
}
	bool AEmitter::IsActive() {
}
	void AEmitter::Deactivate() {
}
	void AEmitter::Activate() {
}
