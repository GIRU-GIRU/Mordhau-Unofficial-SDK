#pragma once

#include "CoreMinimal.h"
#include "MordhauSingleton.generated.h"

UCLASS()
class UMordhauSingleton : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData01[0x50];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData02[0x50];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData04[0x50];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData06[0x50];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FSoftObjectPath> CurrentlyProcessingLoadQueueArray;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh* DefaultCharacterMesh;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxBloodPools;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SingletonVersion;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UClass*> BotProfiles;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FString> RandomBotNames;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char DefaultHead;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData08[0x10];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char DefaultUpperChest;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData10[0x10];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char DefaultLegs;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData12[0x10];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData13[0x10];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UClass*> MaleFaces;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UClass*> FemaleFaces;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData14[0x10];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UClass*> Emblems;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UClass*> Badges;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UClass*> Perks;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UClass*> Archetypes;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UClass*> Eyebrows;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FMordhauColorItemTable> ColorTables;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMordhauColorItemTable SkinColorTable;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMordhauColorItemTable EyeColorTable;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMordhauColorItemTable HairColorTable;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMordhauColorItemTable EmblemColorTable;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMordhauColorItemTable MetalTintsColorTable;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UClass*> Motions;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UClass*> EmoteMotions;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char SelectedBadge;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FCharacterProfile> CharacterProfiles;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FCharacterProfile> DefaultProfiles;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FEquipmentCustomization> DefaultCharacterEquipment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FCharacterGearCustomization> DefaultCharacterTier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FFaceCustomization DefaultCharacterFace;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAppearanceCustomization DefaultCharacterAppearance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FCharacterProfile> BotCharacterProfiles;

	UFUNCTION(BlueprintCallable, Category = "MordhauSingleton")
	class AMordhauEquipment* SpawnEquipment(class UWorld* WorldRef, const struct FEquipmentCustomization& Customization, unsigned char Emblem, unsigned char EmblemColor1, unsigned char EmblemColor2, bool bForceInstantMeshUpdate, bool bForceMipStreaming);
	UFUNCTION(BlueprintCallable, Category = "MordhauSingleton")
		void SaveToConfig();
	UFUNCTION(BlueprintCallable, Category = "MordhauSingleton")
		void LoadQueueFinishedLoadingChunk();
	UFUNCTION(BlueprintCallable, Category = "MordhauSingleton")
		void LoadFromConfig();
	UFUNCTION(BlueprintCallable, Category = "MordhauSingleton")
		int GetVoicesNum();
	UFUNCTION(BlueprintCallable, Category = "MordhauSingleton")
		class UClass* GetVoice(int Index);
	UFUNCTION(BlueprintCallable, Category = "MordhauSingleton")
		int GetUpperChestWearablesNum();
	UFUNCTION(BlueprintCallable, Category = "MordhauSingleton")
		class UClass* GetUpperChestWearable(int Index);
	UFUNCTION(BlueprintCallable, Category = "MordhauSingleton")
		class UMordhauColor* GetTableColorObject(unsigned char Table, unsigned char ID);
	UFUNCTION(BlueprintCallable, Category = "MordhauSingleton")
		struct FLinearColor GetTableColor(unsigned char Table, unsigned char ID);
	UFUNCTION(BlueprintCallable, Category = "MordhauSingleton")
		class UMordhauColor* GetSkinColorObject(unsigned char ID);
	UFUNCTION(BlueprintCallable, Category = "MordhauSingleton")
		struct FLinearColor GetSkinColor(unsigned char ID);
	UFUNCTION(BlueprintCallable, Category = "MordhauSingleton")
		class UMordhauColor* GetMetalTintsColorObject(unsigned char ID);
	UFUNCTION(BlueprintCallable, Category = "MordhauSingleton")
		struct FLinearColor GetMetalTintsColor(unsigned char ID);
	UFUNCTION(BlueprintCallable, Category = "MordhauSingleton")
		int GetLegsWearablesNum();
	UFUNCTION(BlueprintCallable, Category = "MordhauSingleton")
		class UClass* GetLegsWearable(int Index);
	UFUNCTION(BlueprintCallable, Category = "MordhauSingleton")
		bool GetIsLoadingAssets();
	UFUNCTION(BlueprintCallable, Category = "MordhauSingleton")
		int GetHeadWearablesNum();
	UFUNCTION(BlueprintCallable, Category = "MordhauSingleton")
		class UClass* GetHeadWearable(int Index);
	UFUNCTION(BlueprintCallable, Category = "MordhauSingleton")
		class UMordhauColor* GetHairColorObject(unsigned char ID);
	UFUNCTION(BlueprintCallable, Category = "MordhauSingleton")
		struct FLinearColor GetHairColor(unsigned char ID);
	UFUNCTION(BlueprintCallable, Category = "MordhauSingleton")
		class UMordhauColor* GetEyeColorObject(unsigned char ID);
	UFUNCTION(BlueprintCallable, Category = "MordhauSingleton")
		struct FLinearColor GetEyeColor(unsigned char ID);
	UFUNCTION(BlueprintCallable, Category = "MordhauSingleton")
		int GetEquipmentNum();
	UFUNCTION(BlueprintCallable, Category = "MordhauSingleton")
		unsigned char GetEquipmentID(class UClass* EquipmentType);
	UFUNCTION(BlueprintCallable, Category = "MordhauSingleton")
		class UClass* GetEquipment(int Index);
	UFUNCTION(BlueprintCallable, Category = "MordhauSingleton")
		class UMordhauColor* GetEmblemColorObject(unsigned char ID);
	UFUNCTION(BlueprintCallable, Category = "MordhauSingleton")
		struct FLinearColor GetEmblemColor(unsigned char ID);
	UFUNCTION(BlueprintCallable, Category = "MordhauSingleton")
		void ApplyProfileTo(const struct FCharacterProfile& Profile, class AMordhauCharacter* Char, unsigned char Team, bool bAddEquipment);

};