#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleMeshMaterial.generated.h"

UCLASS()
class UParticleModuleMeshMaterial : public UParticleModuleMaterialBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMaterialInterface*> MeshMaterials;


};