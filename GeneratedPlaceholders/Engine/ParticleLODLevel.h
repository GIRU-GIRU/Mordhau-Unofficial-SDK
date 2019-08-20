#pragma once

#include "CoreMinimal.h"
#include "ParticleLODLevel.generated.h"

UCLASS()
class UParticleLODLevel : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int Level;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnabled : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UParticleModuleRequired* RequiredModule;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UParticleModule*> Modules;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UParticleModuleTypeDataBase* TypeDataModule;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UParticleModuleSpawn* SpawnModule;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UParticleModuleEventGenerator* EventGenerator;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UParticleModuleSpawnBase*> SpawningModules;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UParticleModule*> SpawnModules;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UParticleModule*> UpdateModules;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UParticleModuleOrbit*> OrbitModules;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UParticleModuleEventReceiverBase*> EventReceiverModules;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char ConvertedModules : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int PeakActiveParticles;


};