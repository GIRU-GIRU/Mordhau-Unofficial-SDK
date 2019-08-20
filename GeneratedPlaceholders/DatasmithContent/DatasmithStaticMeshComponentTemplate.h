#pragma once

#include "CoreMinimal.h"
#include "DatasmithStaticMeshComponentTemplate.generated.h"

UCLASS()
class UDatasmithStaticMeshComponentTemplate : public UDatasmithSceneComponentTemplate
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UStaticMesh* StaticMesh;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMaterialInterface*> OverrideMaterials;


};