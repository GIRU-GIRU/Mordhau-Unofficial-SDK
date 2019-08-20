#pragma once

#include "CoreMinimal.h"
#include "ArrowComponent.generated.h"

UCLASS()
class UArrowComponent : public UPrimitiveComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColor ArrowColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ArrowSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsScreenSizeScaled;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ScreenSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bTreatAsASprite : 1;

	UFUNCTION(BlueprintCallable, Category = "ArrowComponent")
	void SetArrowColor(const struct FLinearColor& NewColor);

};