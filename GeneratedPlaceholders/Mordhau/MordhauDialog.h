#pragma once

#include "CoreMinimal.h"
#include "MordhauDialog.generated.h"

UCLASS()
class UMordhauDialog : public UUserWidget
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "MordhauDialog")
	void Show();
	UFUNCTION(BlueprintCallable, Category = "MordhauDialog")
		void Hide();

};