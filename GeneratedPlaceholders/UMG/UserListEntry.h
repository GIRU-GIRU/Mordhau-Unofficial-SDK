#pragma once

#include "CoreMinimal.h"
#include "UserListEntry.generated.h"

UCLASS()
class UUserListEntry : public UNativeUserListEntry
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "UserListEntry")
	void BP_OnItemSelectionChanged(bool bIsSelected);
	UFUNCTION(BlueprintCallable, Category = "UserListEntry")
		void BP_OnItemExpansionChanged(bool bIsExpanded);
	UFUNCTION(BlueprintCallable, Category = "UserListEntry")
		void BP_OnEntryReleased();

};