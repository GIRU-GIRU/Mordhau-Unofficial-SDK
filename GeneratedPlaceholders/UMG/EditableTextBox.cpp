#include "EditableTextBox.h"

void UEditableTextBox::SetText(const struct FText& InText) {
}
	void UEditableTextBox::SetIsReadOnly(bool bReadOnly) {
}
	void UEditableTextBox::SetIsPassword(bool bIsPassword) {
}
	void UEditableTextBox::SetHintText(const struct FText& InText) {
}
	void UEditableTextBox::SetError(const struct FText& InError) {
}
	void UEditableTextBox::OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod) {
}
	void UEditableTextBox::OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text) {
}
	bool UEditableTextBox::HasError() {
}
	struct FText UEditableTextBox::GetText() {
}
	void UEditableTextBox::ClearError() {
}
