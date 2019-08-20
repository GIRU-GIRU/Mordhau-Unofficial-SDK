#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionDecalMipmapLevel.generated.h"

UCLASS()
class UMaterialExpressionDecalMipmapLevel : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput TextureSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ConstWidth;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ConstHeight;


};