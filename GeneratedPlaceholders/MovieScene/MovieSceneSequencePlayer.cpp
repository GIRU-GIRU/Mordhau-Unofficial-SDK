#include "MovieSceneSequencePlayer.h"

void UMovieSceneSequencePlayer::Stop() {
}
	void UMovieSceneSequencePlayer::SetTimeRange(float StartTime, float Duration) {
}
	void UMovieSceneSequencePlayer::SetPlayRate(float PlayRate) {
}
	void UMovieSceneSequencePlayer::SetPlaybackRange(float NewStartTime, float NewEndTime) {
}
	void UMovieSceneSequencePlayer::SetPlaybackPosition(float NewPlaybackPosition) {
}
	void UMovieSceneSequencePlayer::SetFrameRate(const struct FFrameRate& FrameRate) {
}
	void UMovieSceneSequencePlayer::SetFrameRange(int StartFrame, int Duration) {
}
	void UMovieSceneSequencePlayer::SetDisableCameraCuts(bool bInDisableCameraCuts) {
}
	void UMovieSceneSequencePlayer::ScrubToSeconds(float TimeInSeconds) {
}
	void UMovieSceneSequencePlayer::ScrubToFrame(const struct FFrameTime& NewPosition) {
}
	void UMovieSceneSequencePlayer::Scrub() {
}
	void UMovieSceneSequencePlayer::PlayToSeconds(float TimeInSeconds) {
}
	void UMovieSceneSequencePlayer::PlayToFrame(const struct FFrameTime& NewPosition) {
}
	void UMovieSceneSequencePlayer::PlayReverse() {
}
	void UMovieSceneSequencePlayer::PlayLooping(int NumLoops) {
}
	void UMovieSceneSequencePlayer::Play() {
}
	void UMovieSceneSequencePlayer::Pause() {
}
	void UMovieSceneSequencePlayer::JumpToSeconds(float TimeInSeconds) {
}
	void UMovieSceneSequencePlayer::JumpToPosition(float NewPlaybackPosition) {
}
	void UMovieSceneSequencePlayer::JumpToFrame(const struct FFrameTime& NewPosition) {
}
	bool UMovieSceneSequencePlayer::IsReversed() {
}
	bool UMovieSceneSequencePlayer::IsPlaying() {
}
	bool UMovieSceneSequencePlayer::IsPaused() {
}
	void UMovieSceneSequencePlayer::GoToEndAndStop() {
}
	struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetStartTime() {
}
	float UMovieSceneSequencePlayer::GetPlayRate() {
}
	float UMovieSceneSequencePlayer::GetPlaybackStart() {
}
	float UMovieSceneSequencePlayer::GetPlaybackPosition() {
}
	float UMovieSceneSequencePlayer::GetPlaybackEnd() {
}
	float UMovieSceneSequencePlayer::GetLength() {
}
	struct FFrameRate UMovieSceneSequencePlayer::GetFrameRate() {
}
	int UMovieSceneSequencePlayer::GetFrameDuration() {
}
	struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetEndTime() {
}
	struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetDuration() {
}
	bool UMovieSceneSequencePlayer::GetDisableCameraCuts() {
}
	struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetCurrentTime() {
}
	TArray<class UObject*> UMovieSceneSequencePlayer::GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding) {
}
	void UMovieSceneSequencePlayer::ChangePlaybackDirection() {
}
