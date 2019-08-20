#pragma once

#include "CoreMinimal.h"
#include "ProxyLODMeshSimplificationSettings.generated.h"

UCLASS()
class UProxyLODMeshSimplificationSettings : public UDeveloperSettings
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName ProxyLODMeshReductionModuleName;


};