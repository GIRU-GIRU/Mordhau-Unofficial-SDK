#pragma once

#include "CoreMinimal.h"
#include "RichTextBlock.generated.h"

UCLASS()
class URichTextBlock : public UTextLayoutWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FText Text;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UDataTable* TextStyleSet;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UClass*> DecoratorClasses;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class URichTextBlockDecorator*> InstanceDecorators;

	UFUNCTION(BlueprintCallable, Category = "RichTextBlock")
	void SetText(const struct FText& InText);
	UFUNCTION(BlueprintCallable, Category = "RichTextBlock")
		class URichTextBlockDecorator* GetDecoratorByClass(class UClass* DecoratorClass);

};