#pragma once

#include "CoreMinimal.h"
#include "UserWidget.generated.h"

UCLASS()
class UUserWidget : public UWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor ColorAndOpacity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptDelegate ColorAndOpacityDelegate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSlateColor ForegroundColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptDelegate ForegroundColorDelegate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMargin Padding;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UUMGSequencePlayer*> ActiveSequencePlayers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UUMGSequencePlayer*> StoppedSequencePlayers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FNamedSlotBinding> NamedSlotBindings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UWidgetTree* WidgetTree;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int Priority;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSupportsKeyboardFocus : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsFocusable : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bStopAction : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bHasScriptImplementedTick : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bHasScriptImplementedPaint : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData01 : 2;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCookedWidgetTree : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EWidgetTickFrequency TickFrequency;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UInputComponent* InputComponent;

	UFUNCTION(BlueprintCallable, Category = "UserWidget")
	void UnregisterInputComponent();
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void StopListeningForInputAction(const struct FName& ActionName, TEnumAsByte<EInputEvent> EventType);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void StopListeningForAllInputActions();
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void StopAnimationsAndLatentActions();
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void StopAnimation(class UWidgetAnimation* InAnimation);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void StopAllAnimations();
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void SetPositionInViewport(const struct FVector2D& Position, bool bRemoveDPIScale);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void SetPlaybackSpeed(class UWidgetAnimation* InAnimation, float PlaybackSpeed);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void SetPadding(const struct FMargin& InPadding);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void SetOwningPlayer(class APlayerController* LocalPlayerController);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int NumLoopsToPlay);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void SetInputActionPriority(int NewPriority);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void SetInputActionBlocking(bool bShouldBlock);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void SetForegroundColor(const struct FSlateColor& InForegroundColor);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void SetDesiredSizeInViewport(const struct FVector2D& Size);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void SetAnchorsInViewport(const struct FAnchors& Anchors);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void SetAlignmentInViewport(const struct FVector2D& Alignment);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void ReverseAnimation(class UWidgetAnimation* InAnimation);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void RemoveFromViewport();
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void RegisterInputComponent();
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void PreConstruct(bool IsDesignTime);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void PlaySound(class USoundBase* SoundToPlay);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void PlayAnimationTo(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		float PauseAnimation(class UWidgetAnimation* InAnimation);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		struct FEventReply OnTouchMoved(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		struct FEventReply OnTouchGesture(const struct FGeometry& MyGeometry, const struct FPointerEvent& GestureEvent);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		struct FEventReply OnTouchEnded(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void OnPaint(struct FPaintContext* Context);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void OnMouseCaptureLost();
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		struct FEventReply OnMotionDetected(const struct FGeometry& MyGeometry, const struct FMotionEvent& InMotionEvent);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		struct FEventReply OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		bool OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void OnAnimationStarted(class UWidgetAnimation* Animation);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void OnAnimationFinished(class UWidgetAnimation* Animation);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void ListenForInputAction(const struct FName& ActionName, TEnumAsByte<EInputEvent> EventType, bool bConsume, const struct FScriptDelegate& Callback);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		bool IsPlayingAnimation();
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		bool IsListeningForInputAction(const struct FName& ActionName);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		bool IsInViewport();
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		bool IsInteractable();
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		bool IsAnyAnimationPlaying();
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		bool IsAnimationPlayingForward(class UWidgetAnimation* InAnimation);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		bool IsAnimationPlaying(class UWidgetAnimation* InAnimation);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		class APawn* GetOwningPlayerPawn();
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		bool GetIsVisible();
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		float GetAnimationCurrentTime(class UWidgetAnimation* InAnimation);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		struct FAnchors GetAnchorsInViewport();
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		struct FVector2D GetAlignmentInViewport();
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void Destruct();
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void Construct();
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void CancelLatentActions();
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		void AddToViewport(int ZOrder);
	UFUNCTION(BlueprintCallable, Category = "UserWidget")
		bool AddToPlayerScreen(int ZOrder);

};