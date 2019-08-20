#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionFontSample.generated.h"

UCLASS()
class UMaterialExpressionFontSample : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UFont* Font;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int FontTexturePage;


};