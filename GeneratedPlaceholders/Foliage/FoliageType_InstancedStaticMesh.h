#pragma once

#include "CoreMinimal.h"
#include "FoliageType_InstancedStaticMesh.generated.h"

UCLASS()
class UFoliageType_InstancedStaticMesh : public UFoliageType
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UStaticMesh* Mesh;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMaterialInterface*> OverrideMaterials;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* ComponentClass;


};