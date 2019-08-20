#pragma once

#include "CoreMinimal.h"
#include "WidgetInteractionComponent.generated.h"

UCLASS()
class UWidgetInteractionComponent : public USceneComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int VirtualUserIndex;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PointerIndex;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECollisionChannel> TraceChannel;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float InteractionDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EWidgetInteractionSource InteractionSource;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bEnableHitTesting;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bShowDebug;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor DebugColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FHitResult CustomHitResult;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D LocalHitLocation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D LastLocalHitLocation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UWidgetComponent* HoveredWidgetComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FHitResult LastHitResult;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsHoveredWidgetInteractable;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsHoveredWidgetFocusable;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsHoveredWidgetHitTestVisible;

	UFUNCTION(BlueprintCallable, Category = "WidgetInteractionComponent")
	void SetCustomHitResult(const struct FHitResult& HitResult);
	UFUNCTION(BlueprintCallable, Category = "WidgetInteractionComponent")
		bool SendKeyChar(const struct FString& Characters, bool bRepeat);
	UFUNCTION(BlueprintCallable, Category = "WidgetInteractionComponent")
		void ScrollWheel(float ScrollDelta);
	UFUNCTION(BlueprintCallable, Category = "WidgetInteractionComponent")
		void ReleasePointerKey(const struct FKey& Key);
	UFUNCTION(BlueprintCallable, Category = "WidgetInteractionComponent")
		bool ReleaseKey(const struct FKey& Key);
	UFUNCTION(BlueprintCallable, Category = "WidgetInteractionComponent")
		void PressPointerKey(const struct FKey& Key);
	UFUNCTION(BlueprintCallable, Category = "WidgetInteractionComponent")
		bool PressKey(const struct FKey& Key, bool bRepeat);
	UFUNCTION(BlueprintCallable, Category = "WidgetInteractionComponent")
		bool PressAndReleaseKey(const struct FKey& Key);
	UFUNCTION(BlueprintCallable, Category = "WidgetInteractionComponent")
		bool IsOverInteractableWidget();
	UFUNCTION(BlueprintCallable, Category = "WidgetInteractionComponent")
		bool IsOverHitTestVisibleWidget();
	UFUNCTION(BlueprintCallable, Category = "WidgetInteractionComponent")
		bool IsOverFocusableWidget();
	UFUNCTION(BlueprintCallable, Category = "WidgetInteractionComponent")
		struct FHitResult GetLastHitResult();
	UFUNCTION(BlueprintCallable, Category = "WidgetInteractionComponent")
		class UWidgetComponent* GetHoveredWidgetComponent();
	UFUNCTION(BlueprintCallable, Category = "WidgetInteractionComponent")
		struct FVector2D Get2DHitLocation();

};