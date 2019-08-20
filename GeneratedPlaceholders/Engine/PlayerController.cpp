#include "PlayerController.h"

bool APlayerController::WasInputKeyJustReleased(const struct FKey& Key) {
}
	bool APlayerController::WasInputKeyJustPressed(const struct FKey& Key) {
}
	void APlayerController::ToggleSpeaking(bool bInSpeaking) {
}
	void APlayerController::SwitchLevel(const struct FString& URL) {
}
	void APlayerController::StopHapticEffect(EControllerHand Hand) {
}
	void APlayerController::StartFire(unsigned char FireModeNum) {
}
	void APlayerController::SetVirtualJoystickVisibility(bool bVisible) {
}
	void APlayerController::SetViewTargetWithBlend(class AActor* NewViewTarget, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing) {
}
	void APlayerController::SetName(const struct FString& S) {
}
	void APlayerController::SetMouseLocation(int X, int Y) {
}
	void APlayerController::SetMouseCursorWidget(TEnumAsByte<EMouseCursor> Cursor, class UUserWidget* CursorWidget) {
}
	void APlayerController::SetHapticsByValue(float Frequency, float Amplitude, EControllerHand Hand) {
}
	void APlayerController::SetDisableHaptics(bool bNewDisabled) {
}
	void APlayerController::SetControllerLightColor(const struct FColor& Color) {
}
	void APlayerController::SetCinematicMode(bool bInCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning) {
}
	void APlayerController::SetAudioListenerOverride(class USceneComponent* AttachToComponent, const struct FVector& Location, const struct FRotator& Rotation) {
}
	void APlayerController::SetAudioListenerAttenuationOverride(class USceneComponent* AttachToComponent, const struct FVector& AttenuationLocationOVerride) {
}
	void APlayerController::ServerViewSelf(const struct FViewTargetTransitionParams& TransitionParams) {
}
	void APlayerController::ServerViewPrevPlayer() {
}
	void APlayerController::ServerViewNextPlayer() {
}
	void APlayerController::ServerVerifyViewTarget() {
}
	void APlayerController::ServerUpdateMultipleLevelsVisibility(TArray<struct FUpdateLevelVisibilityLevelInfo> LevelVisibilities) {
}
	void APlayerController::ServerUpdateLevelVisibility(const struct FName& PackageName, bool bIsVisible) {
}
	void APlayerController::ServerUpdateCamera(const struct FVector_NetQuantize& CamLoc, int CamPitchAndYaw) {
}
	void APlayerController::ServerUnmutePlayer(const struct FUniqueNetIdRepl& PlayerId) {
}
	void APlayerController::ServerToggleAILogging() {
}
	void APlayerController::ServerShortTimeout() {
}
	void APlayerController::ServerSetSpectatorWaiting(bool bWaiting) {
}
	void APlayerController::ServerSetSpectatorLocation(const struct FVector& NewLoc, const struct FRotator& NewRot) {
}
	void APlayerController::ServerRestartPlayer() {
}
	void APlayerController::ServerPause() {
}
	void APlayerController::ServerNotifyLoadedWorld(const struct FName& WorldPackageName) {
}
	void APlayerController::ServerMutePlayer(const struct FUniqueNetIdRepl& PlayerId) {
}
	void APlayerController::ServerCheckClientPossessionReliable() {
}
	void APlayerController::ServerCheckClientPossession() {
}
	void APlayerController::ServerChangeName(const struct FString& S) {
}
	void APlayerController::ServerCamera(const struct FName& NewMode) {
}
	void APlayerController::ServerAcknowledgePossession(class APawn* P) {
}
	void APlayerController::SendToConsole(const struct FString& Command) {
}
	void APlayerController::RestartLevel() {
}
	bool APlayerController::ProjectWorldLocationToScreen(const struct FVector& WorldLocation, bool bPlayerViewportRelative, struct FVector2D* ScreenLocation) {
}
	void APlayerController::PlayHapticEffect(class UHapticFeedbackEffect_Base* HapticEffect, EControllerHand Hand, float Scale, bool bLoop) {
}
	void APlayerController::PlayDynamicForceFeedback(float Intensity, float Duration, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall, TEnumAsByte<EDynamicForceFeedbackAction> Action, const struct FLatentActionInfo& LatentInfo) {
}
	void APlayerController::Pause() {
}
	void APlayerController::OnServerStartedVisualLogger(bool bIsLogging) {
}
	void APlayerController::LocalTravel(const struct FString& URL) {
}
	bool APlayerController::IsInputKeyDown(const struct FKey& Key) {
}
	void APlayerController::GetViewportSize(int* SizeX, int* SizeY) {
}
	class ASpectatorPawn* APlayerController::GetSpectatorPawn() {
}
	bool APlayerController::GetMousePosition(float* LocationX, float* LocationY) {
}
	struct FVector APlayerController::GetInputVectorKeyState(const struct FKey& Key) {
}
	void APlayerController::GetInputTouchState(TEnumAsByte<ETouchIndex> FingerIndex, float* LocationX, float* LocationY, bool* bIsCurrentlyPressed) {
}
	void APlayerController::GetInputMouseDelta(float* DeltaX, float* DeltaY) {
}
	void APlayerController::GetInputMotionState(struct FVector* Tilt, struct FVector* RotationRate, struct FVector* Gravity, struct FVector* Acceleration) {
}
	float APlayerController::GetInputKeyTimeDown(const struct FKey& Key) {
}
	void APlayerController::GetInputAnalogStickState(TEnumAsByte<EControllerAnalogStick> WhichStick, float* StickX, float* StickY) {
}
	float APlayerController::GetInputAnalogKeyState(const struct FKey& Key) {
}
	class AHUD* APlayerController::GetHUD() {
}
	bool APlayerController::GetHitResultUnderFingerForObjects(TEnumAsByte<ETouchIndex> FingerIndex, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, struct FHitResult* HitResult) {
}
	bool APlayerController::GetHitResultUnderFingerByChannel(TEnumAsByte<ETouchIndex> FingerIndex, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, struct FHitResult* HitResult) {
}
	bool APlayerController::GetHitResultUnderFinger(TEnumAsByte<ETouchIndex> FingerIndex, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, struct FHitResult* HitResult) {
}
	bool APlayerController::GetHitResultUnderCursorForObjects(TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, struct FHitResult* HitResult) {
}
	bool APlayerController::GetHitResultUnderCursorByChannel(TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, struct FHitResult* HitResult) {
}
	bool APlayerController::GetHitResultUnderCursor(TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, struct FHitResult* HitResult) {
}
	struct FVector APlayerController::GetFocalLocation() {
}
	void APlayerController::FOV(float NewFOV) {
}
	void APlayerController::EnableCheats() {
}
	bool APlayerController::DeprojectScreenPositionToWorld(float ScreenX, float ScreenY, struct FVector* WorldLocation, struct FVector* WorldDirection) {
}
	bool APlayerController::DeprojectMousePositionToWorld(struct FVector* WorldLocation, struct FVector* WorldDirection) {
}
	void APlayerController::ConsoleKey(const struct FKey& Key) {
}
	void APlayerController::ClientWasKicked(const struct FText& KickReason) {
}
	void APlayerController::ClientVoiceHandshakeComplete() {
}
	void APlayerController::ClientUpdateMultipleLevelsStreamingStatus(TArray<struct FUpdateLevelStreamingLevelStatus> LevelStatuses) {
}
	void APlayerController::ClientUpdateLevelStreamingStatus(const struct FName& PackageName, bool bNewShouldBeLoaded, bool bNewShouldBeVisible, bool bNewShouldBlockOnLoad, int LODIndex) {
}
	void APlayerController::ClientUnmutePlayer(const struct FUniqueNetIdRepl& PlayerId) {
}
	void APlayerController::ClientTravelInternal(const struct FString& URL, TEnumAsByte<ETravelType> TravelType, bool bSeamless, const struct FGuid& MapPackageGuid) {
}
	void APlayerController::ClientTravel(const struct FString& URL, TEnumAsByte<ETravelType> TravelType, bool bSeamless, const struct FGuid& MapPackageGuid) {
}
	void APlayerController::ClientTeamMessage(class APlayerState* SenderPlayerState, const struct FString& S, const struct FName& Type, float MsgLifeTime) {
}
	void APlayerController::ClientStopForceFeedback(class UForceFeedbackEffect* ForceFeedbackEffect, const struct FName& Tag) {
}
	void APlayerController::ClientStopCameraShake(class UClass* Shake, bool bImmediately) {
}
	void APlayerController::ClientStopCameraAnim(class UCameraAnim* AnimToStop) {
}
	void APlayerController::ClientStartOnlineSession() {
}
	void APlayerController::ClientSpawnCameraLensEffect(class UClass* LensEffectEmitterClass) {
}
	void APlayerController::ClientSetViewTarget(class AActor* A, const struct FViewTargetTransitionParams& TransitionParams) {
}
	void APlayerController::ClientSetSpectatorWaiting(bool bWaiting) {
}
	void APlayerController::ClientSetHUD(class UClass* NewHUDClass) {
}
	void APlayerController::ClientSetForceMipLevelsToBeResident(class UMaterialInterface* Material, float ForceDuration, int CinematicTextureGroups) {
}
	void APlayerController::ClientSetCinematicMode(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsHUD) {
}
	void APlayerController::ClientSetCameraMode(const struct FName& NewCamMode) {
}
	void APlayerController::ClientSetCameraFade(bool bEnableFading, const struct FColor& FadeColor, const struct FVector2D& FadeAlpha, float FadeTime, bool bFadeAudio) {
}
	void APlayerController::ClientSetBlockOnAsyncLoading() {
}
	void APlayerController::ClientReturnToMainMenuWithTextReason(const struct FText& ReturnReason) {
}
	void APlayerController::ClientReturnToMainMenu(const struct FString& ReturnReason) {
}
	void APlayerController::ClientRetryClientRestart(class APawn* NewPawn) {
}
	void APlayerController::ClientRestart(class APawn* NewPawn) {
}
	void APlayerController::ClientReset() {
}
	void APlayerController::ClientRepObjRef(class UObject* Object) {
}
	void APlayerController::ClientReceiveLocalizedMessage(class UClass* Message, int SWITCH, class APlayerState* RelatedPlayerState_2, class APlayerState* RelatedPlayerState_3, class UObject* OptionalObject) {
}
	void APlayerController::ClientPrestreamTextures(class AActor* ForcedActor, float ForceDuration, bool bEnableStreaming, int CinematicTextureGroups) {
}
	void APlayerController::ClientPrepareMapChange(const struct FName& LevelName, bool bFirst, bool bLast) {
}
	void APlayerController::ClientPlaySoundAtLocation(class USoundBase* Sound, const struct FVector& Location, float VolumeMultiplier, float PitchMultiplier) {
}
	void APlayerController::ClientPlaySound(class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier) {
}
	void APlayerController::ClientPlayForceFeedback(class UForceFeedbackEffect* ForceFeedbackEffect, bool bLooping, bool bIgnoreTimeDilation, const struct FName& Tag) {
}
	void APlayerController::ClientPlayCameraShake(class UClass* Shake, float Scale, TEnumAsByte<ECameraAnimPlaySpace> PlaySpace, const struct FRotator& UserPlaySpaceRot) {
}
	void APlayerController::ClientPlayCameraAnim(class UCameraAnim* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, TEnumAsByte<ECameraAnimPlaySpace> Space, const struct FRotator& CustomPlaySpace) {
}
	void APlayerController::ClientMutePlayer(const struct FUniqueNetIdRepl& PlayerId) {
}
	void APlayerController::ClientMessage(const struct FString& S, const struct FName& Type, float MsgLifeTime) {
}
	void APlayerController::ClientIgnoreMoveInput(bool bIgnore) {
}
	void APlayerController::ClientIgnoreLookInput(bool bIgnore) {
}
	void APlayerController::ClientGotoState(const struct FName& NewState) {
}
	void APlayerController::ClientGameEnded(class AActor* EndGameFocus, bool bIsWinner) {
}
	void APlayerController::ClientForceGarbageCollection() {
}
	void APlayerController::ClientFlushLevelStreaming() {
}
	void APlayerController::ClientEndOnlineSession() {
}
	void APlayerController::ClientEnableNetworkVoice(bool bEnable) {
}
	void APlayerController::ClientCommitMapChange() {
}
	void APlayerController::ClientClearCameraLensEffects() {
}
	void APlayerController::ClientCapBandwidth(int Cap) {
}
	void APlayerController::ClientCancelPendingMapChange() {
}
	void APlayerController::ClientAddTextureStreamingLoc(const struct FVector& InLoc, float Duration, bool bOverrideLocation) {
}
	void APlayerController::ClearAudioListenerOverride() {
}
	void APlayerController::ClearAudioListenerAttenuationOverride() {
}
	bool APlayerController::CanRestartPlayer() {
}
	void APlayerController::Camera(const struct FName& NewMode) {
}
	void APlayerController::AddYawInput(float Val) {
}
	void APlayerController::AddRollInput(float Val) {
}
	void APlayerController::AddPitchInput(float Val) {
}
	void APlayerController::ActivateTouchInterface(class UTouchInterface* NewTouchInterface) {
}
