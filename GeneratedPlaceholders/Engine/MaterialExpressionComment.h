#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionComment.generated.h"

UCLASS()
class UMaterialExpressionComment : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SizeX;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SizeY;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString Text;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor CommentColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int FontSize;


};