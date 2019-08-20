#pragma once

#include "CoreMinimal.h"
#include "WrapBox.generated.h"

UCLASS()
class UWrapBox : public UPanelWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D InnerSlotPadding;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float WrapWidth;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bExplicitWrapWidth;

	UFUNCTION(BlueprintCallable, Category = "WrapBox")
	void SetInnerSlotPadding(const struct FVector2D& InPadding);
	UFUNCTION(BlueprintCallable, Category = "WrapBox")
		class UWrapBoxSlot* AddChildWrapBox(class UWidget* Content);

};