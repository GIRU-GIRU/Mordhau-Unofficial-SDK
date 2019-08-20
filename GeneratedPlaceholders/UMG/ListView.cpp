#include "ListView.h"

void UListView::SetSelectionMode(TEnumAsByte<ESelectionMode> SelectionMode) {
}
	void UListView::SetSelectedIndex(int Index) {
}
	void UListView::ScrollIndexIntoView(int Index) {
}
	void UListView::NavigateToIndex(int Index) {
}
	bool UListView::IsRefreshPending() {
}
	int UListView::GetNumItems() {
}
	TArray<class UObject*> UListView::GetListItems() {
}
	class UObject* UListView::GetItemAt(int Index) {
}
	int UListView::GetIndexForItem(class UObject* Item) {
}
	void UListView::ClearListItems() {
}
	void UListView::BP_SetSelectedItem(class UObject* Item) {
}
	void UListView::BP_SetListItems(TArray<class UObject*> InListItems) {
}
	void UListView::BP_SetItemSelection(class UObject* Item, bool bSelected) {
}
	void UListView::BP_ScrollItemIntoView(class UObject* Item) {
}
	void UListView::BP_NavigateToItem(class UObject* Item) {
}
	bool UListView::BP_IsItemVisible(class UObject* Item) {
}
	bool UListView::BP_GetSelectedItems(TArray<class UObject*>* Items) {
}
	class UObject* UListView::BP_GetSelectedItem() {
}
	int UListView::BP_GetNumItemsSelected() {
}
	void UListView::BP_ClearSelection() {
}
	void UListView::BP_CancelScrollIntoView() {
}
	void UListView::AddItem(class UObject* Item) {
}
