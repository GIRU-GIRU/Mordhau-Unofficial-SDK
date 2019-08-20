#pragma once

#include "CoreMinimal.h"
#include "NetDriver.generated.h"

UCLASS()
class UNetDriver : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString NetConnectionClassName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString ReplicationDriverClassName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxDownloadSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bClampListenServerTickRate : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NetServerMaxTickRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NetClientMaxTickRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxInternetClientRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxClientRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ServerTravelPause;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SpawnPrioritySeconds;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RelevantTimeout;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float KeepAliveTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float InitialConnectTimeout;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ConnectionTimeout;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TimeoutMultiplierForUnoptimizedBuilds;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bNoTimeouts;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UNetConnection* ServerConnection;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UNetConnection*> ClientConnections;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UWorld* World;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPackage* WorldPackage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* NetConnectionClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* ReplicationDriverClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UProperty* RoleProperty;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UProperty* RemoteRoleProperty;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName NetDriverName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Time;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UReplicationDriver* ReplicationDriver;


};