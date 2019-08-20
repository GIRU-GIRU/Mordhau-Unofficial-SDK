#pragma once

#include "CoreMinimal.h"
#include "MaterialBillboardComponent.generated.h"

UCLASS()
class UMaterialBillboardComponent : public UPrimitiveComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FMaterialSpriteElement> Elements;

	UFUNCTION(BlueprintCallable, Category = "MaterialBillboardComponent")
	void SetElements(TArray<struct FMaterialSpriteElement> NewElements);
	UFUNCTION(BlueprintCallable, Category = "MaterialBillboardComponent")
		void AddElement(class UMaterialInterface* Material, class UCurveFloat* DistanceToOpacityCurve, bool bSizeIsInScreenSpace, float BaseSizeX, float BaseSizeY, class UCurveFloat* DistanceToSizeCurve);

};