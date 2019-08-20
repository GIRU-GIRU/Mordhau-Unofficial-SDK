#include "UserWidget.h"

void UUserWidget::UnregisterInputComponent() {
}
	void UUserWidget::Tick(const struct FGeometry& MyGeometry, float InDeltaTime) {
}
	void UUserWidget::StopListeningForInputAction(const struct FName& ActionName, TEnumAsByte<EInputEvent> EventType) {
}
	void UUserWidget::StopListeningForAllInputActions() {
}
	void UUserWidget::StopAnimationsAndLatentActions() {
}
	void UUserWidget::StopAnimation(class UWidgetAnimation* InAnimation) {
}
	void UUserWidget::StopAllAnimations() {
}
	void UUserWidget::SetPositionInViewport(const struct FVector2D& Position, bool bRemoveDPIScale) {
}
	void UUserWidget::SetPlaybackSpeed(class UWidgetAnimation* InAnimation, float PlaybackSpeed) {
}
	void UUserWidget::SetPadding(const struct FMargin& InPadding) {
}
	void UUserWidget::SetOwningPlayer(class APlayerController* LocalPlayerController) {
}
	void UUserWidget::SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int NumLoopsToPlay) {
}
	void UUserWidget::SetInputActionPriority(int NewPriority) {
}
	void UUserWidget::SetInputActionBlocking(bool bShouldBlock) {
}
	void UUserWidget::SetForegroundColor(const struct FSlateColor& InForegroundColor) {
}
	void UUserWidget::SetDesiredSizeInViewport(const struct FVector2D& Size) {
}
	void UUserWidget::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity) {
}
	void UUserWidget::SetAnchorsInViewport(const struct FAnchors& Anchors) {
}
	void UUserWidget::SetAlignmentInViewport(const struct FVector2D& Alignment) {
}
	void UUserWidget::ReverseAnimation(class UWidgetAnimation* InAnimation) {
}
	void UUserWidget::RemoveFromViewport() {
}
	void UUserWidget::RegisterInputComponent() {
}
	void UUserWidget::PreConstruct(bool IsDesignTime) {
}
	void UUserWidget::PlaySound(class USoundBase* SoundToPlay) {
}
	void UUserWidget::PlayAnimationTo(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed) {
}
	void UUserWidget::PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed) {
}
	float UUserWidget::PauseAnimation(class UWidgetAnimation* InAnimation) {
}
	struct FEventReply UUserWidget::OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent) {
}
	struct FEventReply UUserWidget::OnTouchMoved(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent) {
}
	struct FEventReply UUserWidget::OnTouchGesture(const struct FGeometry& MyGeometry, const struct FPointerEvent& GestureEvent) {
}
	struct FEventReply UUserWidget::OnTouchEnded(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent) {
}
	void UUserWidget::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent) {
}
	struct FEventReply UUserWidget::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent) {
}
	struct FEventReply UUserWidget::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent) {
}
	void UUserWidget::OnPaint(struct FPaintContext* Context) {
}
	struct FEventReply UUserWidget::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent) {
}
	struct FEventReply UUserWidget::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent) {
}
	void UUserWidget::OnMouseLeave(const struct FPointerEvent& MouseEvent) {
}
	void UUserWidget::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent) {
}
	void UUserWidget::OnMouseCaptureLost() {
}
	struct FEventReply UUserWidget::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent) {
}
	struct FEventReply UUserWidget::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent) {
}
	struct FEventReply UUserWidget::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent) {
}
	struct FEventReply UUserWidget::OnMotionDetected(const struct FGeometry& MyGeometry, const struct FMotionEvent& InMotionEvent) {
}
	struct FEventReply UUserWidget::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent) {
}
	struct FEventReply UUserWidget::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent) {
}
	struct FEventReply UUserWidget::OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent) {
}
	struct FEventReply UUserWidget::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent) {
}
	void UUserWidget::OnFocusLost(const struct FFocusEvent& InFocusEvent) {
}
	bool UUserWidget::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation) {
}
	bool UUserWidget::OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation) {
}
	void UUserWidget::OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation) {
}
	void UUserWidget::OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation) {
}
	void UUserWidget::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation) {
}
	void UUserWidget::OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation) {
}
	void UUserWidget::OnAnimationStarted(class UWidgetAnimation* Animation) {
}
	void UUserWidget::OnAnimationFinished(class UWidgetAnimation* Animation) {
}
	struct FEventReply UUserWidget::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent) {
}
	void UUserWidget::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent) {
}
	void UUserWidget::ListenForInputAction(const struct FName& ActionName, TEnumAsByte<EInputEvent> EventType, bool bConsume, const struct FScriptDelegate& Callback) {
}
	bool UUserWidget::IsPlayingAnimation() {
}
	bool UUserWidget::IsListeningForInputAction(const struct FName& ActionName) {
}
	bool UUserWidget::IsInViewport() {
}
	bool UUserWidget::IsInteractable() {
}
	bool UUserWidget::IsAnyAnimationPlaying() {
}
	bool UUserWidget::IsAnimationPlayingForward(class UWidgetAnimation* InAnimation) {
}
	bool UUserWidget::IsAnimationPlaying(class UWidgetAnimation* InAnimation) {
}
	class APawn* UUserWidget::GetOwningPlayerPawn() {
}
	bool UUserWidget::GetIsVisible() {
}
	float UUserWidget::GetAnimationCurrentTime(class UWidgetAnimation* InAnimation) {
}
	struct FAnchors UUserWidget::GetAnchorsInViewport() {
}
	struct FVector2D UUserWidget::GetAlignmentInViewport() {
}
	void UUserWidget::Destruct() {
}
	void UUserWidget::Construct() {
}
	void UUserWidget::CancelLatentActions() {
}
	void UUserWidget::AddToViewport(int ZOrder) {
}
	bool UUserWidget::AddToPlayerScreen(int ZOrder) {
}
