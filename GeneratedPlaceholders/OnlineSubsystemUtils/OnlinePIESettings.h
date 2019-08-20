#pragma once

#include "CoreMinimal.h"
#include "OnlinePIESettings.generated.h"

UCLASS()
class UOnlinePIESettings : public UDeveloperSettings
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bOnlinePIEEnabled;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FPIELoginSettingsInternal> Logins;


};