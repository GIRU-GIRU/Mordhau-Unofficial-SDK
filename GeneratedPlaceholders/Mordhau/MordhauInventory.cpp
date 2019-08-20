#include "MordhauInventory.h"

void UMordhauInventory::UnlockLevelUnlocks(const struct FSteamID& SteamID, ECallResult* CallResult) {
}
	void UMordhauInventory::UnlockItems(const struct FSteamID& SteamID, TArray<int> ItemDefIDs, ECallResult* CallResult) {
}
	void UMordhauInventory::UnlockItem(const struct FSteamID& SteamID, int ItemDefID, ECallResult* CallResult) {
}
	void UMordhauInventory::TriggerRewardDrop(TArray<class AMordhauPlayerState*> Players, ECallResult* CallResult) {
}
	void UMordhauInventory::TriggerItemDrop(int ItemDefID, ECallResult* CallResult) {
}
	void UMordhauInventory::SetItemQuantity(const struct FSteamID& SteamID, int ItemDefID, int quantity, ECallResult* CallResult) {
}
	void UMordhauInventory::SerializeItems(ECallResult* CallResult) {
}
	void UMordhauInventory::ResetInventory(ECallResult* CallResult) {
}
	void UMordhauInventory::RequestUnlockRecipes() {
}
	void UMordhauInventory::RefreshItems(ECallResult* CallResult) {
}
	bool UMordhauInventory::ParseResponseString(const struct FString& ResponseString, TArray<struct FItemStack>* ItemStacks) {
}
	void UMordhauInventory::OnWebAPIItemsDropped(const struct FSteamID& SteamID, TArray<struct FItemStack> ItemStacks) {
}
	bool UMordhauInventory::IsSkinAvailable(const struct FSteamID& SteamID, const struct FEquipmentSkinEntry& Skin) {
}
	bool UMordhauInventory::IsInventoryAvailable(const struct FSteamID& SteamID) {
}
	bool UMordhauInventory::HasSupporterPack(const struct FSteamID& SteamID) {
}
	bool UMordhauInventory::HasSkin(const struct FSteamID& SteamID, const struct FEquipmentSkinEntry& Skin) {
}
	bool UMordhauInventory::HasRewards(const struct FSteamID& SteamID) {
}
	bool UMordhauInventory::HasItem(const struct FSteamID& SteamID, int ItemDefID) {
}
	int UMordhauInventory::STATIC_GetXPItemDefID() {
}
	int UMordhauInventory::GetXP() {
}
	void UMordhauInventory::GetUnlockRequirements(int ItemDefID, ECallResult* CallResult, TArray<struct FItemStack>* Requirements) {
}
	void UMordhauInventory::GetUnlockRecipe(int ItemDefID, ECallResult* CallResult, struct FUnlockRecipe* Recipe) {
}
	int UMordhauInventory::STATIC_GetTutorialPackageItemDefID() {
}
	int UMordhauInventory::STATIC_GetStackQuantity(const struct FItemStack& ItemStack) {
}
	int UMordhauInventory::STATIC_GetStackItemDefID(const struct FItemStack& ItemStack) {
}
	class UMordhauInventoryItem* UMordhauInventory::STATIC_GetStackItem(const struct FItemStack& ItemStack) {
}
	EItemRarity UMordhauInventory::GetSkinRarity(const struct FEquipmentSkinEntry& Skin) {
}
	void UMordhauInventory::GetItemStacks(const struct FSteamID& SteamID, ECallResult* CallResult, TArray<struct FItemStack>* ItemStacks) {
}
	void UMordhauInventory::GetItemQuantity(const struct FSteamID& SteamID, int ItemDefID, ECallResult* CallResult, int* quantity) {
}
	class UMordhauInventoryItem* UMordhauInventory::STATIC_GetItem(int ItemDefID) {
}
	int UMordhauInventory::STATIC_GetGoldItemDefID() {
}
	int UMordhauInventory::GetGold() {
}
	void UMordhauInventory::FakeRewardDrop(int Gold, int XP, ECallResult* CallResult) {
}
	void UMordhauInventory::FakeItemDrop(int ItemDefID, int quantity, ECallResult* CallResult) {
}
	void UMordhauInventory::DeserializeItems(const struct FSteamID& SteamID, const struct FSerializedItems& SerializedItems, ECallResult* CallResult) {
}
	void UMordhauInventory::ConsumeItemStack(const struct FItemStack& ItemStack, ECallResult* CallResult) {
}
	void UMordhauInventory::ConsolidateItems(ECallResult* CallResult) {
}
	TArray<struct FItemStack> UMordhauInventory::CollectRewards(const struct FSteamID& SteamID) {
}
	bool UMordhauInventory::CanUnlockItems(const struct FSteamID& SteamID, TArray<int> ItemDefIDs) {
}
	bool UMordhauInventory::CanUnlockItem(const struct FSteamID& SteamID, int ItemDefID) {
}
	bool UMordhauInventory::AreUnlockRecipesAvailable() {
}
	void UMordhauInventory::AddItems(TArray<int> ItemDefIDs, ECallResult* CallResult) {
}
	void UMordhauInventory::AddItem(int ItemDefID, ECallResult* CallResult) {
}
