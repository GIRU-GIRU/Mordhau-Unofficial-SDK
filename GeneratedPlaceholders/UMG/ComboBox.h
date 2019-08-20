#pragma once

#include "CoreMinimal.h"
#include "ComboBox.generated.h"

UCLASS()
class UComboBox : public UWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UObject*> Items;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptDelegate OnGenerateWidgetEvent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsFocusable;


};