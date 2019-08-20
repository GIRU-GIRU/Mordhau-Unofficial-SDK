#pragma once

#include "CoreMinimal.h"
#include "AutomationTestSettings.generated.h"

UCLASS()
class UAutomationTestSettings : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FString> EngineTestModules;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FString> EditorTestModules;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftObjectPath AutomationTestmap;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FEditorMapPerformanceTestDefinition> EditorPerformanceTestMaps;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FSoftObjectPath> AssetsToOpen;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBuildPromotionTestSettings BuildPromotionTest;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMaterialEditorPromotionSettings MaterialEditorPromotionTest;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FParticleEditorPromotionSettings ParticleEditorPromotionTest;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBlueprintEditorPromotionSettings BlueprintEditorPromotionTest;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FString> TestLevelFolders;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FExternalToolDefinition> ExternalTools;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FEditorImportExportTestDefinition> ImportExportTestDefinitions;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FLaunchOnTestSettings> LaunchOnSettings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FIntPoint DefaultScreenshotResolution;


};