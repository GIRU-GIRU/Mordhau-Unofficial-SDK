#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionLandscapeGrassOutput.generated.h"

UCLASS()
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FGrassInput> GrassTypes;


};