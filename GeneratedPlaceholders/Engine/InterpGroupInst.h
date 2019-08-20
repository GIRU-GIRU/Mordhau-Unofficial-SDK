#pragma once

#include "CoreMinimal.h"
#include "InterpGroupInst.generated.h"

UCLASS()
class UInterpGroupInst : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UInterpGroup* Group;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AActor* GroupActor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UInterpTrackInst*> TrackInst;


};