#pragma once

#include "CoreMinimal.h"
#include "CanvasPanelSlot.generated.h"

UCLASS()
class UCanvasPanelSlot : public UPanelSlot
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAnchorData LayoutData;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAutoSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ZOrder;

	UFUNCTION(BlueprintCallable, Category = "CanvasPanelSlot")
	void SetZOrder(int InZOrder);
	UFUNCTION(BlueprintCallable, Category = "CanvasPanelSlot")
		void SetSize(const struct FVector2D& InSize);
	UFUNCTION(BlueprintCallable, Category = "CanvasPanelSlot")
		void SetPosition(const struct FVector2D& InPosition);
	UFUNCTION(BlueprintCallable, Category = "CanvasPanelSlot")
		void SetOffsets(const struct FMargin& InOffset);
	UFUNCTION(BlueprintCallable, Category = "CanvasPanelSlot")
		void SetMinimum(const struct FVector2D& InMinimumAnchors);
	UFUNCTION(BlueprintCallable, Category = "CanvasPanelSlot")
		void SetMaximum(const struct FVector2D& InMaximumAnchors);
	UFUNCTION(BlueprintCallable, Category = "CanvasPanelSlot")
		void SetLayout(const struct FAnchorData& InLayoutData);
	UFUNCTION(BlueprintCallable, Category = "CanvasPanelSlot")
		void SetAutoSize(bool InbAutoSize);
	UFUNCTION(BlueprintCallable, Category = "CanvasPanelSlot")
		void SetAnchors(const struct FAnchors& InAnchors);
	UFUNCTION(BlueprintCallable, Category = "CanvasPanelSlot")
		void SetAlignment(const struct FVector2D& InAlignment);
	UFUNCTION(BlueprintCallable, Category = "CanvasPanelSlot")
		int GetZOrder();
	UFUNCTION(BlueprintCallable, Category = "CanvasPanelSlot")
		struct FVector2D GetSize();
	UFUNCTION(BlueprintCallable, Category = "CanvasPanelSlot")
		struct FVector2D GetPosition();
	UFUNCTION(BlueprintCallable, Category = "CanvasPanelSlot")
		struct FMargin GetOffsets();
	UFUNCTION(BlueprintCallable, Category = "CanvasPanelSlot")
		struct FAnchorData GetLayout();
	UFUNCTION(BlueprintCallable, Category = "CanvasPanelSlot")
		bool GetAutoSize();
	UFUNCTION(BlueprintCallable, Category = "CanvasPanelSlot")
		struct FAnchors GetAnchors();
	UFUNCTION(BlueprintCallable, Category = "CanvasPanelSlot")
		struct FVector2D GetAlignment();

};