#pragma once

#include "CoreMinimal.h"
#include "MaterialFunctionInterface.generated.h"

UCLASS()
class UMaterialFunctionInterface : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGuid StateId;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EMaterialFunctionUsage> MaterialFunctionUsage;


};