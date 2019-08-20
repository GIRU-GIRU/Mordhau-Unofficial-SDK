#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionMaterialAttributeLayers.generated.h"

UCLASS()
class UMaterialExpressionMaterialAttributeLayers : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName ParameterName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGuid ExpressionGUID;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMaterialAttributesInput Input;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMaterialLayersFunctions DefaultLayers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMaterialExpressionMaterialFunctionCall*> LayerCallers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NumActiveLayerCallers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMaterialExpressionMaterialFunctionCall*> BlendCallers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NumActiveBlendCallers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsLayerGraphBuilt;


};