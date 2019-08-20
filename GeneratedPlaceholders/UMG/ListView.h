#pragma once

#include "CoreMinimal.h"
#include "ListView.generated.h"

UCLASS()
class UListView : public UListViewBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ESelectionMode> SelectionMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EConsumeMouseWheel ConsumeMouseWheel;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bClearSelectionOnClick;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float EntrySpacing;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UObject*> ListItems;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate BP_OnItemClicked;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate BP_OnItemDoubleClicked;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate BP_OnItemIsHoveredChanged;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate BP_OnItemSelectionChanged;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate BP_OnItemScrolledIntoView;

	UFUNCTION(BlueprintCallable, Category = "ListView")
	void SetSelectionMode(TEnumAsByte<ESelectionMode> SelectionMode);
	UFUNCTION(BlueprintCallable, Category = "ListView")
		void SetSelectedIndex(int Index);
	UFUNCTION(BlueprintCallable, Category = "ListView")
		void ScrollIndexIntoView(int Index);
	UFUNCTION(BlueprintCallable, Category = "ListView")
		void NavigateToIndex(int Index);
	UFUNCTION(BlueprintCallable, Category = "ListView")
		bool IsRefreshPending();
	UFUNCTION(BlueprintCallable, Category = "ListView")
		int GetNumItems();
	UFUNCTION(BlueprintCallable, Category = "ListView")
		TArray<class UObject*> GetListItems();
	UFUNCTION(BlueprintCallable, Category = "ListView")
		class UObject* GetItemAt(int Index);
	UFUNCTION(BlueprintCallable, Category = "ListView")
		int GetIndexForItem(class UObject* Item);
	UFUNCTION(BlueprintCallable, Category = "ListView")
		void ClearListItems();
	UFUNCTION(BlueprintCallable, Category = "ListView")
		void BP_SetSelectedItem(class UObject* Item);
	UFUNCTION(BlueprintCallable, Category = "ListView")
		void BP_SetListItems(TArray<class UObject*> InListItems);
	UFUNCTION(BlueprintCallable, Category = "ListView")
		void BP_SetItemSelection(class UObject* Item, bool bSelected);
	UFUNCTION(BlueprintCallable, Category = "ListView")
		void BP_ScrollItemIntoView(class UObject* Item);
	UFUNCTION(BlueprintCallable, Category = "ListView")
		void BP_NavigateToItem(class UObject* Item);
	UFUNCTION(BlueprintCallable, Category = "ListView")
		bool BP_IsItemVisible(class UObject* Item);
	UFUNCTION(BlueprintCallable, Category = "ListView")
		bool BP_GetSelectedItems(TArray<class UObject*>* Items);
	UFUNCTION(BlueprintCallable, Category = "ListView")
		class UObject* BP_GetSelectedItem();
	UFUNCTION(BlueprintCallable, Category = "ListView")
		int BP_GetNumItemsSelected();
	UFUNCTION(BlueprintCallable, Category = "ListView")
		void BP_ClearSelection();
	UFUNCTION(BlueprintCallable, Category = "ListView")
		void BP_CancelScrollIntoView();
	UFUNCTION(BlueprintCallable, Category = "ListView")
		void AddItem(class UObject* Item);

};