#pragma once

#include "CoreMinimal.h"
#include "GarbageCollectionSettings.generated.h"

UCLASS()
class UGarbageCollectionSettings : public UDeveloperSettings
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TimeBetweenPurgingPendingKillObjects;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char FlushStreamingOnGC : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char AllowParallelGC : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char IncrementalBeginDestroyEnabled : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char CreateGCClusters : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char MergeGCClusters : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char ActorClusteringEnabled : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char BlueprintClusteringEnabled : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UseDisregardForGCOnDedicatedServers : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MinGCClusterSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NumRetriesBeforeForcingGC;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxObjectsNotConsideredByGC;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SizeOfPermanentObjectPool;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxObjectsInGame;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxObjectsInEditor;


};