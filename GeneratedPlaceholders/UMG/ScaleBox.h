#pragma once

#include "CoreMinimal.h"
#include "ScaleBox.generated.h"

UCLASS()
class UScaleBox : public UContentWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EStretch> Stretch;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EStretchDirection> StretchDirection;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float UserSpecifiedScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool IgnoreInheritedScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bSingleLayoutPass;

	UFUNCTION(BlueprintCallable, Category = "ScaleBox")
	void SetUserSpecifiedScale(float InUserSpecifiedScale);
	UFUNCTION(BlueprintCallable, Category = "ScaleBox")
		void SetStretchDirection(TEnumAsByte<EStretchDirection> InStretchDirection);
	UFUNCTION(BlueprintCallable, Category = "ScaleBox")
		void SetStretch(TEnumAsByte<EStretch> InStretch);
	UFUNCTION(BlueprintCallable, Category = "ScaleBox")
		void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);

};