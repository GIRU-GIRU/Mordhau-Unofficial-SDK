#pragma once

#include "CoreMinimal.h"
#include "MeshSimplificationSettings.generated.h"

UCLASS()
class UMeshSimplificationSettings : public UDeveloperSettings
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName MeshReductionModuleName;


};