#pragma once

#include "CoreMinimal.h"
#include "LevelStreaming.generated.h"

UCLASS()
class ULevelStreaming : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData00[0x28];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName PackageNameToLoad;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FName> LODPackageNames;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FTransform LevelTransform;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int LevelLODIndex;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData03 : 2;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShouldBeVisible : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShouldBeLoaded : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bLocked : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsStatic : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShouldBlockOnLoad : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShouldBlockOnUnload : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDisableDistanceStreaming : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDrawOnLevelStatusMap : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor LevelColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class ALevelStreamingVolume*> EditorStreamingVolumes;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinTimeBetweenVolumeUnloadRequests;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnLevelLoaded;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnLevelUnloaded;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnLevelShown;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnLevelHidden;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class ULevel* LoadedLevel;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class ULevel* PendingUnloadLevel;

	UFUNCTION(BlueprintCallable, Category = "LevelStreaming")
	bool ShouldBeLoaded();
	UFUNCTION(BlueprintCallable, Category = "LevelStreaming")
		void SetShouldBeVisible(bool bInShouldBeVisible);
	UFUNCTION(BlueprintCallable, Category = "LevelStreaming")
		void SetShouldBeLoaded(bool bInShouldBeLoaded);
	UFUNCTION(BlueprintCallable, Category = "LevelStreaming")
		void SetLevelLODIndex(int LODIndex);
	UFUNCTION(BlueprintCallable, Category = "LevelStreaming")
		bool IsStreamingStatePending();
	UFUNCTION(BlueprintCallable, Category = "LevelStreaming")
		bool IsLevelVisible();
	UFUNCTION(BlueprintCallable, Category = "LevelStreaming")
		bool IsLevelLoaded();
	UFUNCTION(BlueprintCallable, Category = "LevelStreaming")
		struct FName GetWorldAssetPackageFName();
	UFUNCTION(BlueprintCallable, Category = "LevelStreaming")
		class ALevelScriptActor* GetLevelScriptActor();
	UFUNCTION(BlueprintCallable, Category = "LevelStreaming")
		class ULevelStreaming* CreateInstance(const struct FString& UniqueInstanceName);

};