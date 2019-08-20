#pragma once

#include "CoreMinimal.h"
#include "MaterialFunction.generated.h"

UCLASS()
class UMaterialFunction : public UMaterialFunctionInterface
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString Description;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bExposeToLibrary : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bPrefixParameterNames : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMaterialExpression*> FunctionExpressions;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bReentrantFlag : 1;


};