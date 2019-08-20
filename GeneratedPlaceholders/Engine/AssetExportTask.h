#pragma once

#include "CoreMinimal.h"
#include "AssetExportTask.generated.h"

UCLASS()
class UAssetExportTask : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UObject* Object;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UExporter* Exporter;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString Filename;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bSelected;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bReplaceIdentical;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bPrompt;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAutomated;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseFileArchive;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bWriteEmptyFiles;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UObject*> IgnoreObjectList;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UObject* Options;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FString> Errors;


};