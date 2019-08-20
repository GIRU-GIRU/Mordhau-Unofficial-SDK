#include "GameplayStatics.h"

void UGameplayStatics::STATIC_UnloadStreamLevel(class UObject* WorldContextObject, const struct FName& LevelName, const struct FLatentActionInfo& LatentInfo, bool bShouldBlockOnUnload) {
}
	bool UGameplayStatics::STATIC_SuggestProjectileVelocity_CustomArc(class UObject* WorldContextObject, const struct FVector& StartPos, const struct FVector& EndPos, float OverrideGravityZ, float ArcParam, struct FVector* OutLaunchVelocity) {
}
	class UAudioComponent* UGameplayStatics::STATIC_SpawnSoundAttached(class USoundBase* Sound, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy) {
}
	class UAudioComponent* UGameplayStatics::STATIC_SpawnSoundAtLocation(class UObject* WorldContextObject, class USoundBase* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy) {
}
	class UAudioComponent* UGameplayStatics::STATIC_SpawnSound2D(class UObject* WorldContextObject, class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy) {
}
	class UObject* UGameplayStatics::STATIC_SpawnObject(class UClass* ObjectClass, class UObject* Outer) {
}
	class UForceFeedbackComponent* UGameplayStatics::STATIC_SpawnForceFeedbackAttached(class UForceFeedbackEffect* ForceFeedbackEffect, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, bool bLooping, float IntensityMultiplier, float StartTime, class UForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy) {
}
	class UForceFeedbackComponent* UGameplayStatics::STATIC_SpawnForceFeedbackAtLocation(class UObject* WorldContextObject, class UForceFeedbackEffect* ForceFeedbackEffect, const struct FVector& Location, const struct FRotator& Rotation, bool bLooping, float IntensityMultiplier, float StartTime, class UForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy) {
}
	class UParticleSystemComponent* UGameplayStatics::STATIC_SpawnEmitterAttached(class UParticleSystem* EmitterTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy, EPSCPoolMethod PoolingMethod) {
}
	class UParticleSystemComponent* UGameplayStatics::STATIC_SpawnEmitterAtLocation(class UObject* WorldContextObject, class UParticleSystem* EmitterTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod) {
}
	class UAudioComponent* UGameplayStatics::STATIC_SpawnDialogueAttached(class UDialogueWave* Dialogue, const struct FDialogueContext& Context, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, bool bAutoDestroy) {
}
	class UAudioComponent* UGameplayStatics::STATIC_SpawnDialogueAtLocation(class UObject* WorldContextObject, class UDialogueWave* Dialogue, const struct FDialogueContext& Context, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, bool bAutoDestroy) {
}
	class UAudioComponent* UGameplayStatics::STATIC_SpawnDialogue2D(class UObject* WorldContextObject, class UDialogueWave* Dialogue, const struct FDialogueContext& Context, float VolumeMultiplier, float PitchMultiplier, float StartTime, bool bAutoDestroy) {
}
	class UDecalComponent* UGameplayStatics::STATIC_SpawnDecalAttached(class UMaterialInterface* DecalMaterial, const struct FVector& DecalSize, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, float LifeSpan) {
}
	class UDecalComponent* UGameplayStatics::STATIC_SpawnDecalAtLocation(class UObject* WorldContextObject, class UMaterialInterface* DecalMaterial, const struct FVector& DecalSize, const struct FVector& Location, const struct FRotator& Rotation, float LifeSpan) {
}
	void UGameplayStatics::STATIC_SetWorldOriginLocation(class UObject* WorldContextObject, const struct FIntVector& NewLocation) {
}
	void UGameplayStatics::STATIC_SetSubtitlesEnabled(bool bEnabled) {
}
	void UGameplayStatics::STATIC_SetSoundMixClassOverride(class UObject* WorldContextObject, class USoundMix* InSoundMixModifier, class USoundClass* InSoundClass, float Volume, float Pitch, float FadeInTime, bool bApplyToChildren) {
}
	void UGameplayStatics::STATIC_SetPlayerControllerID(class APlayerController* Player, int ControllerId) {
}
	void UGameplayStatics::STATIC_SetGlobalTimeDilation(class UObject* WorldContextObject, float TimeDilation) {
}
	void UGameplayStatics::STATIC_SetGlobalPitchModulation(class UObject* WorldContextObject, float PitchModulation, float TimeSec) {
}
	void UGameplayStatics::STATIC_SetGlobalListenerFocusParameters(class UObject* WorldContextObject, float FocusAzimuthScale, float NonFocusAzimuthScale, float FocusDistanceScale, float NonFocusDistanceScale, float FocusVolumeScale, float NonFocusVolumeScale, float FocusPriorityScale, float NonFocusPriorityScale) {
}
	bool UGameplayStatics::STATIC_SetGamePaused(class UObject* WorldContextObject, bool bPaused) {
}
	void UGameplayStatics::STATIC_SetBaseSoundMix(class UObject* WorldContextObject, class USoundMix* InSoundMix) {
}
	bool UGameplayStatics::STATIC_SaveGameToSlot(class USaveGame* SaveGameObject, const struct FString& SlotName, int UserIndex) {
}
	void UGameplayStatics::STATIC_RemovePlayer(class APlayerController* Player, bool bDestroyPawn) {
}
	struct FVector UGameplayStatics::STATIC_RebaseZeroOriginOntoLocal(class UObject* WorldContextObject, const struct FVector& WorldLocation) {
}
	struct FVector UGameplayStatics::STATIC_RebaseLocalOriginOntoZero(class UObject* WorldContextObject, const struct FVector& WorldLocation) {
}
	void UGameplayStatics::STATIC_PushSoundMixModifier(class UObject* WorldContextObject, class USoundMix* InSoundMixModifier) {
}
	bool UGameplayStatics::STATIC_ProjectWorldToScreen(class APlayerController* Player, const struct FVector& WorldPosition, bool bPlayerViewportRelative, struct FVector2D* ScreenPosition) {
}
	void UGameplayStatics::STATIC_PopSoundMixModifier(class UObject* WorldContextObject, class USoundMix* InSoundMixModifier) {
}
	void UGameplayStatics::STATIC_PlayWorldCameraShake(class UObject* WorldContextObject, class UClass* Shake, const struct FVector& Epicenter, float InnerRadius, float OuterRadius, float Falloff, bool bOrientShakeTowardsEpicenter) {
}
	void UGameplayStatics::STATIC_PlaySoundAtLocation(class UObject* WorldContextObject, class USoundBase* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, class AActor* OwningActor) {
}
	void UGameplayStatics::STATIC_PlaySound2D(class UObject* WorldContextObject, class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings, class AActor* OwningActor) {
}
	void UGameplayStatics::STATIC_PlayDialogueAtLocation(class UObject* WorldContextObject, class UDialogueWave* Dialogue, const struct FDialogueContext& Context, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings) {
}
	void UGameplayStatics::STATIC_PlayDialogue2D(class UObject* WorldContextObject, class UDialogueWave* Dialogue, const struct FDialogueContext& Context, float VolumeMultiplier, float PitchMultiplier, float StartTime) {
}
	struct FString UGameplayStatics::STATIC_ParseOption(const struct FString& Options, const struct FString& Key) {
}
	void UGameplayStatics::STATIC_OpenLevel(class UObject* WorldContextObject, const struct FName& LevelName, bool bAbsolute, const struct FString& Options) {
}
	struct FHitResult UGameplayStatics::STATIC_MakeHitResult(bool bBlockingHit, bool bInitialOverlap, float Time, float Distance, const struct FVector& Location, const struct FVector& ImpactPoint, const struct FVector& Normal, const struct FVector& ImpactNormal, class UPhysicalMaterial* PhysMat, class AActor* HitActor, class UPrimitiveComponent* HitComponent, const struct FName& HitBoneName, int HitItem, int FaceIndex, const struct FVector& TraceStart, const struct FVector& TraceEnd) {
}
	void UGameplayStatics::STATIC_LoadStreamLevel(class UObject* WorldContextObject, const struct FName& LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, const struct FLatentActionInfo& LatentInfo) {
}
	class USaveGame* UGameplayStatics::STATIC_LoadGameFromSlot(const struct FString& SlotName, int UserIndex) {
}
	bool UGameplayStatics::STATIC_IsGamePaused(class UObject* WorldContextObject) {
}
	bool UGameplayStatics::STATIC_HasOption(const struct FString& Options, const struct FString& InKey) {
}
	bool UGameplayStatics::STATIC_HasLaunchOption(const struct FString& OptionToCheck) {
}
	int UGameplayStatics::STATIC_GrassOverlappingSphereCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FVector& CenterPosition, float Radius) {
}
	struct FIntVector UGameplayStatics::STATIC_GetWorldOriginLocation(class UObject* WorldContextObject) {
}
	float UGameplayStatics::STATIC_GetWorldDeltaSeconds(class UObject* WorldContextObject) {
}
	float UGameplayStatics::STATIC_GetUnpausedTimeSeconds(class UObject* WorldContextObject) {
}
	float UGameplayStatics::STATIC_GetTimeSeconds(class UObject* WorldContextObject) {
}
	TEnumAsByte<EPhysicalSurface> UGameplayStatics::STATIC_GetSurfaceType(const struct FHitResult& Hit) {
}
	class ULevelStreaming* UGameplayStatics::STATIC_GetStreamingLevel(class UObject* WorldContextObject, const struct FName& PackageName) {
}
	float UGameplayStatics::STATIC_GetRealTimeSeconds(class UObject* WorldContextObject) {
}
	class APawn* UGameplayStatics::STATIC_GetPlayerPawn(class UObject* WorldContextObject, int PlayerIndex) {
}
	int UGameplayStatics::STATIC_GetPlayerControllerID(class APlayerController* Player) {
}
	class APlayerController* UGameplayStatics::STATIC_GetPlayerController(class UObject* WorldContextObject, int PlayerIndex) {
}
	class ACharacter* UGameplayStatics::STATIC_GetPlayerCharacter(class UObject* WorldContextObject, int PlayerIndex) {
}
	class APlayerCameraManager* UGameplayStatics::STATIC_GetPlayerCameraManager(class UObject* WorldContextObject, int PlayerIndex) {
}
	struct FString UGameplayStatics::STATIC_GetPlatformName() {
}
	class UClass* UGameplayStatics::STATIC_GetObjectClass(class UObject* Object) {
}
	void UGameplayStatics::STATIC_GetKeyValue(const struct FString& Pair, struct FString* Key, struct FString* Value) {
}
	int UGameplayStatics::STATIC_GetIntOption(const struct FString& Options, const struct FString& Key, int DefaultValue) {
}
	float UGameplayStatics::STATIC_GetGlobalTimeDilation(class UObject* WorldContextObject) {
}
	class AGameStateBase* UGameplayStatics::STATIC_GetGameState(class UObject* WorldContextObject) {
}
	class AGameModeBase* UGameplayStatics::STATIC_GetGameMode(class UObject* WorldContextObject) {
}
	class UGameInstance* UGameplayStatics::STATIC_GetGameInstance(class UObject* WorldContextObject) {
}
	class UReverbEffect* UGameplayStatics::STATIC_GetCurrentReverbEffect(class UObject* WorldContextObject) {
}
	struct FString UGameplayStatics::STATIC_GetCurrentLevelName(class UObject* WorldContextObject, bool bRemovePrefixString) {
}
	float UGameplayStatics::STATIC_GetAudioTimeSeconds(class UObject* WorldContextObject) {
}
	void UGameplayStatics::STATIC_GetAllActorsWithTag(class UObject* WorldContextObject, const struct FName& Tag, TArray<class AActor*>* OutActors) {
}
	void UGameplayStatics::STATIC_GetAllActorsWithInterface(class UObject* WorldContextObject, class UClass* Interface, TArray<class AActor*>* OutActors) {
}
	void UGameplayStatics::STATIC_GetAllActorsOfClass(class UObject* WorldContextObject, class UClass* ActorClass, TArray<class AActor*>* OutActors) {
}
	void UGameplayStatics::STATIC_GetActorArrayBounds(TArray<class AActor*> Actors, bool bOnlyCollidingComponents, struct FVector* Center, struct FVector* BoxExtent) {
}
	struct FVector UGameplayStatics::STATIC_GetActorArrayAverageLocation(TArray<class AActor*> Actors) {
}
	void UGameplayStatics::STATIC_GetAccurateRealTime(class UObject* WorldContextObject, int* Seconds, float* PartialSeconds) {
}
	void UGameplayStatics::STATIC_FlushLevelStreaming(class UObject* WorldContextObject) {
}
	class AActor* UGameplayStatics::STATIC_FinishSpawningActor(class AActor* Actor, const struct FTransform& SpawnTransform) {
}
	bool UGameplayStatics::STATIC_FindCollisionUV(const struct FHitResult& Hit, int UVChannel, struct FVector2D* UV) {
}
	void UGameplayStatics::STATIC_EnableLiveStreaming(bool Enable) {
}
	bool UGameplayStatics::STATIC_DoesSaveGameExist(const struct FString& SlotName, int UserIndex) {
}
	bool UGameplayStatics::STATIC_DeprojectScreenToWorld(class APlayerController* Player, const struct FVector2D& ScreenPosition, struct FVector* WorldPosition, struct FVector* WorldDirection) {
}
	bool UGameplayStatics::STATIC_DeleteGameInSlot(const struct FString& SlotName, int UserIndex) {
}
	void UGameplayStatics::STATIC_DeactivateReverbEffect(class UObject* WorldContextObject, const struct FName& TagName) {
}
	class UAudioComponent* UGameplayStatics::STATIC_CreateSound2D(class UObject* WorldContextObject, class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy) {
}
	class USaveGame* UGameplayStatics::STATIC_CreateSaveGameObjectFromBlueprint(class UBlueprint* SaveGameBlueprint) {
}
	class USaveGame* UGameplayStatics::STATIC_CreateSaveGameObject(class UClass* SaveGameClass) {
}
	class APlayerController* UGameplayStatics::STATIC_CreatePlayer(class UObject* WorldContextObject, int ControllerId, bool bSpawnPawn) {
}
	void UGameplayStatics::STATIC_ClearSoundMixModifiers(class UObject* WorldContextObject) {
}
	void UGameplayStatics::STATIC_ClearSoundMixClassOverride(class UObject* WorldContextObject, class USoundMix* InSoundMixModifier, class USoundClass* InSoundClass, float FadeOutTime) {
}
	void UGameplayStatics::STATIC_CancelAsyncLoading() {
}
	void UGameplayStatics::STATIC_BreakHitResult(const struct FHitResult& Hit, bool* bBlockingHit, bool* bInitialOverlap, float* Time, float* Distance, struct FVector* Location, struct FVector* ImpactPoint, struct FVector* Normal, struct FVector* ImpactNormal, class UPhysicalMaterial** PhysMat, class AActor** HitActor, class UPrimitiveComponent** HitComponent, struct FName* HitBoneName, int* HitItem, int* FaceIndex, struct FVector* TraceStart, struct FVector* TraceEnd) {
}
	bool UGameplayStatics::STATIC_BlueprintSuggestProjectileVelocity(class UObject* WorldContextObject, const struct FVector& StartLocation, const struct FVector& EndLocation, float LaunchSpeed, float OverrideGravityZ, TEnumAsByte<ESuggestProjVelocityTraceOption> TraceOption, float CollisionRadius, bool bFavorHighArc, bool bDrawDebug, struct FVector* TossVelocity) {
}
	bool UGameplayStatics::STATIC_Blueprint_PredictProjectilePath_ByTraceChannel(class UObject* WorldContextObject, const struct FVector& StartPos, const struct FVector& LaunchVelocity, bool bTracePath, float ProjectileRadius, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ, struct FHitResult* OutHit, TArray<struct FVector>* OutPathPositions, struct FVector* OutLastTraceDestination) {
}
	bool UGameplayStatics::STATIC_Blueprint_PredictProjectilePath_ByObjectType(class UObject* WorldContextObject, const struct FVector& StartPos, const struct FVector& LaunchVelocity, bool bTracePath, float ProjectileRadius, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ, struct FHitResult* OutHit, TArray<struct FVector>* OutPathPositions, struct FVector* OutLastTraceDestination) {
}
	bool UGameplayStatics::STATIC_Blueprint_PredictProjectilePath_Advanced(class UObject* WorldContextObject, const struct FPredictProjectilePathParams& PredictParams, struct FPredictProjectilePathResult* PredictResult) {
}
	class AActor* UGameplayStatics::STATIC_BeginSpawningActorFromClass(class UObject* WorldContextObject, class UClass* ActorClass, const struct FTransform& SpawnTransform, bool bNoCollisionFail, class AActor* Owner) {
}
	class AActor* UGameplayStatics::STATIC_BeginSpawningActorFromBlueprint(class UObject* WorldContextObject, class UBlueprint* Blueprint, const struct FTransform& SpawnTransform, bool bNoCollisionFail) {
}
	class AActor* UGameplayStatics::STATIC_BeginDeferredActorSpawnFromClass(class UObject* WorldContextObject, class UClass* ActorClass, const struct FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner) {
}
	bool UGameplayStatics::STATIC_AreSubtitlesEnabled() {
}
	bool UGameplayStatics::STATIC_AreAnyListenersWithinRange(class UObject* WorldContextObject, const struct FVector& Location, float MaximumRange) {
}
	bool UGameplayStatics::STATIC_ApplyRadialDamageWithFalloff(class UObject* WorldContextObject, float BaseDamage, float MinimumDamage, const struct FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, class UClass* DamageTypeClass, TArray<class AActor*> IgnoreActors, class AActor* DamageCauser, class AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel) {
}
	bool UGameplayStatics::STATIC_ApplyRadialDamage(class UObject* WorldContextObject, float BaseDamage, const struct FVector& Origin, float DamageRadius, class UClass* DamageTypeClass, TArray<class AActor*> IgnoreActors, class AActor* DamageCauser, class AController* InstigatedByController, bool bDoFullDamage, TEnumAsByte<ECollisionChannel> DamagePreventionChannel) {
}
	float UGameplayStatics::STATIC_ApplyPointDamage(class AActor* DamagedActor, float BaseDamage, const struct FVector& HitFromDirection, const struct FHitResult& HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UClass* DamageTypeClass) {
}
	float UGameplayStatics::STATIC_ApplyDamage(class AActor* DamagedActor, float BaseDamage, class AController* EventInstigator, class AActor* DamageCauser, class UClass* DamageTypeClass) {
}
	void UGameplayStatics::STATIC_ActivateReverbEffect(class UObject* WorldContextObject, class UReverbEffect* ReverbEffect, const struct FName& TagName, float Priority, float Volume, float FadeTime) {
}
