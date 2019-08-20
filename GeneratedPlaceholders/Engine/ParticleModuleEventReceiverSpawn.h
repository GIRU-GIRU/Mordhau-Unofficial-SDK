#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleEventReceiverSpawn.generated.h"

UCLASS()
class UParticleModuleEventReceiverSpawn : public UParticleModuleEventReceiverBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat SpawnCount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseParticleTime : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUsePSysLocation : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bInheritVelocity : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionVector InheritVelocityScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UPhysicalMaterial*> PhysicalMaterials;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bBanPhysicalMaterials : 1;


};