#pragma once

#include "CoreMinimal.h"
#include "ExpandableArea.generated.h"

UCLASS()
class UExpandableArea : public UWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpandableAreaStyle Style;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSlateBrush BorderBrush;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSlateColor BorderColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsExpanded;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxHeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMargin HeaderPadding;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMargin AreaPadding;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnExpansionChanged;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UWidget* HeaderContent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UWidget* BodyContent;

	UFUNCTION(BlueprintCallable, Category = "ExpandableArea")
	void SetIsExpanded_Animated(bool IsExpanded);
	UFUNCTION(BlueprintCallable, Category = "ExpandableArea")
		void SetIsExpanded(bool IsExpanded);
	UFUNCTION(BlueprintCallable, Category = "ExpandableArea")
		bool GetIsExpanded();

};