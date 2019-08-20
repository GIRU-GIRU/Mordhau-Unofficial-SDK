#pragma once

#include "CoreMinimal.h"
#include "RectLightComponent.generated.h"

UCLASS()
class URectLightComponent : public ULocalLightComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SourceWidth;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SourceHeight;

	UFUNCTION(BlueprintCallable, Category = "RectLightComponent")
	void SetSourceWidth(float bNewValue);
	UFUNCTION(BlueprintCallable, Category = "RectLightComponent")
		void SetSourceHeight(float NewValue);

};