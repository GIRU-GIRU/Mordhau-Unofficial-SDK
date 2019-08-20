#include "BlueprintGameplayTagLibrary.h"

bool UBlueprintGameplayTagLibrary::STATIC_RemoveGameplayTag(const struct FGameplayTag& Tag, struct FGameplayTagContainer* TagContainer) {
}
	bool UBlueprintGameplayTagLibrary::STATIC_NotEqual_TagTag(const struct FGameplayTag& A, const struct FString& B) {
}
	bool UBlueprintGameplayTagLibrary::STATIC_NotEqual_TagContainerTagContainer(const struct FGameplayTagContainer& A, const struct FString& B) {
}
	bool UBlueprintGameplayTagLibrary::STATIC_NotEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B) {
}
	bool UBlueprintGameplayTagLibrary::STATIC_NotEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B) {
}
	bool UBlueprintGameplayTagLibrary::STATIC_MatchesTag(const struct FGameplayTag& TagOne, const struct FGameplayTag& TagTwo, bool bExactMatch) {
}
	bool UBlueprintGameplayTagLibrary::STATIC_MatchesAnyTags(const struct FGameplayTag& TagOne, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch) {
}
	struct FGameplayTagContainer UBlueprintGameplayTagLibrary::STATIC_MakeLiteralGameplayTagContainer(const struct FGameplayTagContainer& Value) {
}
	struct FGameplayTag UBlueprintGameplayTagLibrary::STATIC_MakeLiteralGameplayTag(const struct FGameplayTag& Value) {
}
	struct FGameplayTagQuery UBlueprintGameplayTagLibrary::STATIC_MakeGameplayTagQuery(const struct FGameplayTagQuery& TagQuery) {
}
	struct FGameplayTagContainer UBlueprintGameplayTagLibrary::STATIC_MakeGameplayTagContainerFromTag(const struct FGameplayTag& SingleTag) {
}
	struct FGameplayTagContainer UBlueprintGameplayTagLibrary::STATIC_MakeGameplayTagContainerFromArray(TArray<struct FGameplayTag> GameplayTags) {
}
	bool UBlueprintGameplayTagLibrary::STATIC_IsGameplayTagValid(const struct FGameplayTag& GameplayTag) {
}
	bool UBlueprintGameplayTagLibrary::STATIC_HasTag(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTag& Tag, bool bExactMatch) {
}
	bool UBlueprintGameplayTagLibrary::STATIC_HasAnyTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch) {
}
	bool UBlueprintGameplayTagLibrary::STATIC_HasAllTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch) {
}
	bool UBlueprintGameplayTagLibrary::STATIC_HasAllMatchingGameplayTags(const TScriptInterface<class UGameplayTagAssetInterface>& TagContainerInterface, const struct FGameplayTagContainer& OtherContainer) {
}
	struct FName UBlueprintGameplayTagLibrary::STATIC_GetTagName(const struct FGameplayTag& GameplayTag) {
}
	int UBlueprintGameplayTagLibrary::STATIC_GetNumGameplayTagsInContainer(const struct FGameplayTagContainer& TagContainer) {
}
	struct FString UBlueprintGameplayTagLibrary::STATIC_GetDebugStringFromGameplayTagContainer(const struct FGameplayTagContainer& TagContainer) {
}
	struct FString UBlueprintGameplayTagLibrary::STATIC_GetDebugStringFromGameplayTag(const struct FGameplayTag& GameplayTag) {
}
	void UBlueprintGameplayTagLibrary::STATIC_GetAllActorsOfClassMatchingTagQuery(class UObject* WorldContextObject, class UClass* ActorClass, const struct FGameplayTagQuery& GameplayTagQuery, TArray<class AActor*>* OutActors) {
}
	bool UBlueprintGameplayTagLibrary::STATIC_EqualEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B) {
}
	bool UBlueprintGameplayTagLibrary::STATIC_EqualEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B) {
}
	bool UBlueprintGameplayTagLibrary::STATIC_DoesTagAssetInterfaceHaveTag(const TScriptInterface<class UGameplayTagAssetInterface>& TagContainerInterface, const struct FGameplayTag& Tag) {
}
	bool UBlueprintGameplayTagLibrary::STATIC_DoesContainerMatchTagQuery(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagQuery& TagQuery) {
}
	void UBlueprintGameplayTagLibrary::STATIC_BreakGameplayTagContainer(const struct FGameplayTagContainer& GameplayTagContainer, TArray<struct FGameplayTag>* GameplayTags) {
}
	void UBlueprintGameplayTagLibrary::STATIC_AppendGameplayTagContainers(const struct FGameplayTagContainer& InTagContainer, struct FGameplayTagContainer* InOutTagContainer) {
}
	void UBlueprintGameplayTagLibrary::STATIC_AddGameplayTag(const struct FGameplayTag& Tag, struct FGameplayTagContainer* TagContainer) {
}
