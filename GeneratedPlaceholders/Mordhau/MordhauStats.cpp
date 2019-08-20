#include "MordhauStats.h"

void UMordhauStats::UpdateUserAvgRate(const struct FStatAvgRate& Stat, const struct FSteamID& SteamID, float CountThisSession, float SessionLength, ECallResult* CallResult) {
}
	void UMordhauStats::UpdateAvgRate(const struct FStatAvgRate& Stat, float CountThisSession, float SessionLength, ECallResult* CallResult) {
}
	void UMordhauStats::UnlockUserAchievement(const struct FAchievement& Achievement, const struct FSteamID& SteamID, ECallResult* CallResult) {
}
	void UMordhauStats::UnlockAchievement(const struct FAchievement& Achievement, ECallResult* CallResult) {
}
	void UMordhauStats::StoreUserStats(const struct FSteamID& SteamID, ECallResult* CallResult) {
}
	void UMordhauStats::StoreStats(ECallResult* CallResult) {
}
	void UMordhauStats::SetUserIntValue(const struct FStatInt& Stat, const struct FSteamID& SteamID, int Value, ECallResult* CallResult) {
}
	void UMordhauStats::SetUserFloatValue(const struct FStatFloat& Stat, const struct FSteamID& SteamID, float Value, ECallResult* CallResult) {
}
	void UMordhauStats::SetIntValue(const struct FStatInt& Stat, int Value, ECallResult* CallResult) {
}
	void UMordhauStats::SetFloatValue(const struct FStatFloat& Stat, float Value, ECallResult* CallResult) {
}
	void UMordhauStats::ResetAllStats(bool bAchievementsToo, ECallResult* CallResult) {
}
	void UMordhauStats::RequestUserStats(const struct FSteamID& SteamID, ECallResult* CallResult) {
}
	void UMordhauStats::RequestStats(ECallResult* CallResult) {
}
	void UMordhauStats::LockUserAchievement(const struct FAchievement& Achievement, const struct FSteamID& SteamID, ECallResult* CallResult) {
}
	void UMordhauStats::LockAchievement(const struct FAchievement& Achievement, ECallResult* CallResult) {
}
	void UMordhauStats::IsUserAchievementUnlocked(const struct FAchievement& Achievement, const struct FSteamID& SteamID, ECallResult* CallResult, bool* bIsUnlocked) {
}
	void UMordhauStats::IsAchievementUnlocked(const struct FAchievement& Achievement, ECallResult* CallResult, bool* bIsUnlocked) {
}
	void UMordhauStats::IncrementIntStatValueChecked(class UWorld* World, const struct FStatInt& Stat) {
}
	void UMordhauStats::GetUserIntValue(const struct FStatInt& Stat, const struct FSteamID& SteamID, ECallResult* CallResult, int* Value) {
}
	void UMordhauStats::GetUserFloatValue(const struct FStatFloat& Stat, const struct FSteamID& SteamID, ECallResult* CallResult, float* Value) {
}
	int UMordhauStats::GetUnlockIntValue(const struct FProgressAchievementInt& Achievement) {
}
	float UMordhauStats::GetUnlockFloatValue(const struct FProgressAchievementFloat& Achievement) {
}
	int UMordhauStats::GetMaxIntValue(const struct FStatInt& Stat) {
}
	float UMordhauStats::GetMaxFloatValue(const struct FStatFloat& Stat) {
}
	void UMordhauStats::GetIntValue(const struct FStatInt& Stat, ECallResult* CallResult, int* Value) {
}
	bool UMordhauStats::GetIntStatValueByName(const struct FString& StatName, int* OutValue) {
}
	struct FStatInt UMordhauStats::GetIntStat(const struct FProgressAchievementInt& Achievement) {
}
	void UMordhauStats::GetFloatValue(const struct FStatFloat& Stat, ECallResult* CallResult, float* Value) {
}
	struct FStatFloat UMordhauStats::GetFloatStat(const struct FProgressAchievementFloat& Achievement) {
}
