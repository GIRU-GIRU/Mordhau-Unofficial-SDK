#pragma once

#include "CoreMinimal.h"
#include "InterpTrackFloatMaterialParam.generated.h"

UCLASS()
class UInterpTrackFloatMaterialParam : public UInterpTrackFloatBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMaterialInterface*> TargetMaterials;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName ParamName;


};