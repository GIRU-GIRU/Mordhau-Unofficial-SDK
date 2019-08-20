#pragma once

#include "CoreMinimal.h"
#include "GameplayTagsSettings.generated.h"

UCLASS()
class UGameplayTagsSettings : public UGameplayTagsList
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool ImportTagsFromConfig;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool WarnOnInvalidTags;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FGameplayTagCategoryRemap> CategoryRemapping;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool FastReplication;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FSoftObjectPath> GameplayTagTableList;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FGameplayTagRedirect> GameplayTagRedirects;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FName> CommonlyReplicatedTags;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NumBitsForContainerSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NetIndexFirstBitSegment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FRestrictedConfigInfo> RestrictedConfigFiles;


};