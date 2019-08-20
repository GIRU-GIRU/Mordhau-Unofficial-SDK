#include "MordhauSingleton.h"

class AMordhauEquipment* UMordhauSingleton::SpawnEquipment(class UWorld* WorldRef, const struct FEquipmentCustomization& Customization, unsigned char Emblem, unsigned char EmblemColor1, unsigned char EmblemColor2, bool bForceInstantMeshUpdate, bool bForceMipStreaming) {
}
	void UMordhauSingleton::SaveToConfig() {
}
	void UMordhauSingleton::LoadQueueFinishedLoadingChunk() {
}
	void UMordhauSingleton::LoadFromConfig() {
}
	int UMordhauSingleton::GetVoicesNum() {
}
	class UClass* UMordhauSingleton::GetVoice(int Index) {
}
	int UMordhauSingleton::GetUpperChestWearablesNum() {
}
	class UClass* UMordhauSingleton::GetUpperChestWearable(int Index) {
}
	class UMordhauColor* UMordhauSingleton::GetTableColorObject(unsigned char Table, unsigned char ID) {
}
	struct FLinearColor UMordhauSingleton::GetTableColor(unsigned char Table, unsigned char ID) {
}
	class UMordhauColor* UMordhauSingleton::GetSkinColorObject(unsigned char ID) {
}
	struct FLinearColor UMordhauSingleton::GetSkinColor(unsigned char ID) {
}
	class UMordhauColor* UMordhauSingleton::GetMetalTintsColorObject(unsigned char ID) {
}
	struct FLinearColor UMordhauSingleton::GetMetalTintsColor(unsigned char ID) {
}
	int UMordhauSingleton::GetLegsWearablesNum() {
}
	class UClass* UMordhauSingleton::GetLegsWearable(int Index) {
}
	bool UMordhauSingleton::GetIsLoadingAssets() {
}
	int UMordhauSingleton::GetHeadWearablesNum() {
}
	class UClass* UMordhauSingleton::GetHeadWearable(int Index) {
}
	class UMordhauColor* UMordhauSingleton::GetHairColorObject(unsigned char ID) {
}
	struct FLinearColor UMordhauSingleton::GetHairColor(unsigned char ID) {
}
	class UMordhauColor* UMordhauSingleton::GetEyeColorObject(unsigned char ID) {
}
	struct FLinearColor UMordhauSingleton::GetEyeColor(unsigned char ID) {
}
	int UMordhauSingleton::GetEquipmentNum() {
}
	unsigned char UMordhauSingleton::GetEquipmentID(class UClass* EquipmentType) {
}
	class UClass* UMordhauSingleton::GetEquipment(int Index) {
}
	class UMordhauColor* UMordhauSingleton::GetEmblemColorObject(unsigned char ID) {
}
	struct FLinearColor UMordhauSingleton::GetEmblemColor(unsigned char ID) {
}
	void UMordhauSingleton::ApplyProfileTo(const struct FCharacterProfile& Profile, class AMordhauCharacter* Char, unsigned char Team, bool bAddEquipment) {
}
