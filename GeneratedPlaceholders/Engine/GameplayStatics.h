#pragma once

#include "CoreMinimal.h"
#include "GameplayStatics.generated.h"

UCLASS()
class UGameplayStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
	void STATIC_UnloadStreamLevel(class UObject* WorldContextObject, const struct FName& LevelName, const struct FLatentActionInfo& LatentInfo, bool bShouldBlockOnUnload);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		bool STATIC_SuggestProjectileVelocity_CustomArc(class UObject* WorldContextObject, const struct FVector& StartPos, const struct FVector& EndPos, float OverrideGravityZ, float ArcParam, struct FVector* OutLaunchVelocity);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		class UAudioComponent* STATIC_SpawnSoundAttached(class USoundBase* Sound, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		class UAudioComponent* STATIC_SpawnSoundAtLocation(class UObject* WorldContextObject, class USoundBase* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		class UAudioComponent* STATIC_SpawnSound2D(class UObject* WorldContextObject, class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		class UObject* STATIC_SpawnObject(class UClass* ObjectClass, class UObject* Outer);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		class UForceFeedbackComponent* STATIC_SpawnForceFeedbackAttached(class UForceFeedbackEffect* ForceFeedbackEffect, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, bool bLooping, float IntensityMultiplier, float StartTime, class UForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		class UForceFeedbackComponent* STATIC_SpawnForceFeedbackAtLocation(class UObject* WorldContextObject, class UForceFeedbackEffect* ForceFeedbackEffect, const struct FVector& Location, const struct FRotator& Rotation, bool bLooping, float IntensityMultiplier, float StartTime, class UForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		class UParticleSystemComponent* STATIC_SpawnEmitterAttached(class UParticleSystem* EmitterTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy, EPSCPoolMethod PoolingMethod);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		class UParticleSystemComponent* STATIC_SpawnEmitterAtLocation(class UObject* WorldContextObject, class UParticleSystem* EmitterTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		class UAudioComponent* STATIC_SpawnDialogueAttached(class UDialogueWave* Dialogue, const struct FDialogueContext& Context, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, bool bAutoDestroy);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		class UAudioComponent* STATIC_SpawnDialogueAtLocation(class UObject* WorldContextObject, class UDialogueWave* Dialogue, const struct FDialogueContext& Context, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, bool bAutoDestroy);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		class UAudioComponent* STATIC_SpawnDialogue2D(class UObject* WorldContextObject, class UDialogueWave* Dialogue, const struct FDialogueContext& Context, float VolumeMultiplier, float PitchMultiplier, float StartTime, bool bAutoDestroy);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		class UDecalComponent* STATIC_SpawnDecalAttached(class UMaterialInterface* DecalMaterial, const struct FVector& DecalSize, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, float LifeSpan);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		class UDecalComponent* STATIC_SpawnDecalAtLocation(class UObject* WorldContextObject, class UMaterialInterface* DecalMaterial, const struct FVector& DecalSize, const struct FVector& Location, const struct FRotator& Rotation, float LifeSpan);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		void STATIC_SetWorldOriginLocation(class UObject* WorldContextObject, const struct FIntVector& NewLocation);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		void STATIC_SetSubtitlesEnabled(bool bEnabled);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		void STATIC_SetSoundMixClassOverride(class UObject* WorldContextObject, class USoundMix* InSoundMixModifier, class USoundClass* InSoundClass, float Volume, float Pitch, float FadeInTime, bool bApplyToChildren);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		void STATIC_SetPlayerControllerID(class APlayerController* Player, int ControllerId);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		void STATIC_SetGlobalTimeDilation(class UObject* WorldContextObject, float TimeDilation);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		void STATIC_SetGlobalPitchModulation(class UObject* WorldContextObject, float PitchModulation, float TimeSec);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		void STATIC_SetGlobalListenerFocusParameters(class UObject* WorldContextObject, float FocusAzimuthScale, float NonFocusAzimuthScale, float FocusDistanceScale, float NonFocusDistanceScale, float FocusVolumeScale, float NonFocusVolumeScale, float FocusPriorityScale, float NonFocusPriorityScale);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		bool STATIC_SetGamePaused(class UObject* WorldContextObject, bool bPaused);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		void STATIC_SetBaseSoundMix(class UObject* WorldContextObject, class USoundMix* InSoundMix);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		bool STATIC_SaveGameToSlot(class USaveGame* SaveGameObject, const struct FString& SlotName, int UserIndex);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		void STATIC_RemovePlayer(class APlayerController* Player, bool bDestroyPawn);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		struct FVector STATIC_RebaseZeroOriginOntoLocal(class UObject* WorldContextObject, const struct FVector& WorldLocation);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		struct FVector STATIC_RebaseLocalOriginOntoZero(class UObject* WorldContextObject, const struct FVector& WorldLocation);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		void STATIC_PushSoundMixModifier(class UObject* WorldContextObject, class USoundMix* InSoundMixModifier);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		bool STATIC_ProjectWorldToScreen(class APlayerController* Player, const struct FVector& WorldPosition, bool bPlayerViewportRelative, struct FVector2D* ScreenPosition);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		void STATIC_PopSoundMixModifier(class UObject* WorldContextObject, class USoundMix* InSoundMixModifier);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		void STATIC_PlayWorldCameraShake(class UObject* WorldContextObject, class UClass* Shake, const struct FVector& Epicenter, float InnerRadius, float OuterRadius, float Falloff, bool bOrientShakeTowardsEpicenter);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		void STATIC_PlaySoundAtLocation(class UObject* WorldContextObject, class USoundBase* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, class AActor* OwningActor);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		void STATIC_PlaySound2D(class UObject* WorldContextObject, class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings, class AActor* OwningActor);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		void STATIC_PlayDialogueAtLocation(class UObject* WorldContextObject, class UDialogueWave* Dialogue, const struct FDialogueContext& Context, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		void STATIC_PlayDialogue2D(class UObject* WorldContextObject, class UDialogueWave* Dialogue, const struct FDialogueContext& Context, float VolumeMultiplier, float PitchMultiplier, float StartTime);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		struct FString STATIC_ParseOption(const struct FString& Options, const struct FString& Key);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		void STATIC_OpenLevel(class UObject* WorldContextObject, const struct FName& LevelName, bool bAbsolute, const struct FString& Options);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		struct FHitResult STATIC_MakeHitResult(bool bBlockingHit, bool bInitialOverlap, float Time, float Distance, const struct FVector& Location, const struct FVector& ImpactPoint, const struct FVector& Normal, const struct FVector& ImpactNormal, class UPhysicalMaterial* PhysMat, class AActor* HitActor, class UPrimitiveComponent* HitComponent, const struct FName& HitBoneName, int HitItem, int FaceIndex, const struct FVector& TraceStart, const struct FVector& TraceEnd);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		void STATIC_LoadStreamLevel(class UObject* WorldContextObject, const struct FName& LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, const struct FLatentActionInfo& LatentInfo);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		class USaveGame* STATIC_LoadGameFromSlot(const struct FString& SlotName, int UserIndex);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		bool STATIC_IsGamePaused(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		bool STATIC_HasOption(const struct FString& Options, const struct FString& InKey);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		bool STATIC_HasLaunchOption(const struct FString& OptionToCheck);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		int STATIC_GrassOverlappingSphereCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FVector& CenterPosition, float Radius);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		struct FIntVector STATIC_GetWorldOriginLocation(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		float STATIC_GetWorldDeltaSeconds(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		float STATIC_GetUnpausedTimeSeconds(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		float STATIC_GetTimeSeconds(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		TEnumAsByte<EPhysicalSurface> STATIC_GetSurfaceType(const struct FHitResult& Hit);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		class ULevelStreaming* STATIC_GetStreamingLevel(class UObject* WorldContextObject, const struct FName& PackageName);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		float STATIC_GetRealTimeSeconds(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		class APawn* STATIC_GetPlayerPawn(class UObject* WorldContextObject, int PlayerIndex);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		int STATIC_GetPlayerControllerID(class APlayerController* Player);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		class APlayerController* STATIC_GetPlayerController(class UObject* WorldContextObject, int PlayerIndex);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		class ACharacter* STATIC_GetPlayerCharacter(class UObject* WorldContextObject, int PlayerIndex);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		class APlayerCameraManager* STATIC_GetPlayerCameraManager(class UObject* WorldContextObject, int PlayerIndex);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		struct FString STATIC_GetPlatformName();
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		class UClass* STATIC_GetObjectClass(class UObject* Object);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		void STATIC_GetKeyValue(const struct FString& Pair, struct FString* Key, struct FString* Value);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		int STATIC_GetIntOption(const struct FString& Options, const struct FString& Key, int DefaultValue);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		float STATIC_GetGlobalTimeDilation(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		class AGameStateBase* STATIC_GetGameState(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		class AGameModeBase* STATIC_GetGameMode(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		class UGameInstance* STATIC_GetGameInstance(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		class UReverbEffect* STATIC_GetCurrentReverbEffect(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		struct FString STATIC_GetCurrentLevelName(class UObject* WorldContextObject, bool bRemovePrefixString);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		float STATIC_GetAudioTimeSeconds(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		void STATIC_GetAllActorsWithTag(class UObject* WorldContextObject, const struct FName& Tag, TArray<class AActor*>* OutActors);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		void STATIC_GetAllActorsWithInterface(class UObject* WorldContextObject, class UClass* Interface, TArray<class AActor*>* OutActors);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		void STATIC_GetAllActorsOfClass(class UObject* WorldContextObject, class UClass* ActorClass, TArray<class AActor*>* OutActors);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		void STATIC_GetActorArrayBounds(TArray<class AActor*> Actors, bool bOnlyCollidingComponents, struct FVector* Center, struct FVector* BoxExtent);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		struct FVector STATIC_GetActorArrayAverageLocation(TArray<class AActor*> Actors);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		void STATIC_GetAccurateRealTime(class UObject* WorldContextObject, int* Seconds, float* PartialSeconds);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		void STATIC_FlushLevelStreaming(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		class AActor* STATIC_FinishSpawningActor(class AActor* Actor, const struct FTransform& SpawnTransform);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		bool STATIC_FindCollisionUV(const struct FHitResult& Hit, int UVChannel, struct FVector2D* UV);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		void STATIC_EnableLiveStreaming(bool Enable);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		bool STATIC_DoesSaveGameExist(const struct FString& SlotName, int UserIndex);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		bool STATIC_DeprojectScreenToWorld(class APlayerController* Player, const struct FVector2D& ScreenPosition, struct FVector* WorldPosition, struct FVector* WorldDirection);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		bool STATIC_DeleteGameInSlot(const struct FString& SlotName, int UserIndex);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		void STATIC_DeactivateReverbEffect(class UObject* WorldContextObject, const struct FName& TagName);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		class UAudioComponent* STATIC_CreateSound2D(class UObject* WorldContextObject, class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		class USaveGame* STATIC_CreateSaveGameObjectFromBlueprint(class UBlueprint* SaveGameBlueprint);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		class USaveGame* STATIC_CreateSaveGameObject(class UClass* SaveGameClass);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		class APlayerController* STATIC_CreatePlayer(class UObject* WorldContextObject, int ControllerId, bool bSpawnPawn);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		void STATIC_ClearSoundMixModifiers(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		void STATIC_ClearSoundMixClassOverride(class UObject* WorldContextObject, class USoundMix* InSoundMixModifier, class USoundClass* InSoundClass, float FadeOutTime);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		void STATIC_CancelAsyncLoading();
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		void STATIC_BreakHitResult(const struct FHitResult& Hit, bool* bBlockingHit, bool* bInitialOverlap, float* Time, float* Distance, struct FVector* Location, struct FVector* ImpactPoint, struct FVector* Normal, struct FVector* ImpactNormal, class UPhysicalMaterial** PhysMat, class AActor** HitActor, class UPrimitiveComponent** HitComponent, struct FName* HitBoneName, int* HitItem, int* FaceIndex, struct FVector* TraceStart, struct FVector* TraceEnd);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		bool STATIC_BlueprintSuggestProjectileVelocity(class UObject* WorldContextObject, const struct FVector& StartLocation, const struct FVector& EndLocation, float LaunchSpeed, float OverrideGravityZ, TEnumAsByte<ESuggestProjVelocityTraceOption> TraceOption, float CollisionRadius, bool bFavorHighArc, bool bDrawDebug, struct FVector* TossVelocity);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		bool STATIC_Blueprint_PredictProjectilePath_ByTraceChannel(class UObject* WorldContextObject, const struct FVector& StartPos, const struct FVector& LaunchVelocity, bool bTracePath, float ProjectileRadius, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ, struct FHitResult* OutHit, TArray<struct FVector>* OutPathPositions, struct FVector* OutLastTraceDestination);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		bool STATIC_Blueprint_PredictProjectilePath_ByObjectType(class UObject* WorldContextObject, const struct FVector& StartPos, const struct FVector& LaunchVelocity, bool bTracePath, float ProjectileRadius, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ, struct FHitResult* OutHit, TArray<struct FVector>* OutPathPositions, struct FVector* OutLastTraceDestination);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		bool STATIC_Blueprint_PredictProjectilePath_Advanced(class UObject* WorldContextObject, const struct FPredictProjectilePathParams& PredictParams, struct FPredictProjectilePathResult* PredictResult);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		class AActor* STATIC_BeginSpawningActorFromClass(class UObject* WorldContextObject, class UClass* ActorClass, const struct FTransform& SpawnTransform, bool bNoCollisionFail, class AActor* Owner);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		class AActor* STATIC_BeginSpawningActorFromBlueprint(class UObject* WorldContextObject, class UBlueprint* Blueprint, const struct FTransform& SpawnTransform, bool bNoCollisionFail);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		class AActor* STATIC_BeginDeferredActorSpawnFromClass(class UObject* WorldContextObject, class UClass* ActorClass, const struct FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		bool STATIC_AreSubtitlesEnabled();
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		bool STATIC_AreAnyListenersWithinRange(class UObject* WorldContextObject, const struct FVector& Location, float MaximumRange);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		bool STATIC_ApplyRadialDamageWithFalloff(class UObject* WorldContextObject, float BaseDamage, float MinimumDamage, const struct FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, class UClass* DamageTypeClass, TArray<class AActor*> IgnoreActors, class AActor* DamageCauser, class AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		bool STATIC_ApplyRadialDamage(class UObject* WorldContextObject, float BaseDamage, const struct FVector& Origin, float DamageRadius, class UClass* DamageTypeClass, TArray<class AActor*> IgnoreActors, class AActor* DamageCauser, class AController* InstigatedByController, bool bDoFullDamage, TEnumAsByte<ECollisionChannel> DamagePreventionChannel);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		float STATIC_ApplyPointDamage(class AActor* DamagedActor, float BaseDamage, const struct FVector& HitFromDirection, const struct FHitResult& HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UClass* DamageTypeClass);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		float STATIC_ApplyDamage(class AActor* DamagedActor, float BaseDamage, class AController* EventInstigator, class AActor* DamageCauser, class UClass* DamageTypeClass);
	UFUNCTION(BlueprintCallable, Category = "GameplayStatics")
		void STATIC_ActivateReverbEffect(class UObject* WorldContextObject, class UReverbEffect* ReverbEffect, const struct FName& TagName, float Priority, float Volume, float FadeTime);

};