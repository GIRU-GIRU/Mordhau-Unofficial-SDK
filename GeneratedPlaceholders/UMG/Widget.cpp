#include "Widget.h"

void UWidget::SetVisibility(ESlateVisibility InVisibility) {
}
	void UWidget::SetUserFocus(class APlayerController* PlayerController) {
}
	void UWidget::SetToolTipText(const struct FText& InToolTipText) {
}
	void UWidget::SetToolTip(class UWidget* Widget) {
}
	void UWidget::SetRenderTranslation(const struct FVector2D& Translation) {
}
	void UWidget::SetRenderTransformPivot(const struct FVector2D& Pivot) {
}
	void UWidget::SetRenderTransform(const struct FWidgetTransform& InTransform) {
}
	void UWidget::SetRenderShear(const struct FVector2D& Shear) {
}
	void UWidget::SetRenderScale(const struct FVector2D& Scale) {
}
	void UWidget::SetRenderOpacity(float InOpacity) {
}
	void UWidget::SetRenderAngle(float Angle) {
}
	void UWidget::SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, const struct FName& WidgetToFocus) {
}
	void UWidget::SetKeyboardFocus() {
}
	void UWidget::SetIsEnabled(bool bInIsEnabled) {
}
	void UWidget::SetCursor(TEnumAsByte<EMouseCursor> InCursor) {
}
	void UWidget::SetClipping(EWidgetClipping InClipping) {
}
	void UWidget::SetAllNavigationRules(EUINavigationRule Rule, const struct FName& WidgetToFocus) {
}
	void UWidget::ResetCursor() {
}
	void UWidget::RemoveFromParent() {
}
	struct FEventReply UWidget::OnReply__DelegateSignature() {
}
	struct FEventReply UWidget::OnPointerEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent) {
}
	bool UWidget::IsVisible() {
}
	bool UWidget::IsHovered() {
}
	void UWidget::InvalidateLayoutAndVolatility() {
}
	bool UWidget::HasUserFocusedDescendants(class APlayerController* PlayerController) {
}
	bool UWidget::HasUserFocus(class APlayerController* PlayerController) {
}
	bool UWidget::HasMouseCaptureByUser(int UserIndex, int PointerIndex) {
}
	bool UWidget::HasMouseCapture() {
}
	bool UWidget::HasKeyboardFocus() {
}
	bool UWidget::HasFocusedDescendants() {
}
	bool UWidget::HasAnyUserFocus() {
}
	class UWidget* UWidget::GetWidget__DelegateSignature() {
}
	ESlateVisibility UWidget::GetVisibility() {
}
	struct FText UWidget::GetText__DelegateSignature() {
}
	ESlateVisibility UWidget::GetSlateVisibility__DelegateSignature() {
}
	struct FSlateColor UWidget::GetSlateColor__DelegateSignature() {
}
	struct FSlateBrush UWidget::GetSlateBrush__DelegateSignature() {
}
	float UWidget::GetRenderOpacity() {
}
	class UPanelWidget* UWidget::GetParent() {
}
	class APlayerController* UWidget::GetOwningPlayer() {
}
	class ULocalPlayer* UWidget::GetOwningLocalPlayer() {
}
	TEnumAsByte<EMouseCursor> UWidget::GetMouseCursor__DelegateSignature() {
}
	struct FLinearColor UWidget::GetLinearColor__DelegateSignature() {
}
	bool UWidget::GetIsEnabled() {
}
	int UWidget::GetInt32__DelegateSignature() {
}
	float UWidget::GetFloat__DelegateSignature() {
}
	struct FVector2D UWidget::GetDesiredSize() {
}
	EWidgetClipping UWidget::GetClipping() {
}
	ECheckBoxState UWidget::GetCheckBoxState__DelegateSignature() {
}
	struct FGeometry UWidget::GetCachedGeometry() {
}
	bool UWidget::GetBool__DelegateSignature() {
}
	class UWidget* UWidget::GenerateWidgetForString__DelegateSignature(const struct FString& Item) {
}
	class UWidget* UWidget::GenerateWidgetForObject__DelegateSignature(class UObject* Item) {
}
	void UWidget::ForceVolatile(bool bForce) {
}
	void UWidget::ForceLayoutPrepass() {
}
