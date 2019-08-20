#pragma once

#include "CoreMinimal.h"
#include "CloudStorageBase.generated.h"

UCLASS()
class UCloudStorageBase : public UPlatformInterfaceBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FString> LocalCloudFiles;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSuppressDelegateCalls : 1;


};