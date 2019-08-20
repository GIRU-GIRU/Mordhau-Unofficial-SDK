#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionLandscapeLayerCoords.generated.h"

UCLASS()
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ETerrainCoordMappingType> MappingType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ELandscapeCustomizedCoordType> CustomUVType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MappingScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MappingRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MappingPanU;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MappingPanV;


};