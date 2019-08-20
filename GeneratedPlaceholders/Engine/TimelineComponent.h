#pragma once

#include "CoreMinimal.h"
#include "TimelineComponent.generated.h"

UCLASS()
class UTimelineComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FTimeline TheTimeline;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIgnoreTimeDilation : 1;

	UFUNCTION(BlueprintCallable, Category = "TimelineComponent")
	void Stop();
	UFUNCTION(BlueprintCallable, Category = "TimelineComponent")
		void SetVectorCurve(class UCurveVector* NewVectorCurve, const struct FName& VectorTrackName);
	UFUNCTION(BlueprintCallable, Category = "TimelineComponent")
		void SetTimelineLengthMode(TEnumAsByte<ETimelineLengthMode> NewLengthMode);
	UFUNCTION(BlueprintCallable, Category = "TimelineComponent")
		void SetTimelineLength(float NewLength);
	UFUNCTION(BlueprintCallable, Category = "TimelineComponent")
		void SetPlayRate(float NewRate);
	UFUNCTION(BlueprintCallable, Category = "TimelineComponent")
		void SetPlaybackPosition(float NewPosition, bool bFireEvents, bool bFireUpdate);
	UFUNCTION(BlueprintCallable, Category = "TimelineComponent")
		void SetNewTime(float NewTime);
	UFUNCTION(BlueprintCallable, Category = "TimelineComponent")
		void SetLooping(bool bNewLooping);
	UFUNCTION(BlueprintCallable, Category = "TimelineComponent")
		void SetLinearColorCurve(class UCurveLinearColor* NewLinearColorCurve, const struct FName& LinearColorTrackName);
	UFUNCTION(BlueprintCallable, Category = "TimelineComponent")
		void SetIgnoreTimeDilation(bool bNewIgnoreTimeDilation);
	UFUNCTION(BlueprintCallable, Category = "TimelineComponent")
		void SetFloatCurve(class UCurveFloat* NewFloatCurve, const struct FName& FloatTrackName);
	UFUNCTION(BlueprintCallable, Category = "TimelineComponent")
		void ReverseFromEnd();
	UFUNCTION(BlueprintCallable, Category = "TimelineComponent")
		void Reverse();
	UFUNCTION(BlueprintCallable, Category = "TimelineComponent")
		void PlayFromStart();
	UFUNCTION(BlueprintCallable, Category = "TimelineComponent")
		void Play();
	UFUNCTION(BlueprintCallable, Category = "TimelineComponent")
		void OnRep_Timeline();
	UFUNCTION(BlueprintCallable, Category = "TimelineComponent")
		bool IsReversing();
	UFUNCTION(BlueprintCallable, Category = "TimelineComponent")
		bool IsPlaying();
	UFUNCTION(BlueprintCallable, Category = "TimelineComponent")
		bool IsLooping();
	UFUNCTION(BlueprintCallable, Category = "TimelineComponent")
		float GetTimelineLength();
	UFUNCTION(BlueprintCallable, Category = "TimelineComponent")
		float GetPlayRate();
	UFUNCTION(BlueprintCallable, Category = "TimelineComponent")
		float GetPlaybackPosition();
	UFUNCTION(BlueprintCallable, Category = "TimelineComponent")
		bool GetIgnoreTimeDilation();

};