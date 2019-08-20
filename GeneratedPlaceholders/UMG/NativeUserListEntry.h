#pragma once

#include "CoreMinimal.h"
#include "NativeUserListEntry.generated.h"

UCLASS()
class UNativeUserListEntry : public UInterface
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "NativeUserListEntry")
	bool IsListItemSelected();
	UFUNCTION(BlueprintCallable, Category = "NativeUserListEntry")
		bool IsListItemExpanded();

};