#pragma once

#include "CoreMinimal.h"
#include "DeviceProfile.generated.h"

UCLASS()
class UDeviceProfile : public UTextureLODSettings
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString DeviceType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString BaseProfileName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UObject* Parent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FString> CVars;


};