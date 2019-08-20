#pragma once

#include "CoreMinimal.h"
#include "BlueprintGameplayTagLibrary.generated.h"

UCLASS()
class UBlueprintGameplayTagLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "BlueprintGameplayTagLibrary")
	bool STATIC_RemoveGameplayTag(const struct FGameplayTag& Tag, struct FGameplayTagContainer* TagContainer);
	UFUNCTION(BlueprintCallable, Category = "BlueprintGameplayTagLibrary")
		bool STATIC_NotEqual_TagTag(const struct FGameplayTag& A, const struct FString& B);
	UFUNCTION(BlueprintCallable, Category = "BlueprintGameplayTagLibrary")
		bool STATIC_NotEqual_TagContainerTagContainer(const struct FGameplayTagContainer& A, const struct FString& B);
	UFUNCTION(BlueprintCallable, Category = "BlueprintGameplayTagLibrary")
		bool STATIC_NotEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B);
	UFUNCTION(BlueprintCallable, Category = "BlueprintGameplayTagLibrary")
		bool STATIC_NotEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B);
	UFUNCTION(BlueprintCallable, Category = "BlueprintGameplayTagLibrary")
		bool STATIC_MatchesTag(const struct FGameplayTag& TagOne, const struct FGameplayTag& TagTwo, bool bExactMatch);
	UFUNCTION(BlueprintCallable, Category = "BlueprintGameplayTagLibrary")
		bool STATIC_MatchesAnyTags(const struct FGameplayTag& TagOne, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch);
	UFUNCTION(BlueprintCallable, Category = "BlueprintGameplayTagLibrary")
		struct FGameplayTagContainer STATIC_MakeLiteralGameplayTagContainer(const struct FGameplayTagContainer& Value);
	UFUNCTION(BlueprintCallable, Category = "BlueprintGameplayTagLibrary")
		struct FGameplayTag STATIC_MakeLiteralGameplayTag(const struct FGameplayTag& Value);
	UFUNCTION(BlueprintCallable, Category = "BlueprintGameplayTagLibrary")
		struct FGameplayTagQuery STATIC_MakeGameplayTagQuery(const struct FGameplayTagQuery& TagQuery);
	UFUNCTION(BlueprintCallable, Category = "BlueprintGameplayTagLibrary")
		struct FGameplayTagContainer STATIC_MakeGameplayTagContainerFromTag(const struct FGameplayTag& SingleTag);
	UFUNCTION(BlueprintCallable, Category = "BlueprintGameplayTagLibrary")
		struct FGameplayTagContainer STATIC_MakeGameplayTagContainerFromArray(TArray<struct FGameplayTag> GameplayTags);
	UFUNCTION(BlueprintCallable, Category = "BlueprintGameplayTagLibrary")
		bool STATIC_IsGameplayTagValid(const struct FGameplayTag& GameplayTag);
	UFUNCTION(BlueprintCallable, Category = "BlueprintGameplayTagLibrary")
		bool STATIC_HasTag(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTag& Tag, bool bExactMatch);
	UFUNCTION(BlueprintCallable, Category = "BlueprintGameplayTagLibrary")
		bool STATIC_HasAnyTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch);
	UFUNCTION(BlueprintCallable, Category = "BlueprintGameplayTagLibrary")
		bool STATIC_HasAllTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch);
	UFUNCTION(BlueprintCallable, Category = "BlueprintGameplayTagLibrary")
		bool STATIC_HasAllMatchingGameplayTags(const TScriptInterface<class UGameplayTagAssetInterface>& TagContainerInterface, const struct FGameplayTagContainer& OtherContainer);
	UFUNCTION(BlueprintCallable, Category = "BlueprintGameplayTagLibrary")
		struct FName STATIC_GetTagName(const struct FGameplayTag& GameplayTag);
	UFUNCTION(BlueprintCallable, Category = "BlueprintGameplayTagLibrary")
		int STATIC_GetNumGameplayTagsInContainer(const struct FGameplayTagContainer& TagContainer);
	UFUNCTION(BlueprintCallable, Category = "BlueprintGameplayTagLibrary")
		struct FString STATIC_GetDebugStringFromGameplayTagContainer(const struct FGameplayTagContainer& TagContainer);
	UFUNCTION(BlueprintCallable, Category = "BlueprintGameplayTagLibrary")
		struct FString STATIC_GetDebugStringFromGameplayTag(const struct FGameplayTag& GameplayTag);
	UFUNCTION(BlueprintCallable, Category = "BlueprintGameplayTagLibrary")
		void STATIC_GetAllActorsOfClassMatchingTagQuery(class UObject* WorldContextObject, class UClass* ActorClass, const struct FGameplayTagQuery& GameplayTagQuery, TArray<class AActor*>* OutActors);
	UFUNCTION(BlueprintCallable, Category = "BlueprintGameplayTagLibrary")
		bool STATIC_EqualEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B);
	UFUNCTION(BlueprintCallable, Category = "BlueprintGameplayTagLibrary")
		bool STATIC_EqualEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B);
	UFUNCTION(BlueprintCallable, Category = "BlueprintGameplayTagLibrary")
		bool STATIC_DoesTagAssetInterfaceHaveTag(const TScriptInterface<class UGameplayTagAssetInterface>& TagContainerInterface, const struct FGameplayTag& Tag);
	UFUNCTION(BlueprintCallable, Category = "BlueprintGameplayTagLibrary")
		bool STATIC_DoesContainerMatchTagQuery(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagQuery& TagQuery);
	UFUNCTION(BlueprintCallable, Category = "BlueprintGameplayTagLibrary")
		void STATIC_BreakGameplayTagContainer(const struct FGameplayTagContainer& GameplayTagContainer, TArray<struct FGameplayTag>* GameplayTags);
	UFUNCTION(BlueprintCallable, Category = "BlueprintGameplayTagLibrary")
		void STATIC_AppendGameplayTagContainers(const struct FGameplayTagContainer& InTagContainer, struct FGameplayTagContainer* InOutTagContainer);
	UFUNCTION(BlueprintCallable, Category = "BlueprintGameplayTagLibrary")
		void STATIC_AddGameplayTag(const struct FGameplayTag& Tag, struct FGameplayTagContainer* TagContainer);

};