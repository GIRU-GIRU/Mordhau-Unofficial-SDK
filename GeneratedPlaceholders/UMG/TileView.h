#pragma once

#include "CoreMinimal.h"
#include "TileView.generated.h"

UCLASS()
class UTileView : public UListView
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float EntryHeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float EntryWidth;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EListItemAlignment TileAlignment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bWrapHorizontalNavigation;

	UFUNCTION(BlueprintCallable, Category = "TileView")
	void SetEntryWidth(float NewWidth);
	UFUNCTION(BlueprintCallable, Category = "TileView")
		void SetEntryHeight(float NewHeight);

};