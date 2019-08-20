#pragma once

#include "CoreMinimal.h"
#include "DynamicEntryBox.generated.h"

UCLASS()
class UDynamicEntryBox : public UWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EDynamicBoxType EntryBoxType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D EntrySpacing;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FVector2D> SpacingPattern;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSlateChildSize EntrySizeRule;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EHorizontalAlignment> EntryHorizontalAlignment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EVerticalAlignment> EntryVerticalAlignment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxElementSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* EntryWidgetClass;

	UFUNCTION(BlueprintCallable, Category = "DynamicEntryBox")
	void SetEntrySpacing(const struct FVector2D& InEntrySpacing);
	UFUNCTION(BlueprintCallable, Category = "DynamicEntryBox")
		void Reset(bool bDeleteWidgets);
	UFUNCTION(BlueprintCallable, Category = "DynamicEntryBox")
		void RemoveEntry(class UUserWidget* EntryWidget);
	UFUNCTION(BlueprintCallable, Category = "DynamicEntryBox")
		int GetNumEntries();
	UFUNCTION(BlueprintCallable, Category = "DynamicEntryBox")
		TArray<class UUserWidget*> GetAllEntries();
	UFUNCTION(BlueprintCallable, Category = "DynamicEntryBox")
		class UUserWidget* BP_CreateEntry();

};