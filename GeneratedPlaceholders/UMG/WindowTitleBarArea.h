#pragma once

#include "CoreMinimal.h"
#include "WindowTitleBarArea.generated.h"

UCLASS()
class UWindowTitleBarArea : public UContentWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bWindowButtonsEnabled;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDoubleClickTogglesFullscreen;

	UFUNCTION(BlueprintCallable, Category = "WindowTitleBarArea")
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	UFUNCTION(BlueprintCallable, Category = "WindowTitleBarArea")
		void SetPadding(const struct FMargin& InPadding);
	UFUNCTION(BlueprintCallable, Category = "WindowTitleBarArea")
		void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);

};