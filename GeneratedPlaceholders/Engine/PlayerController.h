#pragma once

#include "CoreMinimal.h"
#include "PlayerController.generated.h"

UCLASS()
class APlayerController : public AController
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPlayer* Player;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class APawn* AcknowledgedPawn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UInterpTrackInstDirector* ControllingDirTrackInst;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AHUD* MyHUD;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class APlayerCameraManager* PlayerCameraManager;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* PlayerCameraManagerClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAutoManageActiveCameraTarget;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator TargetViewRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SmoothTargetViewRotationSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class AActor*> HiddenActors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<TWeakObjectPtr<class UPrimitiveComponent>> HiddenPrimitiveComponents;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastSpectatorStateSynchTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector LastSpectatorSyncLocation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator LastSpectatorSyncRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ClientCap;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCheatManager* CheatManager;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* CheatClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPlayerInput* PlayerInput;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FActiveForceFeedbackEffect> ActiveForceFeedbackEffects;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData06 : 4;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bPlayerIsWaiting : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char NetPlayerIndex;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UNetConnection* PendingSwapConnection;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UNetConnection* NetConnection;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float InputYawScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float InputPitchScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float InputRollScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShowMouseCursor : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnableClickEvents : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnableTouchEvents : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnableMouseOverEvents : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnableTouchOverEvents : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bForceFeedbackEnabled : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ForceFeedbackScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FKey> ClickEventKeys;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EMouseCursor> DefaultMouseCursor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EMouseCursor> CurrentMouseCursor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECollisionChannel> DefaultClickTraceChannel;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECollisionChannel> CurrentClickTraceChannel;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HitResultTraceDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint16_t SeamlessTravelCount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint16_t LastCompletedSeamlessTravelCount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UInputComponent* InactiveStateInputComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData12 : 2;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShouldPerformFullTickWhenPaused : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTouchInterface* CurrentTouchInterface;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class ASpectatorPawn* SpectatorPawn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsLocalPlayerController;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector SpawnLocation;

	UFUNCTION(BlueprintCallable, Category = "PlayerController")
	bool WasInputKeyJustReleased(const struct FKey& Key);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		bool WasInputKeyJustPressed(const struct FKey& Key);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ToggleSpeaking(bool bInSpeaking);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void SwitchLevel(const struct FString& URL);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void StopHapticEffect(EControllerHand Hand);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void StartFire(unsigned char FireModeNum);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void SetVirtualJoystickVisibility(bool bVisible);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void SetViewTargetWithBlend(class AActor* NewViewTarget, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void SetName(const struct FString& S);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void SetMouseLocation(int X, int Y);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void SetMouseCursorWidget(TEnumAsByte<EMouseCursor> Cursor, class UUserWidget* CursorWidget);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void SetHapticsByValue(float Frequency, float Amplitude, EControllerHand Hand);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void SetDisableHaptics(bool bNewDisabled);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void SetControllerLightColor(const struct FColor& Color);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void SetCinematicMode(bool bInCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void SetAudioListenerOverride(class USceneComponent* AttachToComponent, const struct FVector& Location, const struct FRotator& Rotation);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void SetAudioListenerAttenuationOverride(class USceneComponent* AttachToComponent, const struct FVector& AttenuationLocationOVerride);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ServerViewSelf(const struct FViewTargetTransitionParams& TransitionParams);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ServerViewPrevPlayer();
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ServerViewNextPlayer();
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ServerVerifyViewTarget();
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ServerUpdateMultipleLevelsVisibility(TArray<struct FUpdateLevelVisibilityLevelInfo> LevelVisibilities);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ServerUpdateLevelVisibility(const struct FName& PackageName, bool bIsVisible);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ServerUpdateCamera(const struct FVector_NetQuantize& CamLoc, int CamPitchAndYaw);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ServerUnmutePlayer(const struct FUniqueNetIdRepl& PlayerId);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ServerToggleAILogging();
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ServerShortTimeout();
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ServerSetSpectatorWaiting(bool bWaiting);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ServerSetSpectatorLocation(const struct FVector& NewLoc, const struct FRotator& NewRot);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ServerRestartPlayer();
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ServerPause();
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ServerNotifyLoadedWorld(const struct FName& WorldPackageName);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ServerMutePlayer(const struct FUniqueNetIdRepl& PlayerId);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ServerCheckClientPossessionReliable();
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ServerCheckClientPossession();
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ServerChangeName(const struct FString& S);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ServerCamera(const struct FName& NewMode);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ServerAcknowledgePossession(class APawn* P);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void SendToConsole(const struct FString& Command);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void RestartLevel();
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		bool ProjectWorldLocationToScreen(const struct FVector& WorldLocation, bool bPlayerViewportRelative, struct FVector2D* ScreenLocation);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void PlayHapticEffect(class UHapticFeedbackEffect_Base* HapticEffect, EControllerHand Hand, float Scale, bool bLoop);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void PlayDynamicForceFeedback(float Intensity, float Duration, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall, TEnumAsByte<EDynamicForceFeedbackAction> Action, const struct FLatentActionInfo& LatentInfo);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void Pause();
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void OnServerStartedVisualLogger(bool bIsLogging);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void LocalTravel(const struct FString& URL);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		bool IsInputKeyDown(const struct FKey& Key);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void GetViewportSize(int* SizeX, int* SizeY);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		class ASpectatorPawn* GetSpectatorPawn();
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		bool GetMousePosition(float* LocationX, float* LocationY);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		struct FVector GetInputVectorKeyState(const struct FKey& Key);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void GetInputTouchState(TEnumAsByte<ETouchIndex> FingerIndex, float* LocationX, float* LocationY, bool* bIsCurrentlyPressed);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void GetInputMouseDelta(float* DeltaX, float* DeltaY);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void GetInputMotionState(struct FVector* Tilt, struct FVector* RotationRate, struct FVector* Gravity, struct FVector* Acceleration);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		float GetInputKeyTimeDown(const struct FKey& Key);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void GetInputAnalogStickState(TEnumAsByte<EControllerAnalogStick> WhichStick, float* StickX, float* StickY);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		float GetInputAnalogKeyState(const struct FKey& Key);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		class AHUD* GetHUD();
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		bool GetHitResultUnderFingerForObjects(TEnumAsByte<ETouchIndex> FingerIndex, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, struct FHitResult* HitResult);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		bool GetHitResultUnderFingerByChannel(TEnumAsByte<ETouchIndex> FingerIndex, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, struct FHitResult* HitResult);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		bool GetHitResultUnderFinger(TEnumAsByte<ETouchIndex> FingerIndex, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, struct FHitResult* HitResult);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		bool GetHitResultUnderCursorForObjects(TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, struct FHitResult* HitResult);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		bool GetHitResultUnderCursorByChannel(TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, struct FHitResult* HitResult);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		bool GetHitResultUnderCursor(TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, struct FHitResult* HitResult);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		struct FVector GetFocalLocation();
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void FOV(float NewFOV);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void EnableCheats();
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		bool DeprojectScreenPositionToWorld(float ScreenX, float ScreenY, struct FVector* WorldLocation, struct FVector* WorldDirection);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		bool DeprojectMousePositionToWorld(struct FVector* WorldLocation, struct FVector* WorldDirection);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ConsoleKey(const struct FKey& Key);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientWasKicked(const struct FText& KickReason);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientVoiceHandshakeComplete();
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientUpdateMultipleLevelsStreamingStatus(TArray<struct FUpdateLevelStreamingLevelStatus> LevelStatuses);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientUpdateLevelStreamingStatus(const struct FName& PackageName, bool bNewShouldBeLoaded, bool bNewShouldBeVisible, bool bNewShouldBlockOnLoad, int LODIndex);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientUnmutePlayer(const struct FUniqueNetIdRepl& PlayerId);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientTravelInternal(const struct FString& URL, TEnumAsByte<ETravelType> TravelType, bool bSeamless, const struct FGuid& MapPackageGuid);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientTravel(const struct FString& URL, TEnumAsByte<ETravelType> TravelType, bool bSeamless, const struct FGuid& MapPackageGuid);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientTeamMessage(class APlayerState* SenderPlayerState, const struct FString& S, const struct FName& Type, float MsgLifeTime);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientStopForceFeedback(class UForceFeedbackEffect* ForceFeedbackEffect, const struct FName& Tag);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientStopCameraShake(class UClass* Shake, bool bImmediately);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientStopCameraAnim(class UCameraAnim* AnimToStop);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientStartOnlineSession();
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientSpawnCameraLensEffect(class UClass* LensEffectEmitterClass);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientSetViewTarget(class AActor* A, const struct FViewTargetTransitionParams& TransitionParams);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientSetSpectatorWaiting(bool bWaiting);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientSetHUD(class UClass* NewHUDClass);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientSetForceMipLevelsToBeResident(class UMaterialInterface* Material, float ForceDuration, int CinematicTextureGroups);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientSetCinematicMode(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsHUD);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientSetCameraMode(const struct FName& NewCamMode);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientSetCameraFade(bool bEnableFading, const struct FColor& FadeColor, const struct FVector2D& FadeAlpha, float FadeTime, bool bFadeAudio);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientSetBlockOnAsyncLoading();
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientReturnToMainMenuWithTextReason(const struct FText& ReturnReason);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientReturnToMainMenu(const struct FString& ReturnReason);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientRetryClientRestart(class APawn* NewPawn);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientRestart(class APawn* NewPawn);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientReset();
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientRepObjRef(class UObject* Object);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientReceiveLocalizedMessage(class UClass* Message, int SWITCH, class APlayerState* RelatedPlayerState_2, class APlayerState* RelatedPlayerState_3, class UObject* OptionalObject);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientPrestreamTextures(class AActor* ForcedActor, float ForceDuration, bool bEnableStreaming, int CinematicTextureGroups);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientPrepareMapChange(const struct FName& LevelName, bool bFirst, bool bLast);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientPlaySoundAtLocation(class USoundBase* Sound, const struct FVector& Location, float VolumeMultiplier, float PitchMultiplier);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientPlaySound(class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientPlayForceFeedback(class UForceFeedbackEffect* ForceFeedbackEffect, bool bLooping, bool bIgnoreTimeDilation, const struct FName& Tag);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientPlayCameraShake(class UClass* Shake, float Scale, TEnumAsByte<ECameraAnimPlaySpace> PlaySpace, const struct FRotator& UserPlaySpaceRot);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientPlayCameraAnim(class UCameraAnim* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, TEnumAsByte<ECameraAnimPlaySpace> Space, const struct FRotator& CustomPlaySpace);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientMutePlayer(const struct FUniqueNetIdRepl& PlayerId);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientMessage(const struct FString& S, const struct FName& Type, float MsgLifeTime);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientIgnoreMoveInput(bool bIgnore);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientIgnoreLookInput(bool bIgnore);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientGotoState(const struct FName& NewState);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientGameEnded(class AActor* EndGameFocus, bool bIsWinner);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientForceGarbageCollection();
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientFlushLevelStreaming();
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientEndOnlineSession();
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientEnableNetworkVoice(bool bEnable);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientCommitMapChange();
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientClearCameraLensEffects();
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientCapBandwidth(int Cap);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientCancelPendingMapChange();
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClientAddTextureStreamingLoc(const struct FVector& InLoc, float Duration, bool bOverrideLocation);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClearAudioListenerOverride();
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ClearAudioListenerAttenuationOverride();
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		bool CanRestartPlayer();
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void Camera(const struct FName& NewMode);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void AddYawInput(float Val);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void AddRollInput(float Val);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void AddPitchInput(float Val);
	UFUNCTION(BlueprintCallable, Category = "PlayerController")
		void ActivateTouchInterface(class UTouchInterface* NewTouchInterface);

};