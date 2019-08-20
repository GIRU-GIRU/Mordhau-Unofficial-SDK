#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionCustom.generated.h"

UCLASS()
class UMaterialExpressionCustom : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString code;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECustomMaterialOutputType> OutputType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString Description;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FCustomInput> Inputs;


};