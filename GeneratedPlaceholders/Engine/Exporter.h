#pragma once

#include "CoreMinimal.h"
#include "Exporter.generated.h"

UCLASS()
class UExporter : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* SupportedClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UObject* ExportRootScope;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FString> FormatExtension;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FString> FormatDescription;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int PreferredFormatIndex;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int TextIndent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bText : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSelectedOnly : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bForceFileOperations : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAssetExportTask* ExportTask;

	UFUNCTION(BlueprintCallable, Category = "Exporter")
	bool STATIC_RunAssetExportTasks(TArray<class UAssetExportTask*> ExportTasks);
	UFUNCTION(BlueprintCallable, Category = "Exporter")
		bool STATIC_RunAssetExportTask(class UAssetExportTask* Task);

};