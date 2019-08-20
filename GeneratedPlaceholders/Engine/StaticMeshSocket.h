#pragma once

#include "CoreMinimal.h"
#include "StaticMeshSocket.generated.h"

UCLASS()
class UStaticMeshSocket : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName SocketName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector RelativeLocation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator RelativeRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector RelativeScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString Tag;


};