#pragma once

#include "CoreMinimal.h"
#include "ContentWidget.generated.h"

UCLASS()
class UContentWidget : public UPanelWidget
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "ContentWidget")
	class UPanelSlot* SetContent(class UWidget* Content);
	UFUNCTION(BlueprintCallable, Category = "ContentWidget")
		class UPanelSlot* GetContentSlot();
	UFUNCTION(BlueprintCallable, Category = "ContentWidget")
		class UWidget* GetContent();

};