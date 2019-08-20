#pragma once

#include "CoreMinimal.h"
#include "MediaPlaylist.generated.h"

UCLASS()
class UMediaPlaylist : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMediaSource*> Items;

	UFUNCTION(BlueprintCallable, Category = "MediaPlaylist")
	bool Replace(int Index, class UMediaSource* Replacement);
	UFUNCTION(BlueprintCallable, Category = "MediaPlaylist")
		bool RemoveAt(int Index);
	UFUNCTION(BlueprintCallable, Category = "MediaPlaylist")
		bool Remove(class UMediaSource* MediaSource);
	UFUNCTION(BlueprintCallable, Category = "MediaPlaylist")
		int Num();
	UFUNCTION(BlueprintCallable, Category = "MediaPlaylist")
		void Insert(class UMediaSource* MediaSource, int Index);
	UFUNCTION(BlueprintCallable, Category = "MediaPlaylist")
		class UMediaSource* GetRandom(int* OutIndex);
	UFUNCTION(BlueprintCallable, Category = "MediaPlaylist")
		class UMediaSource* GetPrevious(int* InOutIndex);
	UFUNCTION(BlueprintCallable, Category = "MediaPlaylist")
		class UMediaSource* GetNext(int* InOutIndex);
	UFUNCTION(BlueprintCallable, Category = "MediaPlaylist")
		class UMediaSource* Get(int Index);
	UFUNCTION(BlueprintCallable, Category = "MediaPlaylist")
		bool AddUrl(const struct FString& URL);
	UFUNCTION(BlueprintCallable, Category = "MediaPlaylist")
		bool AddFile(const struct FString& FilePath);
	UFUNCTION(BlueprintCallable, Category = "MediaPlaylist")
		bool Add(class UMediaSource* MediaSource);

};