#include "BlueprintPlatformLibrary.h"

void UBlueprintPlatformLibrary::STATIC_ScheduleLocalNotificationFromNow(int inSecondsFromNow, const struct FText& Title, const struct FText& Body, const struct FText& Action, const struct FString& ActivationEvent) {
}
	void UBlueprintPlatformLibrary::STATIC_ScheduleLocalNotificationBadgeFromNow(int inSecondsFromNow, const struct FString& ActivationEvent) {
}
	void UBlueprintPlatformLibrary::STATIC_ScheduleLocalNotificationBadgeAtTime(const struct FDateTime& FireDateTime, bool LocalTime, const struct FString& ActivationEvent) {
}
	void UBlueprintPlatformLibrary::STATIC_ScheduleLocalNotificationAtTime(const struct FDateTime& FireDateTime, bool LocalTime, const struct FText& Title, const struct FText& Body, const struct FText& Action, const struct FString& ActivationEvent) {
}
	void UBlueprintPlatformLibrary::STATIC_GetLaunchNotification(bool* NotificationLaunchedApp, struct FString* ActivationEvent, int* FireDate) {
}
	void UBlueprintPlatformLibrary::STATIC_ClearAllLocalNotifications() {
}
	void UBlueprintPlatformLibrary::STATIC_CancelLocalNotification(const struct FString& ActivationEvent) {
}
