#include "MediaPlayer.h"

bool UMediaPlayer::SupportsSeeking() {
}
	bool UMediaPlayer::SupportsScrubbing() {
}
	bool UMediaPlayer::SupportsRate(float Rate, bool Unthinned) {
}
	bool UMediaPlayer::SetViewRotation(const struct FRotator& Rotation, bool Absolute) {
}
	bool UMediaPlayer::SetViewField(float Horizontal, float Vertical, bool Absolute) {
}
	bool UMediaPlayer::SetVideoTrackFrameRate(int TrackIndex, int FormatIndex, float FrameRate) {
}
	bool UMediaPlayer::SetTrackFormat(EMediaPlayerTrack TrackType, int TrackIndex, int FormatIndex) {
}
	void UMediaPlayer::SetTimeDelay(const struct FTimespan& TimeDelay) {
}
	bool UMediaPlayer::SetRate(float Rate) {
}
	bool UMediaPlayer::SetNativeVolume(float Volume) {
}
	bool UMediaPlayer::SetLooping(bool Looping) {
}
	void UMediaPlayer::SetDesiredPlayerName(const struct FName& PlayerName) {
}
	void UMediaPlayer::SetBlockOnTime(const struct FTimespan& Time) {
}
	bool UMediaPlayer::SelectTrack(EMediaPlayerTrack TrackType, int TrackIndex) {
}
	bool UMediaPlayer::Seek(const struct FTimespan& Time) {
}
	bool UMediaPlayer::Rewind() {
}
	bool UMediaPlayer::Reopen() {
}
	bool UMediaPlayer::Previous() {
}
	bool UMediaPlayer::Play() {
}
	bool UMediaPlayer::Pause() {
}
	bool UMediaPlayer::OpenURL(const struct FString& URL) {
}
	bool UMediaPlayer::OpenSource(class UMediaSource* MediaSource) {
}
	bool UMediaPlayer::OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int Index) {
}
	bool UMediaPlayer::OpenPlaylist(class UMediaPlaylist* InPlaylist) {
}
	bool UMediaPlayer::OpenFile(const struct FString& FilePath) {
}
	bool UMediaPlayer::Next() {
}
	bool UMediaPlayer::IsReady() {
}
	bool UMediaPlayer::IsPreparing() {
}
	bool UMediaPlayer::IsPlaying() {
}
	bool UMediaPlayer::IsPaused() {
}
	bool UMediaPlayer::IsLooping() {
}
	bool UMediaPlayer::IsConnecting() {
}
	bool UMediaPlayer::IsBuffering() {
}
	bool UMediaPlayer::HasError() {
}
	struct FRotator UMediaPlayer::GetViewRotation() {
}
	struct FString UMediaPlayer::GetVideoTrackType(int TrackIndex, int FormatIndex) {
}
	struct FFloatRange UMediaPlayer::GetVideoTrackFrameRates(int TrackIndex, int FormatIndex) {
}
	float UMediaPlayer::GetVideoTrackFrameRate(int TrackIndex, int FormatIndex) {
}
	struct FIntPoint UMediaPlayer::GetVideoTrackDimensions(int TrackIndex, int FormatIndex) {
}
	float UMediaPlayer::GetVideoTrackAspectRatio(int TrackIndex, int FormatIndex) {
}
	float UMediaPlayer::GetVerticalFieldOfView() {
}
	struct FString UMediaPlayer::GetUrl() {
}
	struct FString UMediaPlayer::GetTrackLanguage(EMediaPlayerTrack TrackType, int TrackIndex) {
}
	int UMediaPlayer::GetTrackFormat(EMediaPlayerTrack TrackType, int TrackIndex) {
}
	struct FText UMediaPlayer::GetTrackDisplayName(EMediaPlayerTrack TrackType, int TrackIndex) {
}
	struct FTimespan UMediaPlayer::GetTimeDelay() {
}
	struct FTimespan UMediaPlayer::GetTime() {
}
	void UMediaPlayer::GetSupportedRates(bool Unthinned, TArray<struct FFloatRange>* OutRates) {
}
	int UMediaPlayer::GetSelectedTrack(EMediaPlayerTrack TrackType) {
}
	float UMediaPlayer::GetRate() {
}
	int UMediaPlayer::GetPlaylistIndex() {
}
	class UMediaPlaylist* UMediaPlayer::GetPlaylist() {
}
	struct FName UMediaPlayer::GetPlayerName() {
}
	int UMediaPlayer::GetNumTracks(EMediaPlayerTrack TrackType) {
}
	int UMediaPlayer::GetNumTrackFormats(EMediaPlayerTrack TrackType, int TrackIndex) {
}
	struct FText UMediaPlayer::GetMediaName() {
}
	float UMediaPlayer::GetHorizontalFieldOfView() {
}
	struct FTimespan UMediaPlayer::GetDuration() {
}
	struct FName UMediaPlayer::GetDesiredPlayerName() {
}
	struct FString UMediaPlayer::GetAudioTrackType(int TrackIndex, int FormatIndex) {
}
	int UMediaPlayer::GetAudioTrackSampleRate(int TrackIndex, int FormatIndex) {
}
	int UMediaPlayer::GetAudioTrackChannels(int TrackIndex, int FormatIndex) {
}
	void UMediaPlayer::Close() {
}
	bool UMediaPlayer::CanPlayUrl(const struct FString& URL) {
}
	bool UMediaPlayer::CanPlaySource(class UMediaSource* MediaSource) {
}
	bool UMediaPlayer::CanPause() {
}
