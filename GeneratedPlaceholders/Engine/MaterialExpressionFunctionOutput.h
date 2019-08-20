#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionFunctionOutput.generated.h"

UCLASS()
class UMaterialExpressionFunctionOutput : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName OutputName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString Description;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SortPriority;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput A;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bLastPreviewed : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGuid ID;


};