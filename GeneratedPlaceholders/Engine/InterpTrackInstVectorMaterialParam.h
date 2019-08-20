#pragma once

#include "CoreMinimal.h"
#include "InterpTrackInstVectorMaterialParam.generated.h"

UCLASS()
class UInterpTrackInstVectorMaterialParam : public UInterpTrackInst
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMaterialInstanceDynamic*> MaterialInstances;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FVector> ResetVectors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FPrimitiveMaterialRef> PrimitiveMaterialRefs;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UInterpTrackVectorMaterialParam* InstancedTrack;


};