#pragma once

#include "CoreMinimal.h"
#include "InterpTrackInstFloatMaterialParam.generated.h"

UCLASS()
class UInterpTrackInstFloatMaterialParam : public UInterpTrackInst
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMaterialInstanceDynamic*> MaterialInstances;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<float> ResetFloats;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FPrimitiveMaterialRef> PrimitiveMaterialRefs;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UInterpTrackFloatMaterialParam* InstancedTrack;


};