#pragma once

#include "CoreMinimal.h"
#include "LODActor.generated.h"

UCLASS()
class ALODActor : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* StaticMeshComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UHLODProxy* Proxy;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName Key;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LODDrawDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class AActor*> SubActors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int LODLevel;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char CachedNumHLODLevels;


};