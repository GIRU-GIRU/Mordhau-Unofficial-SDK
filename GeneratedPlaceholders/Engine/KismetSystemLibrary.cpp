#include "KismetSystemLibrary.h"

void UKismetSystemLibrary::STATIC_UnregisterForRemoteNotifications() {
}
	void UKismetSystemLibrary::STATIC_UnloadPrimaryAssetList(TArray<struct FPrimaryAssetId> PrimaryAssetIdList) {
}
	void UKismetSystemLibrary::STATIC_UnloadPrimaryAsset(const struct FPrimaryAssetId& PrimaryAssetId) {
}
	void UKismetSystemLibrary::STATIC_StackTrace() {
}
	bool UKismetSystemLibrary::STATIC_SphereTraceSingleForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit) {
}
	bool UKismetSystemLibrary::STATIC_SphereTraceSingleByProfile(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit) {
}
	bool UKismetSystemLibrary::STATIC_SphereTraceSingle(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit) {
}
	bool UKismetSystemLibrary::STATIC_SphereTraceMultiForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits) {
}
	bool UKismetSystemLibrary::STATIC_SphereTraceMultiByProfile(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits) {
}
	bool UKismetSystemLibrary::STATIC_SphereTraceMulti(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits) {
}
	bool UKismetSystemLibrary::STATIC_SphereOverlapComponents(class UObject* WorldContextObject, const struct FVector& SpherePos, float SphereRadius, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents) {
}
	bool UKismetSystemLibrary::STATIC_SphereOverlapActors(class UObject* WorldContextObject, const struct FVector& SpherePos, float SphereRadius, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors) {
}
	void UKismetSystemLibrary::STATIC_ShowPlatformSpecificLeaderboardScreen(const struct FString& CategoryName) {
}
	void UKismetSystemLibrary::STATIC_ShowPlatformSpecificAchievementsScreen(class APlayerController* SpecificPlayer) {
}
	void UKismetSystemLibrary::STATIC_ShowInterstitialAd() {
}
	void UKismetSystemLibrary::STATIC_ShowAdBanner(int AdIdIndex, bool bShowOnBottomOfScreen) {
}
	void UKismetSystemLibrary::STATIC_SetWindowTitle(const struct FText& Title) {
}
	void UKismetSystemLibrary::STATIC_SetVolumeButtonsHandledBySystem(bool bEnabled) {
}
	void UKismetSystemLibrary::STATIC_SetVectorPropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FVector& Value) {
}
	void UKismetSystemLibrary::STATIC_SetUserActivity(const struct FUserActivity& UserActivity) {
}
	void UKismetSystemLibrary::STATIC_SetTransformPropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FTransform& Value) {
}
	void UKismetSystemLibrary::STATIC_SetTextPropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FText& Value) {
}
	void UKismetSystemLibrary::STATIC_SetSuppressViewportTransitionMessage(class UObject* WorldContextObject, bool bState) {
}
	void UKismetSystemLibrary::STATIC_SetStructurePropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FGenericStruct& Value) {
}
	void UKismetSystemLibrary::STATIC_SetStringPropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FString& Value) {
}
	void UKismetSystemLibrary::STATIC_SetSoftObjectPropertyByName(class UObject* Object, const struct FName& PropertyName) {
}
	void UKismetSystemLibrary::STATIC_SetSoftClassPropertyByName(class UObject* Object, const struct FName& PropertyName) {
}
	void UKismetSystemLibrary::STATIC_SetRotatorPropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FRotator& Value) {
}
	void UKismetSystemLibrary::STATIC_SetObjectPropertyByName(class UObject* Object, const struct FName& PropertyName, class UObject* Value) {
}
	void UKismetSystemLibrary::STATIC_SetNamePropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FName& Value) {
}
	void UKismetSystemLibrary::STATIC_SetLinearColorPropertyByName(class UObject* Object, const struct FName& PropertyName, const struct FLinearColor& Value) {
}
	void UKismetSystemLibrary::STATIC_SetIntPropertyByName(class UObject* Object, const struct FName& PropertyName, int Value) {
}
	void UKismetSystemLibrary::STATIC_SetInterfacePropertyByName(class UObject* Object, const struct FName& PropertyName, const TScriptInterface<class UInterface>& Value) {
}
	void UKismetSystemLibrary::STATIC_SetFloatPropertyByName(class UObject* Object, const struct FName& PropertyName, float Value) {
}
	void UKismetSystemLibrary::STATIC_SetCollisionProfileNameProperty(class UObject* Object, const struct FName& PropertyName, const struct FCollisionProfileName& Value) {
}
	void UKismetSystemLibrary::STATIC_SetClassPropertyByName(class UObject* Object, const struct FName& PropertyName, class UClass* Value) {
}
	void UKismetSystemLibrary::STATIC_SetBytePropertyByName(class UObject* Object, const struct FName& PropertyName, unsigned char Value) {
}
	void UKismetSystemLibrary::STATIC_SetBoolPropertyByName(class UObject* Object, const struct FName& PropertyName, bool Value) {
}
	void UKismetSystemLibrary::STATIC_RetriggerableDelay(class UObject* WorldContextObject, float Duration, const struct FLatentActionInfo& LatentInfo) {
}
	void UKismetSystemLibrary::STATIC_ResetGamepadAssignmentToController(int ControllerId) {
}
	void UKismetSystemLibrary::STATIC_ResetGamepadAssignments() {
}
	void UKismetSystemLibrary::STATIC_RegisterForRemoteNotifications() {
}
	void UKismetSystemLibrary::STATIC_QuitGame(class UObject* WorldContextObject, class APlayerController* SpecificPlayer, TEnumAsByte<EQuitPreference> QuitPreference) {
}
	void UKismetSystemLibrary::STATIC_PrintWarning(const struct FString& inString) {
}
	void UKismetSystemLibrary::STATIC_PrintText(class UObject* WorldContextObject, const struct FText& InText, bool bPrintToScreen, bool bPrintToLog, const struct FLinearColor& TextColor, float Duration) {
}
	void UKismetSystemLibrary::STATIC_PrintString(class UObject* WorldContextObject, const struct FString& inString, bool bPrintToScreen, bool bPrintToLog, const struct FLinearColor& TextColor, float Duration) {
}
	void UKismetSystemLibrary::OnAssetLoaded__DelegateSignature(class UObject* Loaded) {
}
	void UKismetSystemLibrary::OnAssetClassLoaded__DelegateSignature(class UClass* Loaded) {
}
	bool UKismetSystemLibrary::STATIC_NotEqual_SoftObjectReference() {
}
	bool UKismetSystemLibrary::STATIC_NotEqual_SoftClassReference() {
}
	bool UKismetSystemLibrary::STATIC_NotEqual_PrimaryAssetType(const struct FPrimaryAssetType& A, const struct FPrimaryAssetType& B) {
}
	bool UKismetSystemLibrary::STATIC_NotEqual_PrimaryAssetId(const struct FPrimaryAssetId& A, const struct FPrimaryAssetId& B) {
}
	void UKismetSystemLibrary::STATIC_MoveComponentTo(class USceneComponent* Component, const struct FVector& TargetRelativeLocation, const struct FRotator& TargetRelativeRotation, bool bEaseOut, bool bEaseIn, float OverTime, bool bForceShortestRotationPath, TEnumAsByte<EMoveComponentAction> MoveAction, const struct FLatentActionInfo& LatentInfo) {
}
	struct FSoftObjectPath UKismetSystemLibrary::STATIC_MakeSoftObjectPath(const struct FString& PathString) {
}
	struct FSoftClassPath UKismetSystemLibrary::STATIC_MakeSoftClassPath(const struct FString& PathString) {
}
	struct FText UKismetSystemLibrary::STATIC_MakeLiteralText(const struct FText& Value) {
}
	struct FString UKismetSystemLibrary::STATIC_MakeLiteralString(const struct FString& Value) {
}
	struct FName UKismetSystemLibrary::STATIC_MakeLiteralName(const struct FName& Value) {
}
	int UKismetSystemLibrary::STATIC_MakeLiteralInt(int Value) {
}
	float UKismetSystemLibrary::STATIC_MakeLiteralFloat(float Value) {
}
	unsigned char UKismetSystemLibrary::STATIC_MakeLiteralByte(unsigned char Value) {
}
	bool UKismetSystemLibrary::STATIC_MakeLiteralBool(bool Value) {
}
	void UKismetSystemLibrary::STATIC_LoadInterstitialAd(int AdIdIndex) {
}
	void UKismetSystemLibrary::STATIC_LoadAssetClass(class UObject* WorldContextObject, const struct FScriptDelegate& OnLoaded, const struct FLatentActionInfo& LatentInfo) {
}
	void UKismetSystemLibrary::STATIC_LoadAsset(class UObject* WorldContextObject, const struct FScriptDelegate& OnLoaded, const struct FLatentActionInfo& LatentInfo) {
}
	bool UKismetSystemLibrary::STATIC_LineTraceSingleForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit) {
}
	bool UKismetSystemLibrary::STATIC_LineTraceSingleByProfile(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit) {
}
	bool UKismetSystemLibrary::STATIC_LineTraceSingle(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit) {
}
	bool UKismetSystemLibrary::STATIC_LineTraceMultiForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits) {
}
	bool UKismetSystemLibrary::STATIC_LineTraceMultiByProfile(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits) {
}
	bool UKismetSystemLibrary::STATIC_LineTraceMulti(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits) {
}
	void UKismetSystemLibrary::STATIC_LaunchURL(const struct FString& URL) {
}
	void UKismetSystemLibrary::STATIC_K2_UnPauseTimerHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle) {
}
	void UKismetSystemLibrary::STATIC_K2_UnPauseTimerDelegate(const struct FScriptDelegate& Delegate) {
}
	void UKismetSystemLibrary::STATIC_K2_UnPauseTimer(class UObject* Object, const struct FString& FunctionName) {
}
	bool UKismetSystemLibrary::STATIC_K2_TimerExistsHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle) {
}
	bool UKismetSystemLibrary::STATIC_K2_TimerExistsDelegate(const struct FScriptDelegate& Delegate) {
}
	bool UKismetSystemLibrary::STATIC_K2_TimerExists(class UObject* Object, const struct FString& FunctionName) {
}
	struct FTimerHandle UKismetSystemLibrary::STATIC_K2_SetTimerDelegate(const struct FScriptDelegate& Delegate, float Time, bool bLooping) {
}
	struct FTimerHandle UKismetSystemLibrary::STATIC_K2_SetTimer(class UObject* Object, const struct FString& FunctionName, float Time, bool bLooping) {
}
	void UKismetSystemLibrary::STATIC_K2_PauseTimerHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle) {
}
	void UKismetSystemLibrary::STATIC_K2_PauseTimerDelegate(const struct FScriptDelegate& Delegate) {
}
	void UKismetSystemLibrary::STATIC_K2_PauseTimer(class UObject* Object, const struct FString& FunctionName) {
}
	bool UKismetSystemLibrary::STATIC_K2_IsValidTimerHandle(const struct FTimerHandle& Handle) {
}
	bool UKismetSystemLibrary::STATIC_K2_IsTimerPausedHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle) {
}
	bool UKismetSystemLibrary::STATIC_K2_IsTimerPausedDelegate(const struct FScriptDelegate& Delegate) {
}
	bool UKismetSystemLibrary::STATIC_K2_IsTimerPaused(class UObject* Object, const struct FString& FunctionName) {
}
	bool UKismetSystemLibrary::STATIC_K2_IsTimerActiveHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle) {
}
	bool UKismetSystemLibrary::STATIC_K2_IsTimerActiveDelegate(const struct FScriptDelegate& Delegate) {
}
	bool UKismetSystemLibrary::STATIC_K2_IsTimerActive(class UObject* Object, const struct FString& FunctionName) {
}
	struct FTimerHandle UKismetSystemLibrary::STATIC_K2_InvalidateTimerHandle(struct FTimerHandle* Handle) {
}
	float UKismetSystemLibrary::STATIC_K2_GetTimerRemainingTimeHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle) {
}
	float UKismetSystemLibrary::STATIC_K2_GetTimerRemainingTimeDelegate(const struct FScriptDelegate& Delegate) {
}
	float UKismetSystemLibrary::STATIC_K2_GetTimerRemainingTime(class UObject* Object, const struct FString& FunctionName) {
}
	float UKismetSystemLibrary::STATIC_K2_GetTimerElapsedTimeHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle) {
}
	float UKismetSystemLibrary::STATIC_K2_GetTimerElapsedTimeDelegate(const struct FScriptDelegate& Delegate) {
}
	float UKismetSystemLibrary::STATIC_K2_GetTimerElapsedTime(class UObject* Object, const struct FString& FunctionName) {
}
	void UKismetSystemLibrary::STATIC_K2_ClearTimerHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle) {
}
	void UKismetSystemLibrary::STATIC_K2_ClearTimerDelegate(const struct FScriptDelegate& Delegate) {
}
	void UKismetSystemLibrary::STATIC_K2_ClearTimer(class UObject* Object, const struct FString& FunctionName) {
}
	void UKismetSystemLibrary::STATIC_K2_ClearAndInvalidateTimerHandle(class UObject* WorldContextObject, struct FTimerHandle* Handle) {
}
	bool UKismetSystemLibrary::STATIC_IsValidSoftObjectReference() {
}
	bool UKismetSystemLibrary::STATIC_IsValidSoftClassReference() {
}
	bool UKismetSystemLibrary::STATIC_IsValidPrimaryAssetType(const struct FPrimaryAssetType& PrimaryAssetType) {
}
	bool UKismetSystemLibrary::STATIC_IsValidPrimaryAssetId(const struct FPrimaryAssetId& PrimaryAssetId) {
}
	bool UKismetSystemLibrary::STATIC_IsValidClass(class UClass* Class) {
}
	bool UKismetSystemLibrary::STATIC_IsValid(class UObject* Object) {
}
	bool UKismetSystemLibrary::STATIC_IsStandalone(class UObject* WorldContextObject) {
}
	bool UKismetSystemLibrary::STATIC_IsServer(class UObject* WorldContextObject) {
}
	bool UKismetSystemLibrary::STATIC_IsPackagedForDistribution() {
}
	bool UKismetSystemLibrary::STATIC_IsLoggedIn(class APlayerController* SpecificPlayer) {
}
	bool UKismetSystemLibrary::STATIC_IsInterstitialAdRequested() {
}
	bool UKismetSystemLibrary::STATIC_IsInterstitialAdAvailable() {
}
	bool UKismetSystemLibrary::STATIC_IsDedicatedServer(class UObject* WorldContextObject) {
}
	bool UKismetSystemLibrary::STATIC_IsControllerAssignedToGamepad(int ControllerId) {
}
	void UKismetSystemLibrary::STATIC_HideAdBanner() {
}
	bool UKismetSystemLibrary::STATIC_GetVolumeButtonsHandledBySystem() {
}
	struct FString UKismetSystemLibrary::STATIC_GetUniqueDeviceId() {
}
	bool UKismetSystemLibrary::STATIC_GetSupportedFullscreenResolutions(TArray<struct FIntPoint>* Resolutions) {
}
	void UKismetSystemLibrary::STATIC_GetSoftObjectReferenceFromPrimaryAssetId(const struct FPrimaryAssetId& PrimaryAssetId) {
}
	void UKismetSystemLibrary::STATIC_GetSoftClassReferenceFromPrimaryAssetId(const struct FPrimaryAssetId& PrimaryAssetId) {
}
	int UKismetSystemLibrary::STATIC_GetRenderingMaterialQualityLevel() {
}
	int UKismetSystemLibrary::STATIC_GetRenderingDetailMode() {
}
	struct FString UKismetSystemLibrary::STATIC_GetProjectSavedDirectory() {
}
	struct FString UKismetSystemLibrary::STATIC_GetProjectDirectory() {
}
	struct FString UKismetSystemLibrary::STATIC_GetProjectContentDirectory() {
}
	void UKismetSystemLibrary::STATIC_GetPrimaryAssetsWithBundleState(TArray<struct FName> RequiredBundles, TArray<struct FName> ExcludedBundles, TArray<struct FPrimaryAssetType> ValidTypes, bool bForceCurrentState, TArray<struct FPrimaryAssetId>* OutPrimaryAssetIdList) {
}
	void UKismetSystemLibrary::STATIC_GetPrimaryAssetIdList(const struct FPrimaryAssetType& PrimaryAssetType, TArray<struct FPrimaryAssetId>* OutPrimaryAssetIdList) {
}
	struct FPrimaryAssetId UKismetSystemLibrary::STATIC_GetPrimaryAssetIdFromSoftObjectReference() {
}
	struct FPrimaryAssetId UKismetSystemLibrary::STATIC_GetPrimaryAssetIdFromSoftClassReference() {
}
	struct FPrimaryAssetId UKismetSystemLibrary::STATIC_GetPrimaryAssetIdFromObject(class UObject* Object) {
}
	struct FPrimaryAssetId UKismetSystemLibrary::STATIC_GetPrimaryAssetIdFromClass(class UClass* Class) {
}
	TArray<struct FString> UKismetSystemLibrary::STATIC_GetPreferredLanguages() {
}
	struct FString UKismetSystemLibrary::STATIC_GetPlatformUserName() {
}
	struct FString UKismetSystemLibrary::STATIC_GetPathName(class UObject* Object) {
}
	struct FString UKismetSystemLibrary::STATIC_GetObjectName(class UObject* Object) {
}
	class UObject* UKismetSystemLibrary::STATIC_GetObjectFromPrimaryAssetId(const struct FPrimaryAssetId& PrimaryAssetId) {
}
	int UKismetSystemLibrary::STATIC_GetMinYResolutionForUI() {
}
	int UKismetSystemLibrary::STATIC_GetMinYResolutionFor3DView() {
}
	struct FString UKismetSystemLibrary::STATIC_GetLocalCurrencySymbol() {
}
	struct FString UKismetSystemLibrary::STATIC_GetLocalCurrencyCode() {
}
	float UKismetSystemLibrary::STATIC_GetGameTimeInSeconds(class UObject* WorldContextObject) {
}
	struct FString UKismetSystemLibrary::STATIC_GetGameName() {
}
	struct FString UKismetSystemLibrary::STATIC_GetGameBundleId() {
}
	struct FString UKismetSystemLibrary::STATIC_GetEngineVersion() {
}
	struct FString UKismetSystemLibrary::STATIC_GetDisplayName(class UObject* Object) {
}
	struct FString UKismetSystemLibrary::STATIC_GetDeviceId() {
}
	struct FString UKismetSystemLibrary::STATIC_GetDefaultLocale() {
}
	struct FString UKismetSystemLibrary::STATIC_GetDefaultLanguage() {
}
	bool UKismetSystemLibrary::STATIC_GetCurrentBundleState(const struct FPrimaryAssetId& PrimaryAssetId, bool bForceCurrentState, TArray<struct FName>* OutBundles) {
}
	bool UKismetSystemLibrary::STATIC_GetConvenientWindowedResolutions(TArray<struct FIntPoint>* Resolutions) {
}
	int UKismetSystemLibrary::STATIC_GetConsoleVariableIntValue(class UObject* WorldContextObject, const struct FString& VariableName) {
}
	float UKismetSystemLibrary::STATIC_GetConsoleVariableFloatValue(class UObject* WorldContextObject, const struct FString& VariableName) {
}
	void UKismetSystemLibrary::STATIC_GetComponentBounds(class USceneComponent* Component, struct FVector* Origin, struct FVector* BoxExtent, float* SphereRadius) {
}
	struct FString UKismetSystemLibrary::STATIC_GetCommandLine() {
}
	class UClass* UKismetSystemLibrary::STATIC_GetClassFromPrimaryAssetId(const struct FPrimaryAssetId& PrimaryAssetId) {
}
	struct FString UKismetSystemLibrary::STATIC_GetClassDisplayName(class UClass* Class) {
}
	int UKismetSystemLibrary::STATIC_GetAdIDCount() {
}
	void UKismetSystemLibrary::STATIC_GetActorListFromComponentList(TArray<class UPrimitiveComponent*> ComponentList, class UClass* ActorClassFilter, TArray<class AActor*>* OutActorList) {
}
	void UKismetSystemLibrary::STATIC_GetActorBounds(class AActor* Actor, struct FVector* Origin, struct FVector* BoxExtent) {
}
	void UKismetSystemLibrary::STATIC_ForceCloseAdBanner() {
}
	void UKismetSystemLibrary::STATIC_FlushPersistentDebugLines(class UObject* WorldContextObject) {
}
	void UKismetSystemLibrary::STATIC_FlushDebugStrings(class UObject* WorldContextObject) {
}
	void UKismetSystemLibrary::STATIC_ExecuteConsoleCommand(class UObject* WorldContextObject, const struct FString& Command, class APlayerController* SpecificPlayer) {
}
	bool UKismetSystemLibrary::STATIC_EqualEqual_SoftObjectReference() {
}
	bool UKismetSystemLibrary::STATIC_EqualEqual_SoftClassReference() {
}
	bool UKismetSystemLibrary::STATIC_EqualEqual_PrimaryAssetType(const struct FPrimaryAssetType& A, const struct FPrimaryAssetType& B) {
}
	bool UKismetSystemLibrary::STATIC_EqualEqual_PrimaryAssetId(const struct FPrimaryAssetId& A, const struct FPrimaryAssetId& B) {
}
	void UKismetSystemLibrary::STATIC_DrawDebugString(class UObject* WorldContextObject, const struct FVector& TextLocation, const struct FString& Text, class AActor* TestBaseActor, const struct FLinearColor& TextColor, float Duration) {
}
	void UKismetSystemLibrary::STATIC_DrawDebugSphere(class UObject* WorldContextObject, const struct FVector& Center, float Radius, int Segments, const struct FLinearColor& LineColor, float Duration, float Thickness) {
}
	void UKismetSystemLibrary::STATIC_DrawDebugPoint(class UObject* WorldContextObject, const struct FVector& Position, float Size, const struct FLinearColor& PointColor, float Duration) {
}
	void UKismetSystemLibrary::STATIC_DrawDebugPlane(class UObject* WorldContextObject, const struct FPlane& PlaneCoordinates, const struct FVector& Location, float Size, const struct FLinearColor& PlaneColor, float Duration) {
}
	void UKismetSystemLibrary::STATIC_DrawDebugLine(class UObject* WorldContextObject, const struct FVector& LineStart, const struct FVector& LineEnd, const struct FLinearColor& LineColor, float Duration, float Thickness) {
}
	void UKismetSystemLibrary::STATIC_DrawDebugFrustum(class UObject* WorldContextObject, const struct FTransform& FrustumTransform, const struct FLinearColor& FrustumColor, float Duration, float Thickness) {
}
	void UKismetSystemLibrary::STATIC_DrawDebugFloatHistoryTransform(class UObject* WorldContextObject, const struct FDebugFloatHistory& FloatHistory, const struct FTransform& DrawTransform, const struct FVector2D& DrawSize, const struct FLinearColor& DrawColor, float Duration) {
}
	void UKismetSystemLibrary::STATIC_DrawDebugFloatHistoryLocation(class UObject* WorldContextObject, const struct FDebugFloatHistory& FloatHistory, const struct FVector& DrawLocation, const struct FVector2D& DrawSize, const struct FLinearColor& DrawColor, float Duration) {
}
	void UKismetSystemLibrary::STATIC_DrawDebugCylinder(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, int Segments, const struct FLinearColor& LineColor, float Duration, float Thickness) {
}
	void UKismetSystemLibrary::STATIC_DrawDebugCoordinateSystem(class UObject* WorldContextObject, const struct FVector& AxisLoc, const struct FRotator& AxisRot, float Scale, float Duration, float Thickness) {
}
	void UKismetSystemLibrary::STATIC_DrawDebugConeInDegrees(class UObject* WorldContextObject, const struct FVector& Origin, const struct FVector& Direction, float Length, float AngleWidth, float AngleHeight, int NumSides, const struct FLinearColor& LineColor, float Duration, float Thickness) {
}
	void UKismetSystemLibrary::STATIC_DrawDebugCone(class UObject* WorldContextObject, const struct FVector& Origin, const struct FVector& Direction, float Length, float AngleWidth, float AngleHeight, int NumSides, const struct FLinearColor& LineColor, float Duration, float Thickness) {
}
	void UKismetSystemLibrary::STATIC_DrawDebugCircle(class UObject* WorldContextObject, const struct FVector& Center, float Radius, int NumSegments, const struct FLinearColor& LineColor, float Duration, float Thickness, const struct FVector& YAxis, const struct FVector& ZAxis, bool bDrawAxis) {
}
	void UKismetSystemLibrary::STATIC_DrawDebugCapsule(class UObject* WorldContextObject, const struct FVector& Center, float HalfHeight, float Radius, const struct FRotator& Rotation, const struct FLinearColor& LineColor, float Duration, float Thickness) {
}
	void UKismetSystemLibrary::STATIC_DrawDebugCamera(class ACameraActor* CameraActor, const struct FLinearColor& CameraColor, float Duration) {
}
	void UKismetSystemLibrary::STATIC_DrawDebugBox(class UObject* WorldContextObject, const struct FVector& Center, const struct FVector& Extent, const struct FLinearColor& LineColor, const struct FRotator& Rotation, float Duration, float Thickness) {
}
	void UKismetSystemLibrary::STATIC_DrawDebugArrow(class UObject* WorldContextObject, const struct FVector& LineStart, const struct FVector& LineEnd, float ArrowSize, const struct FLinearColor& LineColor, float Duration, float Thickness) {
}
	bool UKismetSystemLibrary::STATIC_DoesImplementInterface(class UObject* TestObject, class UClass* Interface) {
}
	void UKismetSystemLibrary::STATIC_Delay(class UObject* WorldContextObject, float Duration, const struct FLatentActionInfo& LatentInfo) {
}
	void UKismetSystemLibrary::STATIC_CreateCopyForUndoBuffer(class UObject* ObjectToModify) {
}
	struct FString UKismetSystemLibrary::STATIC_Conv_SoftObjectReferenceToString() {
}
	class UObject* UKismetSystemLibrary::STATIC_Conv_SoftObjectReferenceToObject() {
}
	struct FString UKismetSystemLibrary::STATIC_Conv_SoftClassReferenceToString() {
}
	class UClass* UKismetSystemLibrary::STATIC_Conv_SoftClassReferenceToClass() {
}
	struct FString UKismetSystemLibrary::STATIC_Conv_PrimaryAssetTypeToString(const struct FPrimaryAssetType& PrimaryAssetType) {
}
	struct FString UKismetSystemLibrary::STATIC_Conv_PrimaryAssetIdToString(const struct FPrimaryAssetId& PrimaryAssetId) {
}
	void UKismetSystemLibrary::STATIC_Conv_ObjectToSoftObjectReference(class UObject* Object) {
}
	class UObject* UKismetSystemLibrary::STATIC_Conv_InterfaceToObject(const TScriptInterface<class UInterface>& Interface) {
}
	void UKismetSystemLibrary::STATIC_Conv_ClassToSoftClassReference(class UClass* Class) {
}
	void UKismetSystemLibrary::STATIC_ControlScreensaver(bool bAllowScreenSaver) {
}
	bool UKismetSystemLibrary::STATIC_ComponentOverlapComponents(class UPrimitiveComponent* Component, const struct FTransform& ComponentTransform, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents) {
}
	bool UKismetSystemLibrary::STATIC_ComponentOverlapActors(class UPrimitiveComponent* Component, const struct FTransform& ComponentTransform, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors) {
}
	void UKismetSystemLibrary::STATIC_CollectGarbage() {
}
	bool UKismetSystemLibrary::STATIC_CapsuleTraceSingleForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit) {
}
	bool UKismetSystemLibrary::STATIC_CapsuleTraceSingleByProfile(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit) {
}
	bool UKismetSystemLibrary::STATIC_CapsuleTraceSingle(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit) {
}
	bool UKismetSystemLibrary::STATIC_CapsuleTraceMultiForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits) {
}
	bool UKismetSystemLibrary::STATIC_CapsuleTraceMultiByProfile(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits) {
}
	bool UKismetSystemLibrary::STATIC_CapsuleTraceMulti(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits) {
}
	bool UKismetSystemLibrary::STATIC_CapsuleOverlapComponents(class UObject* WorldContextObject, const struct FVector& CapsulePos, float Radius, float HalfHeight, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents) {
}
	bool UKismetSystemLibrary::STATIC_CapsuleOverlapActors(class UObject* WorldContextObject, const struct FVector& CapsulePos, float Radius, float HalfHeight, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors) {
}
	bool UKismetSystemLibrary::STATIC_CanLaunchURL(const struct FString& URL) {
}
	void UKismetSystemLibrary::STATIC_BreakSoftObjectPath(const struct FSoftObjectPath& InSoftObjectPath, struct FString* PathString) {
}
	void UKismetSystemLibrary::STATIC_BreakSoftClassPath(const struct FSoftClassPath& InSoftClassPath, struct FString* PathString) {
}
	bool UKismetSystemLibrary::STATIC_BoxTraceSingleForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit) {
}
	bool UKismetSystemLibrary::STATIC_BoxTraceSingleByProfile(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit) {
}
	bool UKismetSystemLibrary::STATIC_BoxTraceSingle(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit) {
}
	bool UKismetSystemLibrary::STATIC_BoxTraceMultiForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits) {
}
	bool UKismetSystemLibrary::STATIC_BoxTraceMultiByProfile(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits) {
}
	bool UKismetSystemLibrary::STATIC_BoxTraceMulti(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits) {
}
	bool UKismetSystemLibrary::STATIC_BoxOverlapComponents(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& Extent, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents) {
}
	bool UKismetSystemLibrary::STATIC_BoxOverlapActors(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& BoxExtent, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors) {
}
	struct FDebugFloatHistory UKismetSystemLibrary::STATIC_AddFloatHistorySample(float Value, const struct FDebugFloatHistory& FloatHistory) {
}
