#pragma once

#include "CoreMinimal.h"
#include "MediaPlayer.generated.h"

UCLASS()
class UMediaPlayer : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnEndReached;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnMediaClosed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnMediaOpened;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnMediaOpenFailed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnPlaybackResumed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnPlaybackSuspended;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnSeekCompleted;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnTracksChanged;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FTimespan CacheAhead;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FTimespan CacheBehind;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FTimespan CacheBehindGame;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool NativeAudioOut;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool PlayOnOpen;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char Shuffle : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char Loop : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMediaPlaylist* Playlist;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int PlaylistIndex;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FTimespan TimeDelay;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HorizontalFieldOfView;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float VerticalFieldOfView;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator ViewRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGuid PlayerGuid;

	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
	bool SupportsSeeking();
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		bool SupportsScrubbing();
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		bool SupportsRate(float Rate, bool Unthinned);
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		bool SetViewRotation(const struct FRotator& Rotation, bool Absolute);
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		bool SetViewField(float Horizontal, float Vertical, bool Absolute);
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		bool SetVideoTrackFrameRate(int TrackIndex, int FormatIndex, float FrameRate);
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		bool SetTrackFormat(EMediaPlayerTrack TrackType, int TrackIndex, int FormatIndex);
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		void SetTimeDelay(const struct FTimespan& TimeDelay);
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		bool SetRate(float Rate);
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		bool SetNativeVolume(float Volume);
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		bool SetLooping(bool Looping);
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		void SetDesiredPlayerName(const struct FName& PlayerName);
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		void SetBlockOnTime(const struct FTimespan& Time);
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		bool SelectTrack(EMediaPlayerTrack TrackType, int TrackIndex);
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		bool Seek(const struct FTimespan& Time);
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		bool Rewind();
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		bool Reopen();
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		bool Previous();
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		bool Play();
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		bool Pause();
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		bool OpenURL(const struct FString& URL);
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		bool OpenSource(class UMediaSource* MediaSource);
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		bool OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int Index);
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		bool OpenPlaylist(class UMediaPlaylist* InPlaylist);
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		bool OpenFile(const struct FString& FilePath);
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		bool Next();
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		bool IsReady();
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		bool IsPreparing();
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		bool IsPlaying();
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		bool IsPaused();
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		bool IsLooping();
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		bool IsConnecting();
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		bool IsBuffering();
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		bool HasError();
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		struct FRotator GetViewRotation();
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		struct FString GetVideoTrackType(int TrackIndex, int FormatIndex);
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		struct FFloatRange GetVideoTrackFrameRates(int TrackIndex, int FormatIndex);
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		float GetVideoTrackFrameRate(int TrackIndex, int FormatIndex);
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		struct FIntPoint GetVideoTrackDimensions(int TrackIndex, int FormatIndex);
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		float GetVideoTrackAspectRatio(int TrackIndex, int FormatIndex);
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		float GetVerticalFieldOfView();
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		struct FString GetUrl();
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		struct FString GetTrackLanguage(EMediaPlayerTrack TrackType, int TrackIndex);
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		int GetTrackFormat(EMediaPlayerTrack TrackType, int TrackIndex);
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		struct FText GetTrackDisplayName(EMediaPlayerTrack TrackType, int TrackIndex);
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		struct FTimespan GetTimeDelay();
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		struct FTimespan GetTime();
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		void GetSupportedRates(bool Unthinned, TArray<struct FFloatRange>* OutRates);
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		int GetSelectedTrack(EMediaPlayerTrack TrackType);
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		float GetRate();
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		int GetPlaylistIndex();
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		class UMediaPlaylist* GetPlaylist();
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		struct FName GetPlayerName();
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		int GetNumTracks(EMediaPlayerTrack TrackType);
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		int GetNumTrackFormats(EMediaPlayerTrack TrackType, int TrackIndex);
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		struct FText GetMediaName();
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		float GetHorizontalFieldOfView();
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		struct FTimespan GetDuration();
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		struct FName GetDesiredPlayerName();
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		struct FString GetAudioTrackType(int TrackIndex, int FormatIndex);
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		int GetAudioTrackSampleRate(int TrackIndex, int FormatIndex);
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		int GetAudioTrackChannels(int TrackIndex, int FormatIndex);
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		void Close();
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		bool CanPlayUrl(const struct FString& URL);
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		bool CanPlaySource(class UMediaSource* MediaSource);
	UFUNCTION(BlueprintCallable, Category = "MediaPlayer")
		bool CanPause();

};