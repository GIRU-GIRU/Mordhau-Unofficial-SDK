#include "MordhauUtilityLibrary.h"

void UMordhauUtilityLibrary::STATIC_VSmoothDamp(const struct FVector& Target, float SmoothTime, float DeltaTime, float MaxSpeed, struct FVector* Current, struct FVector* CurrentVelocity) {
}
	bool UMordhauUtilityLibrary::STATIC_ValidateCharacterProfile(const struct FCharacterProfile& Profile) {
}
	void UMordhauUtilityLibrary::STATIC_UnpossessCharacterAndHandleSpectating(class AController* Controller) {
}
	bool UMordhauUtilityLibrary::STATIC_TryExecuteHeavydutyOperation(class UWorld* WorldObject) {
}
	void UMordhauUtilityLibrary::STATIC_TermAllChildBodiesOf(class USkeletalMeshComponent* USMC, const struct FName& BoneName) {
}
	struct FCharacterProfile UMordhauUtilityLibrary::STATIC_StripProfile(const struct FCharacterProfile& InProfile, bool bStripEquipment, bool bStripPerks, bool bStripNonTier0Armor) {
}
	struct FString UMordhauUtilityLibrary::STATIC_SteamIDToString(const struct FSteamID& SteamID) {
}
	class UDecalComponent* UMordhauUtilityLibrary::STATIC_SpawnBloodDecalAtLocation(class UObject* WorldContextObject, class UMaterialInterface* DecalMaterial, const struct FVector& DecalSize, const struct FVector& Location, const struct FRotator& Rotation, float LifeSpan) {
}
	TArray<class AMordhauPlayerState*> UMordhauUtilityLibrary::STATIC_SortPlayers(TArray<class AMordhauPlayerState*> Array) {
}
	TArray<struct FServerSearchResult> UMordhauUtilityLibrary::STATIC_SortForServerBrowser(TArray<struct FServerSearchResult> Array) {
}
	TArray<struct FServerSearchResult> UMordhauUtilityLibrary::STATIC_SortForMatchmaking(TArray<struct FServerSearchResult> Array) {
}
	float UMordhauUtilityLibrary::STATIC_Snap180AngleToSteps(float Angle180, float Step) {
}
	bool UMordhauUtilityLibrary::STATIC_SLessThan(const struct FString& StringA, const struct FString& StringB) {
}
	bool UMordhauUtilityLibrary::STATIC_SGreaterThan(const struct FString& StringA, const struct FString& StringB) {
}
	void UMordhauUtilityLibrary::STATIC_SetSoundMixVolume(ESoundMix SoundMix, float Volume) {
}
	void UMordhauUtilityLibrary::STATIC_SetPawnFromRep(class AController* Contr, class APawn* NewPawn) {
}
	void UMordhauUtilityLibrary::STATIC_SetNavAreaClass(class UShapeComponent* ShapeComponent, class UClass* AreaClass) {
}
	void UMordhauUtilityLibrary::STATIC_SetMousePosition(class APlayerController* Controller, float LocationX, float LocationY) {
}
	void UMordhauUtilityLibrary::STATIC_SetLocalSpaceKinematics(class USkeletalMeshComponent* Mesh, bool bNewValue) {
}
	void UMordhauUtilityLibrary::STATIC_SetForceMipStreaming(class USkeletalMeshComponent* SMC, bool bValue) {
}
	void UMordhauUtilityLibrary::STATIC_SetDecalFadeScreenSize(class UDecalComponent* Decal, float NewFadeScreenSize) {
}
	void UMordhauUtilityLibrary::STATIC_SetCustomConfigVar_Vector2D(const struct FString& SectionName, const struct FString& VariableName, const struct FVector2D& Value) {
}
	void UMordhauUtilityLibrary::STATIC_SetCustomConfigVar_Vector(const struct FString& SectionName, const struct FString& VariableName, const struct FVector& Value) {
}
	void UMordhauUtilityLibrary::STATIC_SetCustomConfigVar_String(const struct FString& SectionName, const struct FString& VariableName, const struct FString& Value) {
}
	void UMordhauUtilityLibrary::STATIC_SetCustomConfigVar_Rotator(const struct FString& SectionName, const struct FString& VariableName, const struct FRotator& Value) {
}
	void UMordhauUtilityLibrary::STATIC_SetCustomConfigVar_Int(const struct FString& SectionName, const struct FString& VariableName, int Value) {
}
	void UMordhauUtilityLibrary::STATIC_SetCustomConfigVar_Float(const struct FString& SectionName, const struct FString& VariableName, float Value) {
}
	void UMordhauUtilityLibrary::STATIC_SetCustomConfigVar_Color(const struct FString& SectionName, const struct FString& VariableName, const struct FLinearColor& Value) {
}
	void UMordhauUtilityLibrary::STATIC_SetCustomConfigVar_Bool(const struct FString& SectionName, const struct FString& VariableName, bool Value) {
}
	void UMordhauUtilityLibrary::STATIC_SetCanEverAffectNavigation(class UActorComponent* ActorComponent, bool bRelevant) {
}
	void UMordhauUtilityLibrary::STATIC_SendClientAdjustment(class UCharacterMovementComponent* CMC) {
}
	void UMordhauUtilityLibrary::STATIC_ResetServerPredictionData(class UCharacterMovementComponent* CMC) {
}
	void UMordhauUtilityLibrary::STATIC_ResetClientPredictionData(class UCharacterMovementComponent* CMC) {
}
	void UMordhauUtilityLibrary::STATIC_ReserveCharacterRagdoll(class AAdvancedCharacter* Character) {
}
	int UMordhauUtilityLibrary::STATIC_RandomRangeExclude(int Min, int Max, int Exclude) {
}
	bool UMordhauUtilityLibrary::STATIC_PlaneTrace(class UObject* WorldContextObject, const struct FVector& Left, const struct FVector& Right, const struct FVector& Forward, const struct FVector& Back, const struct FVector& TraceAmount, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, bool bConnectLeftRight, bool bConnectForwardBack, const struct FVector& ConnectOffset, bool bIgnoreSelf, struct FHitResult* LeftHit, struct FHitResult* RightHit, struct FHitResult* ForwardHit, struct FHitResult* BackHit, struct FVector* OutRight, struct FVector* OutForward) {
}
	void UMordhauUtilityLibrary::STATIC_OpenURL(const struct FString& URL) {
}
	bool UMordhauUtilityLibrary::STATIC_NotEqual_SteamID(const struct FSteamID& A, const struct FSteamID& B) {
}
	bool UMordhauUtilityLibrary::STATIC_MordhauApplyRadialDamageWithFalloff(class UObject* WorldContextObject, float BaseDamage, float MinimumDamage, float BaseStructureDamage, float MinimumStructureDamage, const struct FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, TArray<class AActor*> IgnoreActors, float BaseKnockback, float MinimumKnockback, float RagdollFallRadius, class AActor* DamageCauser, class AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel, bool bIgnoreFriendly) {
}
	void UMordhauUtilityLibrary::STATIC_MarkRenderStateDirty(class UMeshComponent* MeshComp) {
}
	struct FCharacterProfile UMordhauUtilityLibrary::STATIC_MakeEmptyProfile(class UClass* CharacterClass, bool bRandomizeVoice) {
}
	bool UMordhauUtilityLibrary::STATIC_LineTraceMultiForObjectsReturnFace(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits) {
}
	struct FPOV UMordhauUtilityLibrary::STATIC_LerpPOV(const struct FPOV& A, const struct FPOV& B, float Alpha) {
}
	bool UMordhauUtilityLibrary::STATIC_IsValid_SteamID(const struct FSteamID& SteamID) {
}
	bool UMordhauUtilityLibrary::STATIC_IsTestingBranch() {
}
	bool UMordhauUtilityLibrary::STATIC_IsSteamFriend(class AMordhauPlayerState* Player) {
}
	bool UMordhauUtilityLibrary::STATIC_IsStandalone() {
}
	bool UMordhauUtilityLibrary::STATIC_IsServer() {
}
	bool UMordhauUtilityLibrary::STATIC_IsReleaseBranch() {
}
	bool UMordhauUtilityLibrary::STATIC_IsPlayInEditor() {
}
	bool UMordhauUtilityLibrary::STATIC_IsPartyMember(class AMordhauPlayerState* Player) {
}
	bool UMordhauUtilityLibrary::STATIC_IsOfficialServer() {
}
	bool UMordhauUtilityLibrary::STATIC_IsListenServer() {
}
	bool UMordhauUtilityLibrary::STATIC_IsFriendlyToLocalPlayer(class UWorld* WorldReference, class AActor* OtherActor) {
}
	bool UMordhauUtilityLibrary::STATIC_IsEditor() {
}
	bool UMordhauUtilityLibrary::STATIC_IsDLCInstalled(int appid) {
}
	bool UMordhauUtilityLibrary::STATIC_IsDevelopmentBuild() {
}
	bool UMordhauUtilityLibrary::STATIC_IsDevelopmentBranch() {
}
	bool UMordhauUtilityLibrary::STATIC_IsDemoPlayback(class UWorld* World) {
}
	bool UMordhauUtilityLibrary::STATIC_IsDedicatedServer() {
}
	bool UMordhauUtilityLibrary::STATIC_IsClient() {
}
	bool UMordhauUtilityLibrary::STATIC_HasBeenReallyRecentlyRendered(class UMeshComponent* MeshComponent) {
}
	bool UMordhauUtilityLibrary::STATIC_HasActorBegunPlay(class AActor* Actor) {
}
	struct FBox UMordhauUtilityLibrary::STATIC_GrowBoxToIncludePoint(const struct FBox& Box, const struct FVector& Vector) {
}
	int UMordhauUtilityLibrary::STATIC_GetXPFromRank(int Rank) {
}
	class UWorld* UMordhauUtilityLibrary::STATIC_GetWorldOf(class UObject* Object) {
}
	TArray<struct FText> UMordhauUtilityLibrary::STATIC_GetWearableNames(const struct FCharacterGearCustomization& CharacterGearCustomization, EWearableSlot Slot) {
}
	TArray<class UClass*> UMordhauUtilityLibrary::STATIC_GetWearableClasses(const struct FCharacterGearCustomization& CharacterGearCustomization, EWearableSlot Slot) {
}
	class UClass* UMordhauUtilityLibrary::STATIC_GetWearableClass(const struct FCharacterGearCustomization& CharacterGearCustomization, EWearableSlot Slot) {
}
	class AMordhauCharacter* UMordhauUtilityLibrary::STATIC_GetViewTargetCharacter(class UObject* WorldContextObject, bool bOnlyLiving) {
}
	struct FString UMordhauUtilityLibrary::STATIC_GetVersionString() {
}
	struct FString UMordhauUtilityLibrary::STATIC_GetVersionName() {
}
	float UMordhauUtilityLibrary::STATIC_GetTotalDemoTime(class UWorld* World) {
}
	float UMordhauUtilityLibrary::STATIC_GetSyncGroupPositionBetweenMarkers(class UAnimInstance* AnimInstance, const struct FName& SyncGroup) {
}
	bool UMordhauUtilityLibrary::STATIC_GetSupportedScreenResolutions(TArray<struct FString>* Resolutions) {
}
	struct FString UMordhauUtilityLibrary::STATIC_GetSteamName(const struct FSteamID& SteamID) {
}
	struct FSteamID UMordhauUtilityLibrary::STATIC_GetSteamIDFromPlayer(class APlayerController* Player) {
}
	struct FSteamID UMordhauUtilityLibrary::STATIC_GetSteamID() {
}
	class UTexture2D* UMordhauUtilityLibrary::STATIC_GetSteamAvatar(const struct FSteamID& SteamID, EAvatarSize Size) {
}
	void UMordhauUtilityLibrary::STATIC_GetSoundMixInfo(const struct FString& Name, struct FSoundMixInfo* SoundMixInfo) {
}
	struct FSteamID UMordhauUtilityLibrary::STATIC_GetServerSteamID() {
}
	struct FName UMordhauUtilityLibrary::STATIC_GetSculptableBoneAtLine(const struct FVector& LineStart, const struct FVector& LineEnd, float SearchRadius, class USkeletalMeshComponent* MeshComponent, class AMordhauCharacter* Character, int Level) {
}
	TEnumAsByte<ENetRole> UMordhauUtilityLibrary::STATIC_GetRole(class AActor* Actor) {
}
	struct FString UMordhauUtilityLibrary::STATIC_GetRegionName(EServerRegion Region) {
}
	EServerRegion UMordhauUtilityLibrary::STATIC_GetRegion(const struct FString& RegionName) {
}
	int UMordhauUtilityLibrary::STATIC_GetRankFromXP(int XP) {
}
	class AMordhauEquipment* UMordhauUtilityLibrary::STATIC_GetRandomWeapon(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int* ID) {
}
	class UUpperChestWearable* UMordhauUtilityLibrary::STATIC_GetRandomUpperChestWearable(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int* ID) {
}
	void UMordhauUtilityLibrary::STATIC_GetRandomSkin(class AMordhauEquipment* Equipment, EItemRarity MaxRarity, int* ID, struct FEquipmentSkinEntry* Skin) {
}
	class UMordhauWearable* UMordhauUtilityLibrary::STATIC_GetRandomShouldersWearable(class UUpperChestWearable* UpperChestWearable, const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int* ID) {
}
	class AMordhauEquipment* UMordhauUtilityLibrary::STATIC_GetRandomRangedWeapon(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int* ID) {
}
	class AMordhauEquipment* UMordhauUtilityLibrary::STATIC_GetRandomMeleeWeapon(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int* ID) {
}
	class UMordhauWearable* UMordhauUtilityLibrary::STATIC_GetRandomLowerChestWearable(class UUpperChestWearable* UpperChestWearable, const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int* ID) {
}
	class ULegsWearable* UMordhauUtilityLibrary::STATIC_GetRandomLegsWearable(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int* ID) {
}
	class UHeadWearable* UMordhauUtilityLibrary::STATIC_GetRandomHeadWearable(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int* ID) {
}
	class UMordhauWearable* UMordhauUtilityLibrary::STATIC_GetRandomHandsWearable(class UArmsWearable* ArmsWearable, const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int* ID) {
}
	class UMordhauWearable* UMordhauUtilityLibrary::STATIC_GetRandomFeetWearable(class ULegsWearable* LegsWearable, const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int* ID) {
}
	struct FVector UMordhauUtilityLibrary::STATIC_GetRandomFaceCustomizationVector(float RandomExponent) {
}
	class AMordhauEquipment* UMordhauUtilityLibrary::STATIC_GetRandomEquipment(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int* ID) {
}
	class UMordhauWearable* UMordhauUtilityLibrary::STATIC_GetRandomCoifWearable(class UHeadWearable* HeadWearable, const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int* ID) {
}
	class UArmsWearable* UMordhauUtilityLibrary::STATIC_GetRandomArmsWearable(class UUpperChestWearable* UpperChestWearable, const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int* ID) {
}
	float UMordhauUtilityLibrary::STATIC_GetPing(class UObject* WorldContextObject, bool bUseMedian) {
}
	struct FTransform UMordhauUtilityLibrary::STATIC_GetPhysicsBodyWorldTransform(class USkeletalMeshComponent* MeshComponent, const struct FName& BoneName) {
}
	struct FBox UMordhauUtilityLibrary::STATIC_GetPhysicsBodyBounds(class USkeletalMeshComponent* MeshComponent, const struct FName& BoneName) {
}
	int UMordhauUtilityLibrary::STATIC_GetPerksCost(const struct FCharacterProfile& Profile) {
}
	TArray<class UPerk*> UMordhauUtilityLibrary::STATIC_GetPerks(const struct FCharacterProfile& Profile) {
}
	int UMordhauUtilityLibrary::STATIC_GetPerforceRevision() {
}
	int UMordhauUtilityLibrary::STATIC_GetPacketsLost(class UObject* WorldContextObject) {
}
	bool UMordhauUtilityLibrary::STATIC_GetNotifyServerReceivedClientData(class UCharacterMovementComponent* CMC) {
}
	float UMordhauUtilityLibrary::STATIC_GetNormalizedTime(float Start, float End, float Current) {
}
	struct FVector2D UMordhauUtilityLibrary::STATIC_GetMousePosition(class APlayerController* Controller) {
}
	class UMordhauWebAPI* UMordhauUtilityLibrary::STATIC_GetMordhauWebAPI() {
}
	class UMordhauStats* UMordhauUtilityLibrary::STATIC_GetMordhauStats() {
}
	class UMordhauSingleton* UMordhauUtilityLibrary::STATIC_GetMordhauSingleton() {
}
	class UMordhauInventory* UMordhauUtilityLibrary::STATIC_GetMordhauInventory() {
}
	class UMordhauInput* UMordhauUtilityLibrary::STATIC_GetMordhauInput() {
}
	class AMordhauHUD* UMordhauUtilityLibrary::STATIC_GetMordhauHUD(class UObject* WorldContextObject) {
}
	class UMordhauGameUserSettings* UMordhauUtilityLibrary::STATIC_GetMordhauGameUserSettings() {
}
	class AMordhauGameSession* UMordhauUtilityLibrary::STATIC_GetMordhauGameSession(class UObject* WorldContextObject) {
}
	int UMordhauUtilityLibrary::STATIC_GetMaxIndexWithDraw(TArray<int> inArray, bool* bFoundDraw) {
}
	struct FString UMordhauUtilityLibrary::STATIC_GetMapName(class UObject* WorldContextObject) {
}
	struct FMapInfo UMordhauUtilityLibrary::STATIC_GetMapInfo(class UObject* WorldContextObject, const struct FString& MapPath) {
}
	float UMordhauUtilityLibrary::STATIC_GetLastReceiveTime(class UObject* WorldContextObject) {
}
	bool UMordhauUtilityLibrary::STATIC_GetIsPeasant(const struct FCharacterProfile& Profile) {
}
	struct FBoxSphereBounds UMordhauUtilityLibrary::STATIC_GetImportedBounds(class USkeletalMeshComponent* SkeletalMeshComponent) {
}
	int UMordhauUtilityLibrary::STATIC_GetFaceIndex(const struct FHitResult& Hit) {
}
	struct FText UMordhauUtilityLibrary::STATIC_getErrorText(const struct FString& ErrorString) {
}
	int UMordhauUtilityLibrary::STATIC_GetEnumValue(const struct FString& EnumName, const struct FString& EnumKey) {
}
	struct FString UMordhauUtilityLibrary::STATIC_GetEnumKey(const struct FString& EnumName, int EnumValue) {
}
	class UMordhauWearable* UMordhauUtilityLibrary::STATIC_GetDefaultWearable(class UClass* FromClass) {
}
	class UObject* UMordhauUtilityLibrary::STATIC_GetDefaultObject(class UClass* FromClass) {
}
	class AActor* UMordhauUtilityLibrary::STATIC_GetDefaultActor(class UClass* FromClass) {
}
	struct FVector2D UMordhauUtilityLibrary::STATIC_GetCustomConfigVar_Vector2D(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid) {
}
	struct FVector UMordhauUtilityLibrary::STATIC_GetCustomConfigVar_Vector(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid) {
}
	struct FString UMordhauUtilityLibrary::STATIC_GetCustomConfigVar_String(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid) {
}
	struct FRotator UMordhauUtilityLibrary::STATIC_GetCustomConfigVar_Rotator(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid) {
}
	int UMordhauUtilityLibrary::STATIC_GetCustomConfigVar_Int(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid) {
}
	float UMordhauUtilityLibrary::STATIC_GetCustomConfigVar_Float(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid) {
}
	struct FLinearColor UMordhauUtilityLibrary::STATIC_GetCustomConfigVar_Color(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid) {
}
	bool UMordhauUtilityLibrary::STATIC_GetCustomConfigVar_Bool(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid) {
}
	int UMordhauUtilityLibrary::STATIC_GetCurrentFrameBP(class UObject* WorldContextObject) {
}
	int UMordhauUtilityLibrary::STATIC_GetCurrentFrame(class UWorld* World) {
}
	float UMordhauUtilityLibrary::STATIC_GetCurrentDemoTime(class UWorld* World) {
}
	struct FString UMordhauUtilityLibrary::STATIC_GetConsoleVariableString(const struct FString& VariableName) {
}
	int UMordhauUtilityLibrary::STATIC_GetConsoleVariableInt(const struct FString& VariableName) {
}
	float UMordhauUtilityLibrary::STATIC_GetConsoleVariableFloat(const struct FString& VariableName) {
}
	struct FVector UMordhauUtilityLibrary::STATIC_GetComponentsBoundingBoxInActorSpace(class AActor* Actor) {
}
	struct FVector UMordhauUtilityLibrary::STATIC_GetCentroid(TArray<struct FVector> Points) {
}
	int UMordhauUtilityLibrary::STATIC_GetBuildVersion() {
}
	struct FVector UMordhauUtilityLibrary::STATIC_GetBoxCenter(const struct FBox& Box) {
}
	struct FBox UMordhauUtilityLibrary::STATIC_GetBoundingBoxOfBoneInfluence(class USkeletalMeshComponent* MeshComponent, TArray<struct FName> Bones, float WeightThreshold) {
}
	class AActor* UMordhauUtilityLibrary::STATIC_GetAttachParentActor(class AActor* Actor) {
}
	class UArchetype* UMordhauUtilityLibrary::STATIC_GetArchetypeObject(const struct FCharacterProfile& Profile) {
}
	TArray<class UClass*> UMordhauUtilityLibrary::STATIC_GetAllWearableClassesForSlotExhaustive(EWearableSlot Slot) {
}
	void UMordhauUtilityLibrary::STATIC_FSmoothDamp(float Target, float SmoothTime, float DeltaTime, float MaxSpeed, float* Current, float* CurrentVelocity) {
}
	struct FText UMordhauUtilityLibrary::STATIC_FormatText(const struct FText& Text) {
}
	bool UMordhauUtilityLibrary::STATIC_ForceValidCharacterProfile(const struct FCharacterProfile& Profile, struct FCharacterProfile* ForceValidatedProfile) {
}
	void UMordhauUtilityLibrary::STATIC_ForceReplicationUpdate(class UCharacterMovementComponent* CMC) {
}
	void UMordhauUtilityLibrary::STATIC_FlushPlayerControllerPressedKeys(class APlayerController* Controller) {
}
	void UMordhauUtilityLibrary::STATIC_FlashWindow() {
}
	float UMordhauUtilityLibrary::STATIC_FInterpToSeparate(float Current, float Target, float DeltaTime, float IncreaseSpeed, float DecreaseSpeed) {
}
	float UMordhauUtilityLibrary::STATIC_FInterpConstantToSeparate(float Current, float Target, float DeltaTime, float IncreaseSpeed, float DecreaseSpeed) {
}
	bool UMordhauUtilityLibrary::STATIC_FindTeleportSpot(class AActor* Actor, const struct FVector& InLocation, const struct FRotator& InRotation, struct FVector* OutLocation) {
}
	struct FSteamID UMordhauUtilityLibrary::STATIC_FindSteamID(const struct FString& PlayerNameOrSteamID) {
}
	class AMordhauPlayerState* UMordhauUtilityLibrary::STATIC_FindPlayerState(const struct FString& PlayerNameOrSteamID) {
}
	bool UMordhauUtilityLibrary::STATIC_FindCircleIntersectionPoints(const struct FVector2D& CenterA, float RadiusA, const struct FVector2D& CenterB, float RadiusB, struct FVector2D* PointA, struct FVector2D* PointB) {
}
	struct FRotator UMordhauUtilityLibrary::STATIC_FindBetween(const struct FVector& A, const struct FVector& B) {
}
	bool UMordhauUtilityLibrary::STATIC_Equal_SteamID(const struct FSteamID& A, const struct FSteamID& B) {
}
	void UMordhauUtilityLibrary::STATIC_DrawText(class UCanvas* Canvas, class UFont* Font, int Size, const struct FString& Text, const struct FVector2D& Position, const struct FLinearColor& TextColor, float Kerning, const struct FLinearColor& ShadowColor, const struct FVector2D& ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, const struct FLinearColor& OutlineColor) {
}
	bool UMordhauUtilityLibrary::STATIC_ConsumeBudget(class AAdvancedCharacter* Character, EBudgetType BudgetType, bool bSkipInvisible, float Duration, float DistanceCutoff, bool bForce) {
}
	int UMordhauUtilityLibrary::STATIC_ComputePointsLeft(const struct FCharacterProfile& Profile) {
}
	bool UMordhauUtilityLibrary::STATIC_CompareGearCustomization(const struct FCharacterGearCustomization& First, const struct FCharacterGearCustomization& Second) {
}
	bool UMordhauUtilityLibrary::STATIC_CompareFaceCustomization(const struct FFaceCustomization& First, const struct FFaceCustomization& Second) {
}
	bool UMordhauUtilityLibrary::STATIC_CompareEquipmentCustomization(const struct FEquipmentCustomization& First, const struct FEquipmentCustomization& Second) {
}
	bool UMordhauUtilityLibrary::STATIC_CompareAppearanceCustomization(const struct FAppearanceCustomization& First, const struct FAppearanceCustomization& Second) {
}
	struct FVector UMordhauUtilityLibrary::STATIC_ClosestPointOnLine(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& Point) {
}
	struct FString UMordhauUtilityLibrary::STATIC_Capitalize(const struct FString& String) {
}
	int UMordhauUtilityLibrary::STATIC_CalculateGCD(int ValueA, int ValueB) {
}
	float UMordhauUtilityLibrary::STATIC_CalculateAngle2D(const struct FVector& Direction, float Yaw) {
}
	bool UMordhauUtilityLibrary::STATIC_AreProfilesEqual(const struct FCharacterProfile& First, const struct FCharacterProfile& Second) {
}
	bool UMordhauUtilityLibrary::STATIC_AreActorsFromSameLevel(class AActor* ActorA, class AActor* ActorB) {
}
