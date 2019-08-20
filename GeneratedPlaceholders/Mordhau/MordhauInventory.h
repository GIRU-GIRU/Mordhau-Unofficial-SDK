#pragma once

#include "CoreMinimal.h"
#include "MordhauInventory.generated.h"

UCLASS()
class UMordhauInventory : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnItemsRefreshed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnItemsSerialized;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnItemsDeserialized;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnItemsDropped;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnRewardsDropped;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnItemsUnlocked;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString RecipesString;

	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
	void UnlockLevelUnlocks(const struct FSteamID& SteamID, ECallResult* CallResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		void UnlockItems(const struct FSteamID& SteamID, TArray<int> ItemDefIDs, ECallResult* CallResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		void UnlockItem(const struct FSteamID& SteamID, int ItemDefID, ECallResult* CallResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		void TriggerRewardDrop(TArray<class AMordhauPlayerState*> Players, ECallResult* CallResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		void TriggerItemDrop(int ItemDefID, ECallResult* CallResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		void SetItemQuantity(const struct FSteamID& SteamID, int ItemDefID, int quantity, ECallResult* CallResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		void SerializeItems(ECallResult* CallResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		void ResetInventory(ECallResult* CallResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		void RequestUnlockRecipes();
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		void RefreshItems(ECallResult* CallResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		bool ParseResponseString(const struct FString& ResponseString, TArray<struct FItemStack>* ItemStacks);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		void OnWebAPIItemsDropped(const struct FSteamID& SteamID, TArray<struct FItemStack> ItemStacks);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		bool IsSkinAvailable(const struct FSteamID& SteamID, const struct FEquipmentSkinEntry& Skin);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		bool IsInventoryAvailable(const struct FSteamID& SteamID);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		bool HasSupporterPack(const struct FSteamID& SteamID);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		bool HasSkin(const struct FSteamID& SteamID, const struct FEquipmentSkinEntry& Skin);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		bool HasRewards(const struct FSteamID& SteamID);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		bool HasItem(const struct FSteamID& SteamID, int ItemDefID);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		int STATIC_GetXPItemDefID();
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		int GetXP();
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		void GetUnlockRequirements(int ItemDefID, ECallResult* CallResult, TArray<struct FItemStack>* Requirements);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		void GetUnlockRecipe(int ItemDefID, ECallResult* CallResult, struct FUnlockRecipe* Recipe);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		int STATIC_GetTutorialPackageItemDefID();
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		int STATIC_GetStackQuantity(const struct FItemStack& ItemStack);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		int STATIC_GetStackItemDefID(const struct FItemStack& ItemStack);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		class UMordhauInventoryItem* STATIC_GetStackItem(const struct FItemStack& ItemStack);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		EItemRarity GetSkinRarity(const struct FEquipmentSkinEntry& Skin);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		void GetItemStacks(const struct FSteamID& SteamID, ECallResult* CallResult, TArray<struct FItemStack>* ItemStacks);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		void GetItemQuantity(const struct FSteamID& SteamID, int ItemDefID, ECallResult* CallResult, int* quantity);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		class UMordhauInventoryItem* STATIC_GetItem(int ItemDefID);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		int STATIC_GetGoldItemDefID();
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		int GetGold();
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		void FakeRewardDrop(int Gold, int XP, ECallResult* CallResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		void FakeItemDrop(int ItemDefID, int quantity, ECallResult* CallResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		void DeserializeItems(const struct FSteamID& SteamID, const struct FSerializedItems& SerializedItems, ECallResult* CallResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		void ConsumeItemStack(const struct FItemStack& ItemStack, ECallResult* CallResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		void ConsolidateItems(ECallResult* CallResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		TArray<struct FItemStack> CollectRewards(const struct FSteamID& SteamID);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		bool CanUnlockItems(const struct FSteamID& SteamID, TArray<int> ItemDefIDs);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		bool CanUnlockItem(const struct FSteamID& SteamID, int ItemDefID);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		bool AreUnlockRecipesAvailable();
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		void AddItems(TArray<int> ItemDefIDs, ECallResult* CallResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventory")
		void AddItem(int ItemDefID, ECallResult* CallResult);

};