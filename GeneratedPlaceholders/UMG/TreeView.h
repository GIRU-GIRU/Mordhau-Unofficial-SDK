#pragma once

#include "CoreMinimal.h"
#include "TreeView.generated.h"

UCLASS()
class UTreeView : public UListView
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptDelegate BP_OnGetItemChildren;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate BP_OnItemExpansionChanged;

	UFUNCTION(BlueprintCallable, Category = "TreeView")
	void SetItemExpansion(class UObject* Item, bool bExpandItem);
	UFUNCTION(BlueprintCallable, Category = "TreeView")
		void ExpandAll();
	UFUNCTION(BlueprintCallable, Category = "TreeView")
		void CollapseAll();

};