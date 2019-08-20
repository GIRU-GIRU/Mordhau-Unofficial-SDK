#pragma once

#include "CoreMinimal.h"
#include "EditableStaticMeshAdapter.generated.h"

UCLASS()
class UEditableStaticMeshAdapter : public UEditableMeshAdapter
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UStaticMesh* StaticMesh;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UStaticMesh* OriginalStaticMesh;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int StaticMeshLODIndex;


};