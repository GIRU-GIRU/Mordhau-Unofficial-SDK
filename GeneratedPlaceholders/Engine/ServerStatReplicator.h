#pragma once

#include "CoreMinimal.h"
#include "ServerStatReplicator.generated.h"

UCLASS()
class AServerStatReplicator : public AInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUpdateStatNet;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bOverwriteClientStats;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t Channels;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t InRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t OutRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t OutSaturation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t MaxPacketOverhead;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t InRateClientMax;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t InRateClientMin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t InRateClientAvg;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t InPacketsClientMax;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t InPacketsClientMin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t InPacketsClientAvg;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t OutRateClientMax;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t OutRateClientMin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t OutRateClientAvg;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t OutPacketsClientMax;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t OutPacketsClientMin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t OutPacketsClientAvg;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t NetNumClients;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t InPackets;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t OutPackets;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t InBunches;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t OutBunches;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t OutLoss;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t InLoss;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t VoiceBytesSent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t VoiceBytesRecv;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t VoicePacketsSent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t VoicePacketsRecv;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t PercentInVoice;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t PercentOutVoice;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t NumActorChannels;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t NumConsideredActors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t PrioritizedActors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t NumRelevantActors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t NumRelevantDeletedActors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t NumReplicatedActorAttempts;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t NumReplicatedActors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t NumActors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t NumNetActors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t NumDormantActors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t NumInitiallyDormantActors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t NumNetGUIDsAckd;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t NumNetGUIDsPending;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t NumNetGUIDsUnAckd;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t ObjPathBytes;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t NetGUIDOutRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t NetGUIDInRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t NetSaturated;


};