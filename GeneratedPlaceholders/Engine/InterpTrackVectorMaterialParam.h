#pragma once

#include "CoreMinimal.h"
#include "InterpTrackVectorMaterialParam.generated.h"

UCLASS()
class UInterpTrackVectorMaterialParam : public UInterpTrackVectorBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMaterialInterface*> TargetMaterials;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName ParamName;


};