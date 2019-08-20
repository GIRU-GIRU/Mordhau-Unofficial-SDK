#pragma once

#include "CoreMinimal.h"
#include "DatasmithAssetUserData.generated.h"

UCLASS()
class UDatasmithAssetUserData : public UAssetUserData
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TMap<struct FName, struct FString> MetaData;


};