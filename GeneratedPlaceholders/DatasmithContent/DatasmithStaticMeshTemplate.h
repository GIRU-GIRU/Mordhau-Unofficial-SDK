#pragma once

#include "CoreMinimal.h"
#include "DatasmithStaticMeshTemplate.generated.h"

UCLASS()
class UDatasmithStaticMeshTemplate : public UDatasmithObjectTemplate
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FDatasmithMeshSectionInfoMapTemplate SectionInfoMap;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int LightMapCoordinateIndex;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int LightMapResolution;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FDatasmithMeshBuildSettingsTemplate> BuildSettings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FDatasmithStaticMaterialTemplate> StaticMaterials;


};