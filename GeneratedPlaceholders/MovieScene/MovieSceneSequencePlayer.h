#pragma once

#include "CoreMinimal.h"
#include "MovieSceneSequencePlayer.generated.h"

UCLASS()
class UMovieSceneSequencePlayer : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnPlay;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnPlayReverse;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnStop;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnPause;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnFinished;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EMovieScenePlayerStatus> Status;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bReversePlayback : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMovieSceneSequence* Sequence;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FFrameNumber StartTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int DurationFrames;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int CurrentNumLoops;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings;

	UFUNCTION(BlueprintCallable, Category = "MovieSceneSequencePlayer")
	void Stop();
	UFUNCTION(BlueprintCallable, Category = "MovieSceneSequencePlayer")
		void SetTimeRange(float StartTime, float Duration);
	UFUNCTION(BlueprintCallable, Category = "MovieSceneSequencePlayer")
		void SetPlayRate(float PlayRate);
	UFUNCTION(BlueprintCallable, Category = "MovieSceneSequencePlayer")
		void SetPlaybackRange(float NewStartTime, float NewEndTime);
	UFUNCTION(BlueprintCallable, Category = "MovieSceneSequencePlayer")
		void SetPlaybackPosition(float NewPlaybackPosition);
	UFUNCTION(BlueprintCallable, Category = "MovieSceneSequencePlayer")
		void SetFrameRate(const struct FFrameRate& FrameRate);
	UFUNCTION(BlueprintCallable, Category = "MovieSceneSequencePlayer")
		void SetFrameRange(int StartFrame, int Duration);
	UFUNCTION(BlueprintCallable, Category = "MovieSceneSequencePlayer")
		void SetDisableCameraCuts(bool bInDisableCameraCuts);
	UFUNCTION(BlueprintCallable, Category = "MovieSceneSequencePlayer")
		void ScrubToSeconds(float TimeInSeconds);
	UFUNCTION(BlueprintCallable, Category = "MovieSceneSequencePlayer")
		void ScrubToFrame(const struct FFrameTime& NewPosition);
	UFUNCTION(BlueprintCallable, Category = "MovieSceneSequencePlayer")
		void Scrub();
	UFUNCTION(BlueprintCallable, Category = "MovieSceneSequencePlayer")
		void PlayToSeconds(float TimeInSeconds);
	UFUNCTION(BlueprintCallable, Category = "MovieSceneSequencePlayer")
		void PlayToFrame(const struct FFrameTime& NewPosition);
	UFUNCTION(BlueprintCallable, Category = "MovieSceneSequencePlayer")
		void PlayReverse();
	UFUNCTION(BlueprintCallable, Category = "MovieSceneSequencePlayer")
		void PlayLooping(int NumLoops);
	UFUNCTION(BlueprintCallable, Category = "MovieSceneSequencePlayer")
		void Play();
	UFUNCTION(BlueprintCallable, Category = "MovieSceneSequencePlayer")
		void Pause();
	UFUNCTION(BlueprintCallable, Category = "MovieSceneSequencePlayer")
		void JumpToSeconds(float TimeInSeconds);
	UFUNCTION(BlueprintCallable, Category = "MovieSceneSequencePlayer")
		void JumpToPosition(float NewPlaybackPosition);
	UFUNCTION(BlueprintCallable, Category = "MovieSceneSequencePlayer")
		void JumpToFrame(const struct FFrameTime& NewPosition);
	UFUNCTION(BlueprintCallable, Category = "MovieSceneSequencePlayer")
		bool IsReversed();
	UFUNCTION(BlueprintCallable, Category = "MovieSceneSequencePlayer")
		bool IsPlaying();
	UFUNCTION(BlueprintCallable, Category = "MovieSceneSequencePlayer")
		bool IsPaused();
	UFUNCTION(BlueprintCallable, Category = "MovieSceneSequencePlayer")
		void GoToEndAndStop();
	UFUNCTION(BlueprintCallable, Category = "MovieSceneSequencePlayer")
		struct FQualifiedFrameTime GetStartTime();
	UFUNCTION(BlueprintCallable, Category = "MovieSceneSequencePlayer")
		float GetPlayRate();
	UFUNCTION(BlueprintCallable, Category = "MovieSceneSequencePlayer")
		float GetPlaybackStart();
	UFUNCTION(BlueprintCallable, Category = "MovieSceneSequencePlayer")
		float GetPlaybackPosition();
	UFUNCTION(BlueprintCallable, Category = "MovieSceneSequencePlayer")
		float GetPlaybackEnd();
	UFUNCTION(BlueprintCallable, Category = "MovieSceneSequencePlayer")
		float GetLength();
	UFUNCTION(BlueprintCallable, Category = "MovieSceneSequencePlayer")
		struct FFrameRate GetFrameRate();
	UFUNCTION(BlueprintCallable, Category = "MovieSceneSequencePlayer")
		int GetFrameDuration();
	UFUNCTION(BlueprintCallable, Category = "MovieSceneSequencePlayer")
		struct FQualifiedFrameTime GetEndTime();
	UFUNCTION(BlueprintCallable, Category = "MovieSceneSequencePlayer")
		struct FQualifiedFrameTime GetDuration();
	UFUNCTION(BlueprintCallable, Category = "MovieSceneSequencePlayer")
		bool GetDisableCameraCuts();
	UFUNCTION(BlueprintCallable, Category = "MovieSceneSequencePlayer")
		struct FQualifiedFrameTime GetCurrentTime();
	UFUNCTION(BlueprintCallable, Category = "MovieSceneSequencePlayer")
		TArray<class UObject*> GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding);
	UFUNCTION(BlueprintCallable, Category = "MovieSceneSequencePlayer")
		void ChangePlaybackDirection();

};