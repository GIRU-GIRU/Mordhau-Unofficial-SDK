#pragma once

#include "CoreMinimal.h"
#include "MordhauUtilityLibrary.generated.h"

UCLASS()
class UMordhauUtilityLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
	void STATIC_VSmoothDamp(const struct FVector& Target, float SmoothTime, float DeltaTime, float MaxSpeed, struct FVector* Current, struct FVector* CurrentVelocity);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_ValidateCharacterProfile(const struct FCharacterProfile& Profile);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		void STATIC_UnpossessCharacterAndHandleSpectating(class AController* Controller);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_TryExecuteHeavydutyOperation(class UWorld* WorldObject);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		void STATIC_TermAllChildBodiesOf(class USkeletalMeshComponent* USMC, const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		struct FCharacterProfile STATIC_StripProfile(const struct FCharacterProfile& InProfile, bool bStripEquipment, bool bStripPerks, bool bStripNonTier0Armor);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		struct FString STATIC_SteamIDToString(const struct FSteamID& SteamID);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		class UDecalComponent* STATIC_SpawnBloodDecalAtLocation(class UObject* WorldContextObject, class UMaterialInterface* DecalMaterial, const struct FVector& DecalSize, const struct FVector& Location, const struct FRotator& Rotation, float LifeSpan);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		TArray<class AMordhauPlayerState*> STATIC_SortPlayers(TArray<class AMordhauPlayerState*> Array);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		TArray<struct FServerSearchResult> STATIC_SortForServerBrowser(TArray<struct FServerSearchResult> Array);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		TArray<struct FServerSearchResult> STATIC_SortForMatchmaking(TArray<struct FServerSearchResult> Array);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		float STATIC_Snap180AngleToSteps(float Angle180, float Step);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_SLessThan(const struct FString& StringA, const struct FString& StringB);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_SGreaterThan(const struct FString& StringA, const struct FString& StringB);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		void STATIC_SetSoundMixVolume(ESoundMix SoundMix, float Volume);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		void STATIC_SetPawnFromRep(class AController* Contr, class APawn* NewPawn);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		void STATIC_SetNavAreaClass(class UShapeComponent* ShapeComponent, class UClass* AreaClass);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		void STATIC_SetMousePosition(class APlayerController* Controller, float LocationX, float LocationY);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		void STATIC_SetLocalSpaceKinematics(class USkeletalMeshComponent* Mesh, bool bNewValue);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		void STATIC_SetForceMipStreaming(class USkeletalMeshComponent* SMC, bool bValue);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		void STATIC_SetDecalFadeScreenSize(class UDecalComponent* Decal, float NewFadeScreenSize);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		void STATIC_SetCustomConfigVar_Vector2D(const struct FString& SectionName, const struct FString& VariableName, const struct FVector2D& Value);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		void STATIC_SetCustomConfigVar_Vector(const struct FString& SectionName, const struct FString& VariableName, const struct FVector& Value);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		void STATIC_SetCustomConfigVar_String(const struct FString& SectionName, const struct FString& VariableName, const struct FString& Value);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		void STATIC_SetCustomConfigVar_Rotator(const struct FString& SectionName, const struct FString& VariableName, const struct FRotator& Value);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		void STATIC_SetCustomConfigVar_Int(const struct FString& SectionName, const struct FString& VariableName, int Value);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		void STATIC_SetCustomConfigVar_Float(const struct FString& SectionName, const struct FString& VariableName, float Value);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		void STATIC_SetCustomConfigVar_Color(const struct FString& SectionName, const struct FString& VariableName, const struct FLinearColor& Value);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		void STATIC_SetCustomConfigVar_Bool(const struct FString& SectionName, const struct FString& VariableName, bool Value);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		void STATIC_SetCanEverAffectNavigation(class UActorComponent* ActorComponent, bool bRelevant);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		void STATIC_SendClientAdjustment(class UCharacterMovementComponent* CMC);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		void STATIC_ResetServerPredictionData(class UCharacterMovementComponent* CMC);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		void STATIC_ResetClientPredictionData(class UCharacterMovementComponent* CMC);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		void STATIC_ReserveCharacterRagdoll(class AAdvancedCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		int STATIC_RandomRangeExclude(int Min, int Max, int Exclude);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_PlaneTrace(class UObject* WorldContextObject, const struct FVector& Left, const struct FVector& Right, const struct FVector& Forward, const struct FVector& Back, const struct FVector& TraceAmount, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, bool bConnectLeftRight, bool bConnectForwardBack, const struct FVector& ConnectOffset, bool bIgnoreSelf, struct FHitResult* LeftHit, struct FHitResult* RightHit, struct FHitResult* ForwardHit, struct FHitResult* BackHit, struct FVector* OutRight, struct FVector* OutForward);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		void STATIC_OpenURL(const struct FString& URL);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_NotEqual_SteamID(const struct FSteamID& A, const struct FSteamID& B);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_MordhauApplyRadialDamageWithFalloff(class UObject* WorldContextObject, float BaseDamage, float MinimumDamage, float BaseStructureDamage, float MinimumStructureDamage, const struct FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, TArray<class AActor*> IgnoreActors, float BaseKnockback, float MinimumKnockback, float RagdollFallRadius, class AActor* DamageCauser, class AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel, bool bIgnoreFriendly);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		void STATIC_MarkRenderStateDirty(class UMeshComponent* MeshComp);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		struct FCharacterProfile STATIC_MakeEmptyProfile(class UClass* CharacterClass, bool bRandomizeVoice);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_LineTraceMultiForObjectsReturnFace(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		struct FPOV STATIC_LerpPOV(const struct FPOV& A, const struct FPOV& B, float Alpha);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_IsValid_SteamID(const struct FSteamID& SteamID);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_IsTestingBranch();
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_IsSteamFriend(class AMordhauPlayerState* Player);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_IsStandalone();
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_IsServer();
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_IsReleaseBranch();
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_IsPlayInEditor();
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_IsPartyMember(class AMordhauPlayerState* Player);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_IsOfficialServer();
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_IsListenServer();
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_IsFriendlyToLocalPlayer(class UWorld* WorldReference, class AActor* OtherActor);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_IsEditor();
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_IsDLCInstalled(int appid);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_IsDevelopmentBuild();
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_IsDevelopmentBranch();
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_IsDemoPlayback(class UWorld* World);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_IsDedicatedServer();
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_IsClient();
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_HasBeenReallyRecentlyRendered(class UMeshComponent* MeshComponent);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_HasActorBegunPlay(class AActor* Actor);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		struct FBox STATIC_GrowBoxToIncludePoint(const struct FBox& Box, const struct FVector& Vector);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		int STATIC_GetXPFromRank(int Rank);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		class UWorld* STATIC_GetWorldOf(class UObject* Object);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		TArray<struct FText> STATIC_GetWearableNames(const struct FCharacterGearCustomization& CharacterGearCustomization, EWearableSlot Slot);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		TArray<class UClass*> STATIC_GetWearableClasses(const struct FCharacterGearCustomization& CharacterGearCustomization, EWearableSlot Slot);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		class UClass* STATIC_GetWearableClass(const struct FCharacterGearCustomization& CharacterGearCustomization, EWearableSlot Slot);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		class AMordhauCharacter* STATIC_GetViewTargetCharacter(class UObject* WorldContextObject, bool bOnlyLiving);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		struct FString STATIC_GetVersionString();
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		struct FString STATIC_GetVersionName();
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		float STATIC_GetTotalDemoTime(class UWorld* World);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		float STATIC_GetSyncGroupPositionBetweenMarkers(class UAnimInstance* AnimInstance, const struct FName& SyncGroup);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_GetSupportedScreenResolutions(TArray<struct FString>* Resolutions);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		struct FString STATIC_GetSteamName(const struct FSteamID& SteamID);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		struct FSteamID STATIC_GetSteamIDFromPlayer(class APlayerController* Player);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		struct FSteamID STATIC_GetSteamID();
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		class UTexture2D* STATIC_GetSteamAvatar(const struct FSteamID& SteamID, EAvatarSize Size);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		void STATIC_GetSoundMixInfo(const struct FString& Name, struct FSoundMixInfo* SoundMixInfo);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		struct FSteamID STATIC_GetServerSteamID();
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		struct FName STATIC_GetSculptableBoneAtLine(const struct FVector& LineStart, const struct FVector& LineEnd, float SearchRadius, class USkeletalMeshComponent* MeshComponent, class AMordhauCharacter* Character, int Level);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		TEnumAsByte<ENetRole> STATIC_GetRole(class AActor* Actor);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		struct FString STATIC_GetRegionName(EServerRegion Region);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		EServerRegion STATIC_GetRegion(const struct FString& RegionName);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		int STATIC_GetRankFromXP(int XP);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		class AMordhauEquipment* STATIC_GetRandomWeapon(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int* ID);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		class UUpperChestWearable* STATIC_GetRandomUpperChestWearable(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int* ID);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		void STATIC_GetRandomSkin(class AMordhauEquipment* Equipment, EItemRarity MaxRarity, int* ID, struct FEquipmentSkinEntry* Skin);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		class UMordhauWearable* STATIC_GetRandomShouldersWearable(class UUpperChestWearable* UpperChestWearable, const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int* ID);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		class AMordhauEquipment* STATIC_GetRandomRangedWeapon(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int* ID);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		class AMordhauEquipment* STATIC_GetRandomMeleeWeapon(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int* ID);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		class UMordhauWearable* STATIC_GetRandomLowerChestWearable(class UUpperChestWearable* UpperChestWearable, const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int* ID);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		class ULegsWearable* STATIC_GetRandomLegsWearable(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int* ID);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		class UHeadWearable* STATIC_GetRandomHeadWearable(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int* ID);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		class UMordhauWearable* STATIC_GetRandomHandsWearable(class UArmsWearable* ArmsWearable, const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int* ID);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		class UMordhauWearable* STATIC_GetRandomFeetWearable(class ULegsWearable* LegsWearable, const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int* ID);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		struct FVector STATIC_GetRandomFaceCustomizationVector(float RandomExponent);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		class AMordhauEquipment* STATIC_GetRandomEquipment(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int* ID);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		class UMordhauWearable* STATIC_GetRandomCoifWearable(class UHeadWearable* HeadWearable, const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int* ID);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		class UArmsWearable* STATIC_GetRandomArmsWearable(class UUpperChestWearable* UpperChestWearable, const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int* ID);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		float STATIC_GetPing(class UObject* WorldContextObject, bool bUseMedian);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		struct FTransform STATIC_GetPhysicsBodyWorldTransform(class USkeletalMeshComponent* MeshComponent, const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		struct FBox STATIC_GetPhysicsBodyBounds(class USkeletalMeshComponent* MeshComponent, const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		int STATIC_GetPerksCost(const struct FCharacterProfile& Profile);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		TArray<class UPerk*> STATIC_GetPerks(const struct FCharacterProfile& Profile);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		int STATIC_GetPerforceRevision();
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		int STATIC_GetPacketsLost(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_GetNotifyServerReceivedClientData(class UCharacterMovementComponent* CMC);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		float STATIC_GetNormalizedTime(float Start, float End, float Current);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		struct FVector2D STATIC_GetMousePosition(class APlayerController* Controller);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		class UMordhauWebAPI* STATIC_GetMordhauWebAPI();
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		class UMordhauStats* STATIC_GetMordhauStats();
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		class UMordhauSingleton* STATIC_GetMordhauSingleton();
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		class UMordhauInventory* STATIC_GetMordhauInventory();
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		class UMordhauInput* STATIC_GetMordhauInput();
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		class AMordhauHUD* STATIC_GetMordhauHUD(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		class UMordhauGameUserSettings* STATIC_GetMordhauGameUserSettings();
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		class AMordhauGameSession* STATIC_GetMordhauGameSession(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		int STATIC_GetMaxIndexWithDraw(TArray<int> inArray, bool* bFoundDraw);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		struct FString STATIC_GetMapName(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		struct FMapInfo STATIC_GetMapInfo(class UObject* WorldContextObject, const struct FString& MapPath);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		float STATIC_GetLastReceiveTime(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_GetIsPeasant(const struct FCharacterProfile& Profile);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		struct FBoxSphereBounds STATIC_GetImportedBounds(class USkeletalMeshComponent* SkeletalMeshComponent);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		int STATIC_GetFaceIndex(const struct FHitResult& Hit);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		struct FText STATIC_getErrorText(const struct FString& ErrorString);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		int STATIC_GetEnumValue(const struct FString& EnumName, const struct FString& EnumKey);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		struct FString STATIC_GetEnumKey(const struct FString& EnumName, int EnumValue);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		class UMordhauWearable* STATIC_GetDefaultWearable(class UClass* FromClass);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		class UObject* STATIC_GetDefaultObject(class UClass* FromClass);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		class AActor* STATIC_GetDefaultActor(class UClass* FromClass);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		struct FVector2D STATIC_GetCustomConfigVar_Vector2D(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		struct FVector STATIC_GetCustomConfigVar_Vector(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		struct FString STATIC_GetCustomConfigVar_String(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		struct FRotator STATIC_GetCustomConfigVar_Rotator(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		int STATIC_GetCustomConfigVar_Int(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		float STATIC_GetCustomConfigVar_Float(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		struct FLinearColor STATIC_GetCustomConfigVar_Color(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_GetCustomConfigVar_Bool(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		int STATIC_GetCurrentFrameBP(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		int STATIC_GetCurrentFrame(class UWorld* World);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		float STATIC_GetCurrentDemoTime(class UWorld* World);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		struct FString STATIC_GetConsoleVariableString(const struct FString& VariableName);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		int STATIC_GetConsoleVariableInt(const struct FString& VariableName);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		float STATIC_GetConsoleVariableFloat(const struct FString& VariableName);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		struct FVector STATIC_GetComponentsBoundingBoxInActorSpace(class AActor* Actor);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		struct FVector STATIC_GetCentroid(TArray<struct FVector> Points);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		int STATIC_GetBuildVersion();
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		struct FVector STATIC_GetBoxCenter(const struct FBox& Box);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		struct FBox STATIC_GetBoundingBoxOfBoneInfluence(class USkeletalMeshComponent* MeshComponent, TArray<struct FName> Bones, float WeightThreshold);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		class AActor* STATIC_GetAttachParentActor(class AActor* Actor);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		class UArchetype* STATIC_GetArchetypeObject(const struct FCharacterProfile& Profile);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		TArray<class UClass*> STATIC_GetAllWearableClassesForSlotExhaustive(EWearableSlot Slot);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		void STATIC_FSmoothDamp(float Target, float SmoothTime, float DeltaTime, float MaxSpeed, float* Current, float* CurrentVelocity);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		struct FText STATIC_FormatText(const struct FText& Text);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_ForceValidCharacterProfile(const struct FCharacterProfile& Profile, struct FCharacterProfile* ForceValidatedProfile);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		void STATIC_ForceReplicationUpdate(class UCharacterMovementComponent* CMC);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		void STATIC_FlushPlayerControllerPressedKeys(class APlayerController* Controller);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		void STATIC_FlashWindow();
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		float STATIC_FInterpToSeparate(float Current, float Target, float DeltaTime, float IncreaseSpeed, float DecreaseSpeed);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		float STATIC_FInterpConstantToSeparate(float Current, float Target, float DeltaTime, float IncreaseSpeed, float DecreaseSpeed);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_FindTeleportSpot(class AActor* Actor, const struct FVector& InLocation, const struct FRotator& InRotation, struct FVector* OutLocation);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		struct FSteamID STATIC_FindSteamID(const struct FString& PlayerNameOrSteamID);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		class AMordhauPlayerState* STATIC_FindPlayerState(const struct FString& PlayerNameOrSteamID);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_FindCircleIntersectionPoints(const struct FVector2D& CenterA, float RadiusA, const struct FVector2D& CenterB, float RadiusB, struct FVector2D* PointA, struct FVector2D* PointB);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		struct FRotator STATIC_FindBetween(const struct FVector& A, const struct FVector& B);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_Equal_SteamID(const struct FSteamID& A, const struct FSteamID& B);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		void STATIC_DrawText(class UCanvas* Canvas, class UFont* Font, int Size, const struct FString& Text, const struct FVector2D& Position, const struct FLinearColor& TextColor, float Kerning, const struct FLinearColor& ShadowColor, const struct FVector2D& ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, const struct FLinearColor& OutlineColor);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_ConsumeBudget(class AAdvancedCharacter* Character, EBudgetType BudgetType, bool bSkipInvisible, float Duration, float DistanceCutoff, bool bForce);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		int STATIC_ComputePointsLeft(const struct FCharacterProfile& Profile);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_CompareGearCustomization(const struct FCharacterGearCustomization& First, const struct FCharacterGearCustomization& Second);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_CompareFaceCustomization(const struct FFaceCustomization& First, const struct FFaceCustomization& Second);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_CompareEquipmentCustomization(const struct FEquipmentCustomization& First, const struct FEquipmentCustomization& Second);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_CompareAppearanceCustomization(const struct FAppearanceCustomization& First, const struct FAppearanceCustomization& Second);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		struct FVector STATIC_ClosestPointOnLine(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& Point);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		struct FString STATIC_Capitalize(const struct FString& String);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		int STATIC_CalculateGCD(int ValueA, int ValueB);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		float STATIC_CalculateAngle2D(const struct FVector& Direction, float Yaw);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_AreProfilesEqual(const struct FCharacterProfile& First, const struct FCharacterProfile& Second);
	UFUNCTION(BlueprintCallable, Category = "MordhauUtilityLibrary")
		bool STATIC_AreActorsFromSameLevel(class AActor* ActorA, class AActor* ActorB);

};