#pragma once

#include "CoreMinimal.h"
#include "UserObjectListEntry.generated.h"

UCLASS()
class UUserObjectListEntry : public UUserListEntry
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "UserObjectListEntry")
	void OnListItemObjectSet(class UObject* ListItemObject);
	UFUNCTION(BlueprintCallable, Category = "UserObjectListEntry")
		class UObject* GetListItemObject();

};