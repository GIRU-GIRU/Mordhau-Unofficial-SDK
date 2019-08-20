#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionTextureProperty.generated.h"

UCLASS()
class UMaterialExpressionTextureProperty : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput TextureObject;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EMaterialExposedTextureProperty> Property;


};