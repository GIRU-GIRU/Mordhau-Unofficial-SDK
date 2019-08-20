#pragma once

#include "CoreMinimal.h"
#include "MaterialExpression.generated.h"

UCLASS()
class UMaterialExpression : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterial* Material;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialFunction* Function;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsParameterExpression : 1;


};