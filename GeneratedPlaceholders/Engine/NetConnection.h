#pragma once

#include "CoreMinimal.h"
#include "NetConnection.generated.h"

UCLASS()
class UNetConnection : public UPlayer
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UChildConnection*> Children;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UNetDriver* Driver;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* PackageMapClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPackageMap* PackageMap;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UChannel*> OpenChannels;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class AActor*> SentTemporaries;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AActor* ViewTarget;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AActor* OwningActor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxPacket;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char InternalAck : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FUniqueNetIdRepl PlayerId;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	double LastReceiveTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UChannel*> ChannelsToTick;


};