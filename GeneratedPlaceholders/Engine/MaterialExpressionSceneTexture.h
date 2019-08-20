#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionSceneTexture.generated.h"

UCLASS()
class UMaterialExpressionSceneTexture : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Coordinates;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ESceneTextureId> SceneTextureId;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bFiltered;


};