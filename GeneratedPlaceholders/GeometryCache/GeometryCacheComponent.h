#pragma once

#include "CoreMinimal.h"
#include "GeometryCacheComponent.generated.h"

UCLASS()
class UGeometryCacheComponent : public UMeshComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bRunning;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bLooping;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StartTimeOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PlaybackSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NumTracks;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ElapsedTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Duration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bManualTick;

	UFUNCTION(BlueprintCallable, Category = "GeometryCacheComponent")
	void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);
	UFUNCTION(BlueprintCallable, Category = "GeometryCacheComponent")
		void Stop();
	UFUNCTION(BlueprintCallable, Category = "GeometryCacheComponent")
		void SetStartTimeOffset(float NewStartTimeOffset);
	UFUNCTION(BlueprintCallable, Category = "GeometryCacheComponent")
		void SetPlaybackSpeed(float NewPlaybackSpeed);
	UFUNCTION(BlueprintCallable, Category = "GeometryCacheComponent")
		void SetLooping(bool bNewLooping);
	UFUNCTION(BlueprintCallable, Category = "GeometryCacheComponent")
		bool SetGeometryCache(class UGeometryCache* NewGeomCache);
	UFUNCTION(BlueprintCallable, Category = "GeometryCacheComponent")
		void PlayReversedFromEnd();
	UFUNCTION(BlueprintCallable, Category = "GeometryCacheComponent")
		void PlayReversed();
	UFUNCTION(BlueprintCallable, Category = "GeometryCacheComponent")
		void PlayFromStart();
	UFUNCTION(BlueprintCallable, Category = "GeometryCacheComponent")
		void Play();
	UFUNCTION(BlueprintCallable, Category = "GeometryCacheComponent")
		void Pause();
	UFUNCTION(BlueprintCallable, Category = "GeometryCacheComponent")
		bool IsPlayingReversed();
	UFUNCTION(BlueprintCallable, Category = "GeometryCacheComponent")
		bool IsPlaying();
	UFUNCTION(BlueprintCallable, Category = "GeometryCacheComponent")
		bool IsLooping();
	UFUNCTION(BlueprintCallable, Category = "GeometryCacheComponent")
		float GetStartTimeOffset();
	UFUNCTION(BlueprintCallable, Category = "GeometryCacheComponent")
		float GetPlaybackSpeed();
	UFUNCTION(BlueprintCallable, Category = "GeometryCacheComponent")
		float GetPlaybackDirection();
	UFUNCTION(BlueprintCallable, Category = "GeometryCacheComponent")
		int GetNumberOfFrames();
	UFUNCTION(BlueprintCallable, Category = "GeometryCacheComponent")
		float GetDuration();
	UFUNCTION(BlueprintCallable, Category = "GeometryCacheComponent")
		float GetAnimationTime();

};