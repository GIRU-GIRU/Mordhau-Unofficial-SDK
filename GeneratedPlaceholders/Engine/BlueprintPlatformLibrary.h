#pragma once

#include "CoreMinimal.h"
#include "BlueprintPlatformLibrary.generated.h"

UCLASS()
class UBlueprintPlatformLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "BlueprintPlatformLibrary")
	void STATIC_ScheduleLocalNotificationFromNow(int inSecondsFromNow, const struct FText& Title, const struct FText& Body, const struct FText& Action, const struct FString& ActivationEvent);
	UFUNCTION(BlueprintCallable, Category = "BlueprintPlatformLibrary")
		void STATIC_ScheduleLocalNotificationBadgeFromNow(int inSecondsFromNow, const struct FString& ActivationEvent);
	UFUNCTION(BlueprintCallable, Category = "BlueprintPlatformLibrary")
		void STATIC_ScheduleLocalNotificationBadgeAtTime(const struct FDateTime& FireDateTime, bool LocalTime, const struct FString& ActivationEvent);
	UFUNCTION(BlueprintCallable, Category = "BlueprintPlatformLibrary")
		void STATIC_ScheduleLocalNotificationAtTime(const struct FDateTime& FireDateTime, bool LocalTime, const struct FText& Title, const struct FText& Body, const struct FText& Action, const struct FString& ActivationEvent);
	UFUNCTION(BlueprintCallable, Category = "BlueprintPlatformLibrary")
		void STATIC_GetLaunchNotification(bool* NotificationLaunchedApp, struct FString* ActivationEvent, int* FireDate);
	UFUNCTION(BlueprintCallable, Category = "BlueprintPlatformLibrary")
		void STATIC_ClearAllLocalNotifications();
	UFUNCTION(BlueprintCallable, Category = "BlueprintPlatformLibrary")
		void STATIC_CancelLocalNotification(const struct FString& ActivationEvent);

};