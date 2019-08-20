#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionIf.generated.h"

UCLASS()
class UMaterialExpressionIf : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput A;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput B;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput AGreaterThanB;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput AEqualsB;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput ALessThanB;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float EqualsThreshold;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ConstB;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ConstAEqualsB;


};