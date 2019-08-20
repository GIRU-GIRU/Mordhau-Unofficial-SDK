#pragma once

#include "CoreMinimal.h"
#include "KismetSystemLibrary.generated.h"

UCLASS()
class UKismetSystemLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
	void STATIC_UnregisterForRemoteNotifications();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_UnloadPrimaryAssetList(TArray<struct FPrimaryAssetId> PrimaryAssetIdList);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_UnloadPrimaryAsset(const struct FPrimaryAssetId& PrimaryAssetId);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_StackTrace();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_SphereTraceSingleForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_SphereTraceSingleByProfile(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_SphereTraceSingle(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_SphereTraceMultiForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_SphereTraceMultiByProfile(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_SphereTraceMulti(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_SphereOverlapComponents(class UObject* WorldContextObject, const struct FVector& SpherePos, float SphereRadius, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_SphereOverlapActors(class UObject* WorldContextObject, const struct FVector& SpherePos, float SphereRadius, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_ShowPlatformSpecificLeaderboardScreen(const struct FString& CategoryName);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_ShowPlatformSpecificAchievementsScreen(class APlayerController* SpecificPlayer);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_ShowInterstitialAd();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_ShowAdBanner(int AdIdIndex, bool bShowOnBottomOfScreen);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_SetWindowTitle(const struct FText& Title);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_SetVolumeButtonsHandledBySystem(bool bEnabled);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_SetVectorPropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FVector& Value);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_SetUserActivity(const struct FUserActivity& UserActivity);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_SetTransformPropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FTransform& Value);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_SetTextPropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FText& Value);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_SetSuppressViewportTransitionMessage(class UObject* WorldContextObject, bool bState);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_SetStructurePropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FGenericStruct& Value);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_SetStringPropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FString& Value);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_SetSoftObjectPropertyByName(class UObject* Object, const struct FName& PropertyName);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_SetSoftClassPropertyByName(class UObject* Object, const struct FName& PropertyName);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_SetRotatorPropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FRotator& Value);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_SetObjectPropertyByName(class UObject* Object, const struct FName& PropertyName, class UObject* Value);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_SetNamePropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FName& Value);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_SetLinearColorPropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FLinearColor& Value);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_SetIntPropertyByName(class UObject* Object, const struct FName& PropertyName, int Value);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_SetInterfacePropertyByName(class UObject* Object, const struct FName& PropertyName, const TScriptInterface<class UInterface>& Value);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_SetFloatPropertyByName(class UObject* Object, const struct FName& PropertyName, float Value);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_SetCollisionProfileNameProperty(class UObject* Object, const struct FName& PropertyName, const struct FCollisionProfileName& Value);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_SetClassPropertyByName(class UObject* Object, const struct FName& PropertyName, class UClass* Value);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_SetBytePropertyByName(class UObject* Object, const struct FName& PropertyName, unsigned char Value);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_SetBoolPropertyByName(class UObject* Object, const struct FName& PropertyName, bool Value);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_RetriggerableDelay(class UObject* WorldContextObject, float Duration, const struct FLatentActionInfo& LatentInfo);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_ResetGamepadAssignmentToController(int ControllerId);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_ResetGamepadAssignments();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_RegisterForRemoteNotifications();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_QuitGame(class UObject* WorldContextObject, class APlayerController* SpecificPlayer, TEnumAsByte<EQuitPreference> QuitPreference);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_PrintWarning(const struct FString& inString);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_PrintText(class UObject* WorldContextObject, const struct FText& InText, bool bPrintToScreen, bool bPrintToLog, const struct FLinearColor& TextColor, float Duration);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_PrintString(class UObject* WorldContextObject, const struct FString& inString, bool bPrintToScreen, bool bPrintToLog, const struct FLinearColor& TextColor, float Duration);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void OnAssetLoaded__DelegateSignature(class UObject* Loaded);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void OnAssetClassLoaded__DelegateSignature(class UClass* Loaded);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_NotEqual_SoftObjectReference();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_NotEqual_SoftClassReference();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_NotEqual_PrimaryAssetType(const struct FPrimaryAssetType& A, const struct FPrimaryAssetType& B);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_NotEqual_PrimaryAssetId(const struct FPrimaryAssetId& A, const struct FPrimaryAssetId& B);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_MoveComponentTo(class USceneComponent* Component, const struct FVector& TargetRelativeLocation, const struct FRotator& TargetRelativeRotation, bool bEaseOut, bool bEaseIn, float OverTime, bool bForceShortestRotationPath, TEnumAsByte<EMoveComponentAction> MoveAction, const struct FLatentActionInfo& LatentInfo);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		struct FSoftObjectPath STATIC_MakeSoftObjectPath(const struct FString& PathString);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		struct FSoftClassPath STATIC_MakeSoftClassPath(const struct FString& PathString);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		struct FText STATIC_MakeLiteralText(const struct FText& Value);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		struct FString STATIC_MakeLiteralString(const struct FString& Value);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		struct FName STATIC_MakeLiteralName(const struct FName& Value);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		int STATIC_MakeLiteralInt(int Value);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		float STATIC_MakeLiteralFloat(float Value);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		unsigned char STATIC_MakeLiteralByte(unsigned char Value);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_MakeLiteralBool(bool Value);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_LoadInterstitialAd(int AdIdIndex);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_LoadAssetClass(class UObject* WorldContextObject, const struct FScriptDelegate& OnLoaded, const struct FLatentActionInfo& LatentInfo);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_LoadAsset(class UObject* WorldContextObject, const struct FScriptDelegate& OnLoaded, const struct FLatentActionInfo& LatentInfo);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_LineTraceSingleForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_LineTraceSingleByProfile(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_LineTraceSingle(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_LineTraceMultiForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_LineTraceMultiByProfile(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_LineTraceMulti(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_LaunchURL(const struct FString& URL);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_K2_UnPauseTimerHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_K2_UnPauseTimerDelegate(const struct FScriptDelegate& Delegate);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_K2_UnPauseTimer(class UObject* Object, const struct FString& FunctionName);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_K2_TimerExistsHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_K2_TimerExistsDelegate(const struct FScriptDelegate& Delegate);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_K2_TimerExists(class UObject* Object, const struct FString& FunctionName);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		struct FTimerHandle STATIC_K2_SetTimerDelegate(const struct FScriptDelegate& Delegate, float Time, bool bLooping);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		struct FTimerHandle STATIC_K2_SetTimer(class UObject* Object, const struct FString& FunctionName, float Time, bool bLooping);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_K2_PauseTimerHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_K2_PauseTimerDelegate(const struct FScriptDelegate& Delegate);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_K2_PauseTimer(class UObject* Object, const struct FString& FunctionName);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_K2_IsValidTimerHandle(const struct FTimerHandle& Handle);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_K2_IsTimerPausedHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_K2_IsTimerPausedDelegate(const struct FScriptDelegate& Delegate);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_K2_IsTimerPaused(class UObject* Object, const struct FString& FunctionName);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_K2_IsTimerActiveHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_K2_IsTimerActiveDelegate(const struct FScriptDelegate& Delegate);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_K2_IsTimerActive(class UObject* Object, const struct FString& FunctionName);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		struct FTimerHandle STATIC_K2_InvalidateTimerHandle(struct FTimerHandle* Handle);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		float STATIC_K2_GetTimerRemainingTimeHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		float STATIC_K2_GetTimerRemainingTimeDelegate(const struct FScriptDelegate& Delegate);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		float STATIC_K2_GetTimerRemainingTime(class UObject* Object, const struct FString& FunctionName);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		float STATIC_K2_GetTimerElapsedTimeHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		float STATIC_K2_GetTimerElapsedTimeDelegate(const struct FScriptDelegate& Delegate);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		float STATIC_K2_GetTimerElapsedTime(class UObject* Object, const struct FString& FunctionName);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_K2_ClearTimerHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_K2_ClearTimerDelegate(const struct FScriptDelegate& Delegate);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_K2_ClearTimer(class UObject* Object, const struct FString& FunctionName);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_K2_ClearAndInvalidateTimerHandle(class UObject* WorldContextObject, struct FTimerHandle* Handle);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_IsValidSoftObjectReference();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_IsValidSoftClassReference();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_IsValidPrimaryAssetType(const struct FPrimaryAssetType& PrimaryAssetType);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_IsValidPrimaryAssetId(const struct FPrimaryAssetId& PrimaryAssetId);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_IsValidClass(class UClass* Class);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_IsValid(class UObject* Object);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_IsStandalone(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_IsServer(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_IsPackagedForDistribution();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_IsLoggedIn(class APlayerController* SpecificPlayer);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_IsInterstitialAdRequested();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_IsInterstitialAdAvailable();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_IsDedicatedServer(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_IsControllerAssignedToGamepad(int ControllerId);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_HideAdBanner();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_GetVolumeButtonsHandledBySystem();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		struct FString STATIC_GetUniqueDeviceId();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_GetSupportedFullscreenResolutions(TArray<struct FIntPoint>* Resolutions);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_GetSoftObjectReferenceFromPrimaryAssetId(const struct FPrimaryAssetId& PrimaryAssetId);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_GetSoftClassReferenceFromPrimaryAssetId(const struct FPrimaryAssetId& PrimaryAssetId);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		int STATIC_GetRenderingMaterialQualityLevel();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		int STATIC_GetRenderingDetailMode();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		struct FString STATIC_GetProjectSavedDirectory();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		struct FString STATIC_GetProjectDirectory();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		struct FString STATIC_GetProjectContentDirectory();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_GetPrimaryAssetsWithBundleState(TArray<struct FName> RequiredBundles, TArray<struct FName> ExcludedBundles, TArray<struct FPrimaryAssetType> ValidTypes, bool bForceCurrentState, TArray<struct FPrimaryAssetId>* OutPrimaryAssetIdList);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_GetPrimaryAssetIdList(const struct FPrimaryAssetType& PrimaryAssetType, TArray<struct FPrimaryAssetId>* OutPrimaryAssetIdList);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		struct FPrimaryAssetId STATIC_GetPrimaryAssetIdFromSoftObjectReference();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		struct FPrimaryAssetId STATIC_GetPrimaryAssetIdFromSoftClassReference();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		struct FPrimaryAssetId STATIC_GetPrimaryAssetIdFromObject(class UObject* Object);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		struct FPrimaryAssetId STATIC_GetPrimaryAssetIdFromClass(class UClass* Class);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		TArray<struct FString> STATIC_GetPreferredLanguages();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		struct FString STATIC_GetPlatformUserName();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		struct FString STATIC_GetPathName(class UObject* Object);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		struct FString STATIC_GetObjectName(class UObject* Object);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		class UObject* STATIC_GetObjectFromPrimaryAssetId(const struct FPrimaryAssetId& PrimaryAssetId);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		int STATIC_GetMinYResolutionForUI();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		int STATIC_GetMinYResolutionFor3DView();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		struct FString STATIC_GetLocalCurrencySymbol();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		struct FString STATIC_GetLocalCurrencyCode();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		float STATIC_GetGameTimeInSeconds(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		struct FString STATIC_GetGameName();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		struct FString STATIC_GetGameBundleId();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		struct FString STATIC_GetEngineVersion();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		struct FString STATIC_GetDisplayName(class UObject* Object);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		struct FString STATIC_GetDeviceId();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		struct FString STATIC_GetDefaultLocale();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		struct FString STATIC_GetDefaultLanguage();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_GetCurrentBundleState(const struct FPrimaryAssetId& PrimaryAssetId, bool bForceCurrentState, TArray<struct FName>* OutBundles);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_GetConvenientWindowedResolutions(TArray<struct FIntPoint>* Resolutions);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		int STATIC_GetConsoleVariableIntValue(class UObject* WorldContextObject, const struct FString& VariableName);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		float STATIC_GetConsoleVariableFloatValue(class UObject* WorldContextObject, const struct FString& VariableName);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_GetComponentBounds(class USceneComponent* Component, struct FVector* Origin, struct FVector* BoxExtent, float* SphereRadius);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		struct FString STATIC_GetCommandLine();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		class UClass* STATIC_GetClassFromPrimaryAssetId(const struct FPrimaryAssetId& PrimaryAssetId);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		struct FString STATIC_GetClassDisplayName(class UClass* Class);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		int STATIC_GetAdIDCount();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_GetActorListFromComponentList(TArray<class UPrimitiveComponent*> ComponentList, class UClass* ActorClassFilter, TArray<class AActor*>* OutActorList);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_GetActorBounds(class AActor* Actor, struct FVector* Origin, struct FVector* BoxExtent);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_ForceCloseAdBanner();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_FlushPersistentDebugLines(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_FlushDebugStrings(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_ExecuteConsoleCommand(class UObject* WorldContextObject, const struct FString& Command, class APlayerController* SpecificPlayer);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_EqualEqual_SoftObjectReference();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_EqualEqual_SoftClassReference();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_EqualEqual_PrimaryAssetType(const struct FPrimaryAssetType& A, const struct FPrimaryAssetType& B);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_EqualEqual_PrimaryAssetId(const struct FPrimaryAssetId& A, const struct FPrimaryAssetId& B);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_DrawDebugString(class UObject* WorldContextObject, const struct FVector& TextLocation, const struct FString& Text, class AActor* TestBaseActor, const struct FLinearColor& TextColor, float Duration);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_DrawDebugSphere(class UObject* WorldContextObject, const struct FVector& Center, float Radius, int Segments, const struct FLinearColor& LineColor, float Duration, float Thickness);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_DrawDebugPoint(class UObject* WorldContextObject, const struct FVector& Position, float Size, const struct FLinearColor& PointColor, float Duration);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_DrawDebugPlane(class UObject* WorldContextObject, const struct FPlane& PlaneCoordinates, const struct FVector& Location, float Size, const struct FLinearColor& PlaneColor, float Duration);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_DrawDebugLine(class UObject* WorldContextObject, const struct FVector& LineStart, const struct FVector& LineEnd, const struct FLinearColor& LineColor, float Duration, float Thickness);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_DrawDebugFrustum(class UObject* WorldContextObject, const struct FTransform& FrustumTransform, const struct FLinearColor& FrustumColor, float Duration, float Thickness);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_DrawDebugFloatHistoryTransform(class UObject* WorldContextObject, const struct FDebugFloatHistory& FloatHistory, const struct FTransform& DrawTransform, const struct FVector2D& DrawSize, const struct FLinearColor& DrawColor, float Duration);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_DrawDebugFloatHistoryLocation(class UObject* WorldContextObject, const struct FDebugFloatHistory& FloatHistory, const struct FVector& DrawLocation, const struct FVector2D& DrawSize, const struct FLinearColor& DrawColor, float Duration);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_DrawDebugCylinder(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, int Segments, const struct FLinearColor& LineColor, float Duration, float Thickness);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_DrawDebugCoordinateSystem(class UObject* WorldContextObject, const struct FVector& AxisLoc, const struct FRotator& AxisRot, float Scale, float Duration, float Thickness);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_DrawDebugConeInDegrees(class UObject* WorldContextObject, const struct FVector& Origin, const struct FVector& Direction, float Length, float AngleWidth, float AngleHeight, int NumSides, const struct FLinearColor& LineColor, float Duration, float Thickness);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_DrawDebugCone(class UObject* WorldContextObject, const struct FVector& Origin, const struct FVector& Direction, float Length, float AngleWidth, float AngleHeight, int NumSides, const struct FLinearColor& LineColor, float Duration, float Thickness);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_DrawDebugCircle(class UObject* WorldContextObject, const struct FVector& Center, float Radius, int NumSegments, const struct FLinearColor& LineColor, float Duration, float Thickness, const struct FVector& YAxis, const struct FVector& ZAxis, bool bDrawAxis);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_DrawDebugCapsule(class UObject* WorldContextObject, const struct FVector& Center, float HalfHeight, float Radius, const struct FRotator& Rotation, const struct FLinearColor& LineColor, float Duration, float Thickness);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_DrawDebugCamera(class ACameraActor* CameraActor, const struct FLinearColor& CameraColor, float Duration);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_DrawDebugBox(class UObject* WorldContextObject, const struct FVector& Center, const struct FVector& Extent, const struct FLinearColor& LineColor, const struct FRotator& Rotation, float Duration, float Thickness);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_DrawDebugArrow(class UObject* WorldContextObject, const struct FVector& LineStart, const struct FVector& LineEnd, float ArrowSize, const struct FLinearColor& LineColor, float Duration, float Thickness);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_DoesImplementInterface(class UObject* TestObject, class UClass* Interface);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_Delay(class UObject* WorldContextObject, float Duration, const struct FLatentActionInfo& LatentInfo);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_CreateCopyForUndoBuffer(class UObject* ObjectToModify);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		struct FString STATIC_Conv_SoftObjectReferenceToString();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		class UObject* STATIC_Conv_SoftObjectReferenceToObject();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		struct FString STATIC_Conv_SoftClassReferenceToString();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		class UClass* STATIC_Conv_SoftClassReferenceToClass();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		struct FString STATIC_Conv_PrimaryAssetTypeToString(const struct FPrimaryAssetType& PrimaryAssetType);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		struct FString STATIC_Conv_PrimaryAssetIdToString(const struct FPrimaryAssetId& PrimaryAssetId);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_Conv_ObjectToSoftObjectReference(class UObject* Object);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		class UObject* STATIC_Conv_InterfaceToObject(const TScriptInterface<class UInterface>& Interface);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_Conv_ClassToSoftClassReference(class UClass* Class);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_ControlScreensaver(bool bAllowScreenSaver);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_ComponentOverlapComponents(class UPrimitiveComponent* Component, const struct FTransform& ComponentTransform, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_ComponentOverlapActors(class UPrimitiveComponent* Component, const struct FTransform& ComponentTransform, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_CollectGarbage();
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_CapsuleTraceSingleForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_CapsuleTraceSingleByProfile(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_CapsuleTraceSingle(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_CapsuleTraceMultiForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_CapsuleTraceMultiByProfile(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_CapsuleTraceMulti(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_CapsuleOverlapComponents(class UObject* WorldContextObject, const struct FVector& CapsulePos, float Radius, float HalfHeight, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_CapsuleOverlapActors(class UObject* WorldContextObject, const struct FVector& CapsulePos, float Radius, float HalfHeight, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_CanLaunchURL(const struct FString& URL);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_BreakSoftObjectPath(const struct FSoftObjectPath& InSoftObjectPath, struct FString* PathString);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		void STATIC_BreakSoftClassPath(const struct FSoftClassPath& InSoftClassPath, struct FString* PathString);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_BoxTraceSingleForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_BoxTraceSingleByProfile(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_BoxTraceSingle(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_BoxTraceMultiForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_BoxTraceMultiByProfile(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_BoxTraceMulti(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_BoxOverlapComponents(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& Extent, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		bool STATIC_BoxOverlapActors(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& BoxExtent, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	UFUNCTION(BlueprintCallable, Category = "KismetSystemLibrary")
		struct FDebugFloatHistory STATIC_AddFloatHistorySample(float Value, const struct FDebugFloatHistory& FloatHistory);

};