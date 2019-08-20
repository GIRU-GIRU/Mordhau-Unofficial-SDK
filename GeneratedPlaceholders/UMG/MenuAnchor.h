#pragma once

#include "CoreMinimal.h"
#include "MenuAnchor.generated.h"

UCLASS()
class UMenuAnchor : public UContentWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* MenuClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptDelegate OnGetMenuContentEvent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EMenuPlacement> Placement;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool ShouldDeferPaintingAfterWindowContent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool UseApplicationMenuStack;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnMenuOpenChanged;

	UFUNCTION(BlueprintCallable, Category = "MenuAnchor")
	void ToggleOpen(bool bFocusOnOpen);
	UFUNCTION(BlueprintCallable, Category = "MenuAnchor")
		bool ShouldOpenDueToClick();
	UFUNCTION(BlueprintCallable, Category = "MenuAnchor")
		void Open(bool bFocusMenu);
	UFUNCTION(BlueprintCallable, Category = "MenuAnchor")
		bool IsOpen();
	UFUNCTION(BlueprintCallable, Category = "MenuAnchor")
		bool HasOpenSubMenus();
	UFUNCTION(BlueprintCallable, Category = "MenuAnchor")
		struct FVector2D GetMenuPosition();
	UFUNCTION(BlueprintCallable, Category = "MenuAnchor")
		void Close();

};