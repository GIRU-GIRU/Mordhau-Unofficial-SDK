#pragma once

#include "CoreMinimal.h"
#include "GameplayTagAssetInterface.generated.h"

UCLASS()
class UGameplayTagAssetInterface : public UInterface
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "GameplayTagAssetInterface")
	bool HasMatchingGameplayTag(const struct FGameplayTag& TagToCheck);
	UFUNCTION(BlueprintCallable, Category = "GameplayTagAssetInterface")
		bool HasAnyMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer);
	UFUNCTION(BlueprintCallable, Category = "GameplayTagAssetInterface")
		bool HasAllMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer);
	UFUNCTION(BlueprintCallable, Category = "GameplayTagAssetInterface")
		void GetOwnedGameplayTags(struct FGameplayTagContainer* TagContainer);

};