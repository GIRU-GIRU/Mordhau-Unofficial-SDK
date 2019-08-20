#pragma once

#include "CoreMinimal.h"
#include "HLODProxy.generated.h"

UCLASS()
class UHLODProxy : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FHLODProxyMesh> ProxyMeshes;


};