#pragma once

#include "CoreMinimal.h"
#include "ListViewBase.generated.h"

UCLASS()
class UListViewBase : public UWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* EntryWidgetClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate BP_OnEntryGenerated;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate BP_OnEntryReleased;

	UFUNCTION(BlueprintCallable, Category = "ListViewBase")
	void ScrollToTop();
	UFUNCTION(BlueprintCallable, Category = "ListViewBase")
		void ScrollToBottom();
	UFUNCTION(BlueprintCallable, Category = "ListViewBase")
		void RegenerateAllEntries();
	UFUNCTION(BlueprintCallable, Category = "ListViewBase")
		TArray<class UUserWidget*> GetDisplayedEntryWidgets();

};