#include "PlayerCameraManager.h"

void APlayerCameraManager::StopCameraShake(class UCameraShake* ShakeInstance, bool bImmediately) {
}
	void APlayerCameraManager::StopCameraFade() {
}
	void APlayerCameraManager::StopCameraAnimInst(class UCameraAnimInst* AnimInst, bool bImmediate) {
}
	void APlayerCameraManager::StopAllInstancesOfCameraShake(class UClass* Shake, bool bImmediately) {
}
	void APlayerCameraManager::StopAllInstancesOfCameraAnim(class UCameraAnim* Anim, bool bImmediate) {
}
	void APlayerCameraManager::StopAllCameraShakes(bool bImmediately) {
}
	void APlayerCameraManager::StopAllCameraAnims(bool bImmediate) {
}
	void APlayerCameraManager::StartCameraFade(float FromAlpha, float ToAlpha, float Duration, const struct FLinearColor& Color, bool bShouldFadeAudio, bool bHoldWhenFinished) {
}
	void APlayerCameraManager::SetManualCameraFade(float InFadeAmount, const struct FLinearColor& Color, bool bInFadeAudio) {
}
	bool APlayerCameraManager::RemoveCameraModifier(class UCameraModifier* ModifierToRemove) {
}
	void APlayerCameraManager::RemoveCameraLensEffect(class AEmitterCameraLensEffectBase* Emitter) {
}
	class UCameraShake* APlayerCameraManager::PlayCameraShake(class UClass* ShakeClass, float Scale, TEnumAsByte<ECameraAnimPlaySpace> PlaySpace, const struct FRotator& UserPlaySpaceRot) {
}
	class UCameraAnimInst* APlayerCameraManager::PlayCameraAnim(class UCameraAnim* Anim, float Rate, float Scale, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, float Duration, TEnumAsByte<ECameraAnimPlaySpace> PlaySpace, const struct FRotator& UserPlaySpaceRot) {
}
	void APlayerCameraManager::PhotographyCameraModify(const struct FVector& NewCameraLocation, const struct FVector& PreviousCameraLocation, const struct FVector& OriginalCameraLocation, struct FVector* ResultCameraLocation) {
}
	void APlayerCameraManager::OnPhotographySessionStart() {
}
	void APlayerCameraManager::OnPhotographySessionEnd() {
}
	void APlayerCameraManager::OnPhotographyMultiPartCaptureStart() {
}
	void APlayerCameraManager::OnPhotographyMultiPartCaptureEnd() {
}
	class APlayerController* APlayerCameraManager::GetOwningPlayerController() {
}
	float APlayerCameraManager::GetFOVAngle() {
}
	struct FRotator APlayerCameraManager::GetCameraRotation() {
}
	struct FVector APlayerCameraManager::GetCameraLocation() {
}
	class UCameraModifier* APlayerCameraManager::FindCameraModifierByClass(class UClass* ModifierClass) {
}
	void APlayerCameraManager::ClearCameraLensEffects() {
}
	bool APlayerCameraManager::BlueprintUpdateCamera(class AActor* CameraTarget, struct FVector* NewCameraLocation, struct FRotator* NewCameraRotation, float* NewCameraFOV) {
}
	class UCameraModifier* APlayerCameraManager::AddNewCameraModifier(class UClass* ModifierClass) {
}
	class AEmitterCameraLensEffectBase* APlayerCameraManager::AddCameraLensEffect(class UClass* LensEffectEmitterClass) {
}
