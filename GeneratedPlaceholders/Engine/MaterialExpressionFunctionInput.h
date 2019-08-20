#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionFunctionInput.generated.h"

UCLASS()
class UMaterialExpressionFunctionInput : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Preview;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName InputName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString Description;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGuid ID;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EFunctionInputType> InputType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector4 PreviewValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUsePreviewValueAsDefault : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SortPriority;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCompilingFunctionPreview : 1;


};