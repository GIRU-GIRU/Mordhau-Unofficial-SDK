#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionTextureCoordinate.generated.h"

UCLASS()
class UMaterialExpressionTextureCoordinate : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int CoordinateIndex;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float UTiling;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float VTiling;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnMirrorU : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnMirrorV : 1;


};