#pragma once

#include "CoreMinimal.h"
#include "LevelSequenceActor.generated.h"

UCLASS()
class ALevelSequenceActor : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAutoPlay;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class ULevelSequencePlayer* SequencePlayer;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftObjectPath LevelSequence;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class AActor*> AdditionalEventReceivers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class ULevelSequenceBurnInOptions* BurnInOptions;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMovieSceneBindingOverrides* BindingOverrides;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bOverrideInstanceData;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UObject* DefaultInstanceData;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class ULevelSequenceBurnIn* BurnInInstance;

	UFUNCTION(BlueprintCallable, Category = "LevelSequenceActor")
	void SetSequence(class ULevelSequence* InSequence);
	UFUNCTION(BlueprintCallable, Category = "LevelSequenceActor")
		void SetEventReceivers(TArray<class AActor*> AdditionalReceivers);
	UFUNCTION(BlueprintCallable, Category = "LevelSequenceActor")
		void SetBinding(const struct FMovieSceneObjectBindingID& Binding, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset);
	UFUNCTION(BlueprintCallable, Category = "LevelSequenceActor")
		void ResetBindings();
	UFUNCTION(BlueprintCallable, Category = "LevelSequenceActor")
		void ResetBinding(const struct FMovieSceneObjectBindingID& Binding);
	UFUNCTION(BlueprintCallable, Category = "LevelSequenceActor")
		void RemoveBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor);
	UFUNCTION(BlueprintCallable, Category = "LevelSequenceActor")
		class ULevelSequence* GetSequence(bool bLoad, bool bInitializePlayer);
	UFUNCTION(BlueprintCallable, Category = "LevelSequenceActor")
		void AddBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset);

};